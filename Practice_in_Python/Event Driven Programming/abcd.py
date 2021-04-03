import tkinter as tk
from tkinter import ttk

def process_event(event):
  print("The process_event function was called.")


application_window = tk.Tk()
##my_button = tk.Button(application_window, text="Example")
##my_button.grid(side=tk.TOP, fill=tk.Y, expand=True, pady=10)

my_button = tk.Button(application_window, text="Example")
my_button.bind("<ButtonPress-1>", process_event)
my_button.grid(row=1, column=1, sticky=tk.W, pady=3)
