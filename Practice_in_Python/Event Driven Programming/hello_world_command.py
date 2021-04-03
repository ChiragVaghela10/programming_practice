import tkinter as tk
from tkinter import ttk

# Create the application window
window = tk.Tk()
window['padx'] = 15
window['pady'] = 15
# Create the user interface
my_label = ttk.Label(window, text="Hello World")
my_label.grid(row=1, column=1, sticky=tk.E + tk.W + tk.N + tk.S)

quit_button = ttk.Button(window, text="Quit")
quit_button.grid(row=2, column=1)
quit_button['command'] = window.destroy

# Start the GUI event loop
window.mainloop()


