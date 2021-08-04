import tkinter as tk

import PyPDF2

from PIL import Image,ImageTk

from tkinter.filedialog import askopenfile

root = tk.Tk()


canvas = tk.Canvas(root, width=600, height= 300)

canvas.grid(columnspan=3, rowspan=3)


logo = Image.open('logo.png')
#logo
logo = ImageTk.PhotoImage(logo)
logo_label = tk.Label(image=logo)
logo_label.Image = logo
logo_label.grid(column=1,row=0)

#instructions

instructions = tk.Label(root,text="Select a pdf in your Computer to extract all the text from it", font="Heleway")
instructions.grid(columnspan=3, column=0, row=1)

def open_file():
    browse.set("loading.....")
    file = askopenfile(parent=root, mode='rb', title="choose a file", filetypes=[("Pdf file","*.pdf")])
    if file:
        pdf_reader= PyPDF2.PdfFileReader(file)
        page = pdf_reader.getPage(0)
        page_cont = page.extractText()
        #textbox
        text_box = tk.Text(root, width=80, height=15, padx=2, pady=2)
        text_box.insert(1.0,page_cont)
        text_box.tag_configure("center",justify="center")
        text_box.tag_add("center",1.0, "end")
        text_box.grid(column=1, row=3)
        browse.set("Browse")





#browse

browse = tk.StringVar()
browse_bn = tk.Button(root,textvariable=browse, font="Heleway",bg="#28bebe", fg="white", width=15, height=2, command=lambda:open_file())

browse.set("Browse")

browse_bn.grid(column = 1, row=2)

canvas = tk.Canvas(root, width=600, height= 250)

canvas.grid(columnspan=3)







root.mainloop()
