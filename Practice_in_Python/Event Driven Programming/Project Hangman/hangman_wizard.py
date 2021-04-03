import tkinter as tk
from tkinter import ttk
from PIL import ImageTk, Image
    
class Wizard(object):

    def __init__(self):
        self.window = tk.Tk()
        self.window['padx'] = 15
        self.window['pady'] = 15
        self.window.title("Hangman Game!")

class welcomePage(Wizard):

    def __init__(self):
        super(welcomePage, self).__init__()
        self.create_widgets(self.window)

    def open_image(self):
        img = Image.open("./img/0.jpg")
        img = ImageTk.PhotoImage(img)
        panel = tk.Label(self.window, image=img)
        panel.image = img
        panel.grid(row=1,column=1)

    def create_widgets(self, window):
        self.open_image()
##        self.welcome_label = ttk.Label(window, text= "Welcome to Hangman Game!")
##        self.welcome_label.grid(row = 1, column = 1)
        self.next_button = ttk.Button(window, text="Next")
        self.next_button.grid(row=2, column=1)
        self.next_button['command'] = self.go_next

    def go_next(self):
##        for w in self.window.children.values():
##            w.destroy()
        secondPage = mainPage(self.window)

##    def delete_widgets(self):
##        del self.welcome_label
##        del self.next_button
##        mainPage.create_widget(self.window)

class mainPage(Wizard):

    def __init__(self, window):
##        pass
        self.window = window
        self.create_widgets(self.window)

    def create_widgets(self, window):
        main_label = ttk.Label(window, text= "You are on main page!")
        main_label.grid(row = 1, column = 1)
        quit_button = ttk.Button(window, text="Prev")
        quit_button.grid(row=2, column=1)
        quit_button['command'] = self.window.destroy

game = welcomePage()
game.window.mainloop()
