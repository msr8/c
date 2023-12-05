from pyperclip import copy as pyperclip_copy

code_dir = '.'
ss_link  = 'https://github.com/msr8/school/blob/main/practicals/3/cpp/assets/{q_no}.png?raw=true'
qs_txt = 'qs.txt'
ptr = 0
pagebreak = '<div style="page-break-after: always; visibility: hidden">\pagebreak</div>'


with open(qs_txt) as f:
    qs = f.read().splitlines()



ret = ''
for index,i in enumerate(qs):
    if not i: continue # If empty line
    if i[0].isdigit():
        # Deal with question
        q_whole      = ''.join(qs[ptr:index])
        q_no, *q_txt = q_whole.split('.')
        q_txt        = '.'.join(q_txt)
        print(q_txt)
        # Update ptr
        ptr = index
        # If no question (happens in the first iteration)
        if not q_txt: continue
        # Continue dealing with question
        q_txt = q_txt.strip()
        with open(f'{code_dir}/{q_no}.cpp') as f:
            q_code = f.read()
        q_ss = ss_link.format(q_no=q_no)
        # Add the question
        ret += f'{pagebreak}\n\n# Q{q_no}) {q_txt}\n\n```cpp\n{q_code}\n```\n\n<center>\n\n![Question {q_no}]({q_ss})</center>\n\n'

    
pyperclip_copy(ret)