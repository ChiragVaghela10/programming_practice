import tkinter as tk
import string
from tkinter import ttk
from PIL import ImageTk, Image
from hangman_game import *

class userInterface(object):

    def __init__(self):
        self.window = tk.Tk()
        self.window['padx'] = 15
        self.window['pady'] = 15
        self.window.title("Hangman Game!")
        self.game = hangman("words.txt")        #initializing backend first, so that useful values will be available to display in frontend.
        self.create_widgets()
        

    def create_guessed_word_frame(self, guessedWord="-----"):
        self.guessedWordFrame = ttk.LabelFrame(self.window, text="Word guessed so far", relief=tk.RIDGE)
        # guessedWordFrame.grid_propagate(0)   #to fix the size of this LabelFrame
        self.guessedWordFrame.grid(row=1, column=1, sticky=tk.E + tk.W + tk.N + tk.S, padx=15)
        self.guessedWord = ttk.Label(self.guessedWordFrame, text=guessedWord, font=(None, 25))
        self.guessedWord.grid(row=1, column=1)


    def create_instruction_frame(self, instructionText = ""):
        self.instructionFrame = ttk.LabelFrame(self.window, text="Instructions", relief=tk.RIDGE)
        self.instructionFrame.grid(row=2, column=1, sticky=tk.E + tk.W + tk.S, padx=15)
        self.instructionText = tk.Text(self.instructionFrame, height=10, width=65)
        self.instructionText.grid(row=1, column=1, padx=5, pady=5)
        self.instructionText.insert(tk.END, instructionText)
        self.instructionText.config(state='disabled')   #do inserting .insert() and binding .bind() before disabling.


    def calculateFilePath(self):
        return "./img/" + str(MAX_ALLOWED_GUESSES - self.game.getAvailableGuesses()) + ".jpg"
    

    def bind_image(self, filePath = "./img/2.jpg"):
        self.img = ImageTk.PhotoImage(Image.open(filePath))
        imglabel = ttk.Label(self.window, image=self.img).grid(row=1, column=2, rowspan=2)


    #special method
    def insert_more_text(self):
        self.instructionText.config(state='normal')
        self.instructionText.insert(tk.END, self.text)
        self.instructionText.config(state='disabled')


    def button_handler(self, event):
        event.widget.config(state='disabled')
        for char, buttonObject in self.buttonDict.items():
            if buttonObject == event.widget:
                self.response = self.game.playGame(char)
                if self.response == 'already guessed':
                    tk.messagebox.showwarning("Warning","Oops! You\'ve already guessed that letter.")
                    return
                elif self.response == 'bad guess':
                    self.create_guesses_available_frame(self.game.getAvailableGuesses())
                    self.create_guessed_letters_frame(self.game.getLettersGuessed())
                    self.text = '\nOops! That letter is not in my word'
                    self.insert_more_text()
                    self.bind_image(self.calculateFilePath())
                    if self.game.getAvailableGuesses() == 0:
                        tk.messagebox.showerror("Error", 'Sorry, you ran out of guesses. The word was ' + self.game.getSecretWord())
                        self.window.destroy()
                        return
                elif self.response:
                    self.create_guessed_word_frame(self.response)
                    self.text = '\nGood guess!'
                    self.insert_more_text()
                    self.create_guessed_letters_frame(self.game.getLettersGuessed())
                    if self.game.isWordGuessed(self.game.getSecretWord(), self.game.getLettersGuessed()):
                        tk.messagebox.showinfo('Success', "Congratulations, you won!")
                        self.window.destroy()
                        return
    

    def create_buttons(self, parent):
        self.buttonDict = {}
        for char in string.ascii_lowercase:
            self.buttonDict[char] = ttk.Button(parent, text=char)
            self.buttonDict[char].grid(row=int(((ord(char)-ord('a'))/8)+1) , column=((ord(char)-ord('a'))%8)+1 , padx=5, pady=5)
            self.buttonDict[char].bind("<ButtonPress-1>", self.button_handler)   #remember this!

        
    def create_letters_frame(self):
        self.lettersFrame = ttk.LabelFrame(self.window, text="Letters Available", relief=tk.RIDGE)
        self.lettersFrame.grid(row=3, column=1, columnspan=2, sticky=tk.W, padx=15, pady=5)
        self.create_buttons(self.lettersFrame)


    def create_guessed_letters_frame(self, guessedLetters):
        self.guessedLettersFrame = ttk.LabelFrame(self.window, text="Guessed Letters", relief=tk.RIDGE)
        self.guessedLettersFrame.grid(row=4, column=1, sticky=tk.W, padx=15, pady=5)
        self.guessedLetters = tk.Text(self.guessedLettersFrame, height=5, width=30)
        self.guessedLetters.grid(row=1, column=1)
        self.guessedLetters.insert(tk.END, guessedLetters)
        self.guessedLetters.config(state='disabled')


    def create_guesses_available_frame(self, guessesAvailable):
        self.guessesAvailableFrame = ttk.LabelFrame(self.window, text="Guesses Available", relief=tk.RIDGE)
        self.guessesAvailableFrame.grid(row=4, column=2, sticky=tk.E, padx=15, pady=5)
        self.guessesAvailable = tk.Text(self.guessesAvailableFrame, height=5, width=30)
        self.guessesAvailable.grid(row=1, column=1)
        self.guessesAvailable.insert(tk.END, str(guessesAvailable))
        self.guessesAvailable.config(state='disabled')


    def create_widgets(self):
        self.create_guessed_word_frame(self.game.getGuessedWord())
        self.create_instruction_frame("Welcome to the game, Hangman!\nI am thinking of a word that is " + str(len(self.game.secretWord)) + " letters long.")
        self.bind_image(self.calculateFilePath())
        self.create_letters_frame()
        self.create_guessed_letters_frame(self.game.getLettersGuessed())
        self.create_guesses_available_frame(self.game.getAvailableGuesses())
        

#create user interface instance        
uI = userInterface()

#starting GUI event loop
uI.window.mainloop()
