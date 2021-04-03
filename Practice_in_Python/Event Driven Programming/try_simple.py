import tkinter as tk
from tkinter import ttk
from PIL import ImageTk, Image

app_root = tk.Tk()
app_root['padx'] = 15
app_root['pady'] = 15
app_root.title("Hangman Game!")
guessedWordFrame = ttk.LabelFrame(app_root, text="", relief=tk.RIDGE)
guessedWordFrame.grid(row=1, column=1, padx=15)
my_label = ttk.Label(guessedWordFrame, text="-----", font=(None, 100))
my_label.grid(row=1, column=1)
#Setting it up
img = ImageTk.PhotoImage(Image.open("1.jpeg"))

#Displaying it
imglabel = tk.Label(app_root, image=img).grid(row=1, column=2)        

instructionFrame = ttk.LabelFrame(app_root, text="Instructions", relief=tk.RIDGE)
instructionFrame.grid(row=2, column=1, padx=15)
my_text = tk.Text(instructionFrame, height=5, width=30)
my_text.grid(row=1, column=1)
my_text.insert(tk.END, "An example of multi-line\ninput")
app_root.mainloop()
