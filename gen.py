import os

def color_gen():
    """
    It generates a C program that prints out all the possible combinations of colors and styles
    """
    colors = {
        'black':   0,
        'red':     1,
        'green':   2,
        'yellow':  3,
        'blue':    4,
        'purple':  5,
        'cyan':    6,
        'white':   7
    }

    styles = {
        'normal':        0,
        'bold':          1,
        'italic':        3,
        'underlined':    4,
        'strikethough':  9
    }



    text = '''\
    # include <stdio.h>

    // https://gist.github.com/vratiu/9780109
    int main () {
        char res[] = "\\033[0m";\n\
    '''



    for style in styles:
        for color in colors:
            s     = styles[style]
            c     = colors[color]
            text += f'\n    char {style}_{color}[] = "\\033[{s};9{c}m";'
        text     += '\n'
    text         += '\n\n'




    # for style in styles:
    #     for color in colors:
    #         s     = styles[style]
    #         c     = colors[color]
    #         text += f'\n    printf("%sThis is {style} {color}%s\\n", {style}_{color}, res);'
    #     text     +=  '\n    printf("\\n");\n'

    for color in colors:
        for style in styles:
            s     = styles[style]
            c     = colors[color]
            text += f'\n    printf("%sThis is {style} {color}%s\\n", {style}_{color}, res);'
        text     +=  '\n    printf("\\n");\n'


    text += '}'

    with open('temp.cpp', 'w') as f:
        f.write(text)





def magic_gen():
    _1l = _2l = _4l = _8l = _16l = _32l = _64l = []

    nums = [i      for i in range(1,101)]
    nums = [bin(i) for i in nums]
    print(nums)

    text = ''






def c_webpage_gen():
    inp_dir = '/Users/mark/school/qs'
    out_fp  = '/Users/mark/school/docs/c/README.md'
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
        to_write += f'**Q{key}) {dic["q"]}**\n\n```c\n{dic["a"]}\n```\n<br><br>\n\n'
    
    with open(out_fp, 'w') as f:
        f.write(to_write)






c_webpage_gen()



