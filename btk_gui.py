"""
Billy The Kid INO Generator
"""
from tkinter import *


ROOT = Tk()
COLOR = 'magenta'
SCREEN_WIDTH = ROOT.winfo_screenwidth()
SCREEN_HEIGHT = ROOT.winfo_screenheight()
SYMBOL_MAP = {
    '@': 'Face'
}

# Set-up main canvas
ROOT.title('Billy The Kid')
ROOT.minsize(width=SCREEN_WIDTH, height=SCREEN_HEIGHT)

# Set-up entry field
entry = Entry(
    ROOT,
    borderwidth=0,
    font=('Helvetica', 72),
    foreground=COLOR,
    highlightthickness=0,
    insertbackground=COLOR,
    insertwidth=25,
    width=150)
entry.pack()
entry.focus_set()

# Button
def callback():
    phrase = entry.get().replace(' ', '')

    template_data = None
    with open('template.txt', 'r') as file:
        template_data = file.read()
    file.close()

    template_data = template_data.replace('$REPLACE_LETTER_COUNT',
                                          str(len(phrase)))

    loop_letters = ''
    for index, char in enumerate(phrase):
        mapped_name = 'letter{}'.format(char.upper()) if char.isalpha() else 'symbol{}'.format(SYMBOL_MAP[char])

        loop_letters += """\tif(letterIndex == {}) {{
                        \t\t{}(myServo1, myServo2, myServo3);
                        \t\t}}\n""".format(index, mapped_name)

    template_data = template_data.replace('$REPLACE_LOOP_LETTERS', loop_letters)

    ino = open('billy_the_kid.ino', 'w')
    ino.write(template_data)
    ino.close()

button = Button(ROOT, text='Flash The Board', width=20, command=callback)
button.pack()

# Run
mainloop()
