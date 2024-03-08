from json      import load as json_load
from pyperclip import copy as pyperclip_copy
import os

INP_FILENAME   = 'Dsc-Prac.ipynb'
OUT_FILENAME   = 'Dsc-Prac.md'
SCREENSHOS_DIR = os.path.join(os.getcwd(), 'screenshots')
PAGEBREAK      = r'<div style="page-break-after: always; visibility: hidden">\pagebreak</div>'



def deal_with_markdown(cell):
    md = ''.join(cell['source'])
    if md == '<br><br><br>': return f'\n\n{PAGEBREAK}\n\n'
    else                   : return f'{md[2:]}\n\n<br>\n\n' # Doing md[2:] to convert `### QUES` to `# QUES`

def deal_with_code(cell):
    code    = ''.join(cell['source'])
    outputs = cell['outputs']

    ret = f'### CODE\n\n```python\n{code}\n```\n\n<br>\n\n### OUTPUT\n\n<br>\n'

    for output in outputs:
        if output['output_type'] == 'stream':
            out = ''.join(output['text'])
            ret += f'{out}\n'
        elif output['output_type'] == 'display_data':
            mds = output['data']['text/markdown']
            ret += ''.join(mds) + '\n'
    
    return ret





ret = f'{PAGEBREAK}\n\n'

with open(INP_FILENAME) as f:
    ipynb = json_load(f)

cells = ipynb['cells']
cells = cells[2:]

for cell in cells:
    if cell['cell_type'] == 'markdown':
        ret += deal_with_markdown(cell)
    elif cell['cell_type'] == 'code':
        ret += deal_with_code(cell)
    else:
        raise ValueError(f'Unknown cell type: {cell["cell_type"]}')





with open(OUT_FILENAME, 'w') as f:
    f.write(ret)
pyperclip_copy(ret)
    



