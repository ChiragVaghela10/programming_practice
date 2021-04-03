import tkinter as tk
from tkinter import ttk

class Wizard(object):
    def __init__(self):
        self.window = tk.Tk()
        self.window['padx'] = 15
        self.window['pady'] = 15

class pageA(Wizard):
        
    def __init__(self):
        super(pageA, self).__init__()
        self.create_widget(self.window)

    def create_widget(self, window):
        a_label = ttk.Label(window, text= "Page A")
        a_label.grid(row = 1, column = 1)
        a_button = ttk.Button(window, text="Next")
        a_button.grid(row=2, column=1)
        a_button['command'] = self.go_next

    def go_next(self):
        page_b = pageB(self.window, self)


class pageB(Wizard):
    def __init__(self, window, pageA):
        self.window = window
        self.pageA = pageA
        self.create_widget(self.window)

    def create_widget(self, window):
        #super(pageB, self).__init__()
        b_label = ttk.Label(window, text= "Page B")
        b_label.grid(row = 1, column = 1)
        b_button = ttk.Button(window, text="Prev")
        b_button.grid(row=2, column=1)
        b_button['command'] = self.go_prev

    def go_prev(self):
        self.pageA.create_widget(self.window)
        

wiz = pageA()
wiz.window.mainloop()

