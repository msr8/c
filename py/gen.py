# Python file to prase through Practical.ipynb and convert it to the required markdown file
from json      import load as json_load
from pyperclip import copy as pyperclip_copy
import os

INP_FILENAME   = 'Practical.ipynb'
OUT_FILENAME   = 'Practical.md'
SCREENSHOS_DIR = os.path.join(os.getcwd(), 'screenshots')
PAGEBREAK      = '<div style="page-break-after: always; visibility: hidden">\pagebreak</div>'

Q12 = f'# Q12) Write a program that defines a function large in a module which will be used to find larger of two values and called from code in another module\n\n<center>\n\n![Question 12]({SCREENSHOS_DIR}/12.png)</center>\n\n{PAGEBREAK}\n\n'

ret = f'{PAGEBREAK}\n\n'



with open(INP_FILENAME) as f:
    ipynb = json_load(f)

for cell in ipynb['cells']:
    # Checks if its a markdown cell AND is a question
    if cell['cell_type'] == 'markdown' and cell['source'][0].startswith('###'):
        # Gets the full source
        source = ''.join(cell['source'])
        # Remove the first two ##
        source = source[2:]
        # Gets the question number
        question_number = source.split('Q')[1].split(')')[0]
        # If its q12 (ie an exception)
        if question_number == '12':
            source = Q12
        # Add it to the ret string
        ret += source
        
    # If it is a code cell, AND does not start with %%writefile
    elif cell['cell_type'] == 'code' and not cell['source'][0].startswith('%%writefile'):
        # Gets the code
        code = ''.join(cell['source'])
        # If its of Q12
        if question_number == '12':
            continue
        # Add the code to the ret string
        ret += f'\n\n```python\n{code}\n```'
        # Add the screenshot
        ret += f'\n\n<center>\n\n![Question {question_number}]({SCREENSHOS_DIR}/{question_number}.png)</center>'
        # Adds the pagebreak
        ret += f'\n\n{PAGEBREAK}\n\n'


with open(OUT_FILENAME, 'w') as f:
    f.write(ret)
pyperclip_copy(ret)
    



