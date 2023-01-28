import os

def c_webpage_gen():
    inp_dir = '/Users/mark/school/prac'
    out_fp  = '/Users/mark/school/prac/file.md'
    data    = {}
    keys    = []

    for fn in os.listdir(inp_dir):
        if fn.startswith('.'):         continue
        if not fn.endswith('.cpp'):    continue

        key = fn.strip('.cpp')
        key = int(key)
        keys.append(key)
    
    keys.sort()

    for key in keys:
        dic = {}
        fp  = os.path.join(inp_dir, f'{key}.cpp')
        with open(fp) as f:    file_data = f.read()
        lines = file_data.split('\n')
        dic['q'] = lines[0].strip('//').strip(' ')
        dic['a'] = '\n'.join(lines[1:]).strip('\n')

        data[key] = dic
    
    to_write = '<br><br>'

    for key in data:
        dic       = data[key]
        to_write += f'''\
**Q{key}) {dic["q"]}**\n
```c
{dic["a"]}
```
<br><br>\n\n'''
    
    with open(out_fp, 'w') as f:
        f.write(to_write)






c_webpage_gen()

# def _t():
#     dir = '/Users/mark/school/prac'
#     data = r'''// 
# #include <stdio.h>


# int main() {

#     printf("\n");
# }'''

#     for i in range(15,46):
#         fp = os.path.join(dir, f'{i}.cpp')
#         with open(fp, 'w') as f:
#             f.write(data)

# _t()


