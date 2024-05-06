import os
from pyperclip import copy as pyperclip_copy


SS_DIR = '/home/mark/Documents/Study material stuff/Practical Files/4/Java/screenshots'
PB     = r'<div style="page-break-after: always; visibility: hidden">\pagebreak</div>'

screenshots = sorted( os.listdir(SS_DIR) )

EXCEPTIONS = {
    31: '31.md'
}


def deal_with_question(q_no:int) -> str:
    code_fp = f'{q_no}.java'
    with open(code_fp) as f:
        code = f.read()
    
    # So basically, the questions are comments at the TOP of the code
    lines    = code.split('\n')
    question = ''
    while lines[0].startswith('//'):
        question += lines[0][2:] + '\n'
        lines.pop(0)
    
    code = '\n'.join(lines)

    screenshot_div = '<center>\n\n'

    # There can be multiple screenshots, but they all will start with the q_no
    this_q_screenshots = [s for s in screenshots if s.startswith(f'{q_no}.')]
    this_q_screenshots.sort()
    for ss in this_q_screenshots:
        ss_path = f'{SS_DIR}/{ss}'.replace(' ', '%20')
        screenshot_div += f'![{ss}]({ss_path})\n\n'
    screenshot_div += '</center>'

    markdown  = f'# Q{q_no}) {question}\n\n<br>\n\n'
    markdown += f'## CODE\n\n```java\n{code}\n```\n\n<br>\n\n'
    markdown += f'## OUTPUT\n\n{screenshot_div}\n\n\n\n'
    markdown += f'{PB}\n\n\n\n'

    return markdown




n_qs = 41

ret = f'{PB}\n\n\n\n'

for q_no in range(1, n_qs+1):
    if q_no in EXCEPTIONS:
        with open(EXCEPTIONS[q_no]) as f:
            ret += f.read() + f'\n\n\n\n\n{PB}\n\n\n\n'
    else:
        ret += deal_with_question(q_no)
    
pyperclip_copy(ret)