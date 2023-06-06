import os


def c_md_gen():
    inp_dir = '/Users/mark/school/prac'
    out_fp  = '/Users/mark/school/prac/krishna.md'
    # ss_dir  = '/Users/mark/school/prac/screenshots'
    ss_dir  = '/Users/mark/Documents/full/screenshots'
    newpage = '<div style="page-break-after: always; visibility: hidden">\\pagebreak</div>'

    markdown = ''

    for i in range(1, 46):
        markdown += f'''## Q{i}) '''
        with open(f'{inp_dir}/{i}.cpp') as f:
            file_data = f.read()
        lines = file_data.split('\n')
        ques  = lines[0].split('//')[1].strip()
        code  = '\n'.join(lines[1:]).strip()
        markdown += ques
        markdown += f'\n\n<br>\n\n```c\n{code}\n```\n\n<br><br>\n\n<center> <img src="{ss_dir}/{i}.png"> </center>\n\n{newpage}\n\n'
    
    with open(out_fp, 'a') as f:
        f.write(markdown)




def c_table_gen(): 
    inp_dir = '/Users/mark/school/prac'
    out_fp  = '/Users/mark/school/prac/krishna.md'
    # ss_dir  = '/Users/mark/school/prac/screenshots'
    ss_dir  = '/Users/mark/Documents/full/screenshots'
    newpage = '<div style="page-break-after: always; visibility: hidden">\\pagebreak</div>'

    markdown  = '| S.No. | Question |\n'
    markdown += '| ----- | -------- |\n'

    for i in range(1, 46):
        with open(f'{inp_dir}/{i}.cpp') as f:
            file_data = f.read()
        lines = file_data.split('\n')
        ques  = lines[0].split('//')[1].strip()
        markdown += f'| {i} | {ques} |\n'
    
    markdown += f'\n{newpage}\n\n'

    with open(out_fp, 'w') as f:
        f.write(markdown)







# c_webpage_gen()
c_table_gen()
c_md_gen()



