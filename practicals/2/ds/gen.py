import os
import pyperclip


def md_gen(template:str, questions:dict):
    codes_dir = os.getcwd() # ./
    ss_dir    = '/Users/mark/Pictures/DS prac file'
    out_fp    = './file.md'
    filenames = []
    output    = ''

    # Extracts all the filenames in list[int] cz os.listdir() returns filenames randomly, and .sort() doesnt work properly cz strs
    for filename_ext in os.listdir(codes_dir):
        if not filename_ext.endswith('.cpp'):    continue
        filename = filename_ext.strip('.cpp')
        filenames.append(int(filename))

    filenames.sort()
    for filename in filenames:
        code_fp = os.path.join(codes_dir, f'{filename}.cpp')
        pic_fp  = os.path.join(ss_dir,    f'{filename}.png')
        ques    = questions[filename].replace('\n','<br>')
        with open(code_fp) as f:
            code = f.read().strip()
        output += template.format(num=filename, ques=ques, code=code, ss_fp=pic_fp)
    
    with open(out_fp, 'w') as f:
        f.write(output)
    
    pyperclip.copy(output)






template = '\n\n\n\n\n\n<div style="page-break-after: always; visibility: hidden">\pagebreak</div>\n\n\n\n\n\n<p class="question">Q{num}) {ques}</p>\n\n<br>\n\n```cpp\n{code}\n```\n\n<br>\n\n<center> <img src="{ss_fp}"> </center>'

questions = {
    1:  'WAP to Find the largest element in an array using functions',
    2:  'WAP to Find the smallest element in an array using functions',
    3:  'WAP to Insert an element at a particular location in an existing array',
    4:  'WAP to Delete an element from a particular location in an existing array',
    5:  'WAP to Reverse the contents of an array using function',
    6:  'WAP to Multiply 2 Matrices with following conditions- \nCreate the matrices dynamically (using malloc)\nCreate a function to read the elements in matrix\nCreate a function to print the elements of matrix\nCreate a function to multiply the elements of matrices',
    7:  'WAP to implement LINEAR SERCH using functions',
    8:  'WAP to implement BINARY SEARCH using functions (use iterative method)',
    9:  'WAP to implement BINARY SEARCH using functions (use recursive method)',
    10: 'WAP to implement BUBBLE SORT using functions',
    11: 'WAP to implement SELECTION SORT using functions',
    12: 'WAP to implement INSERTION SORT using functions',
    13: 'WAP to implement MERGE SORT using functions',
    14: 'WAP to implement the concept of Sparse Matrix',
    15: 'WAP to implement a SINGLY LINKED LIST with the following functions-\nInsert a node at front\nInsert a node at last\nInsert a node after a particular element\nInsert a node before a particular element\nDelete a node from front\nDelete a node from last\nDelete a particular node\nSort a list\nReverse a list\nCount the nodes\nDisplay the elements in list',
    16: 'WAP to implement a DOUBLY LINKED LIST with the\nfollowing functions-\nInsert a node at front\nInsert a node at last\nInsert a node after a particular element\nInsert a node before a particular element\nDelete a node from front\nDelete a node from last\nDelete a particular node\nSort a list\nCount the nodes\nDisplay the elements in list',
    17: 'WAP to implement the circular linked list (singly)',
    18: 'WAP to implement Polynomial addition operation using linked list',
    19: 'Write a C program to create two linked lists from a given list in\nfollowing way\nINPUT List-1 2 3 4 5 6 7 8 9 10\nOUTPUT:-\nFirst List :- 1 3 5 7 9\nSecond List :-2 4 6 8 10',
    20: "WAP to implement Student Database using Linked List with the\nfollowing structure\n- Name\n- Rollno\n- Marks of 5 subjects\n- Average\n- Result, If the average <50, then print 'Fail', otherwise\n'Pass'",
    21: 'WAP to implement the STACK using Linked List with\nfollowing functions-\nPush an element in Stack\nPop an element from Stack\nDisplay the elements in Stack',
    22: 'WAP to implement the STACK using Arrays with\nfollowing functions-\nPush an element in Stack\nPop an element from Stack\nDisplay the elements in Stack',
    23: 'WAP to evaluate a (i) PREFIX expression (ii) POSTFIX expression using Stack',
    24: 'WAP to convert an INFIX expression to (i) PREFIX (ii) POSTFIX using Stack',
    25: 'Sometimes a program requires two stacks containing the same type of items. Suppose two stacks are stored in separate arrays, then one stack might overflow while there is considerable unused space in the other. A neat way to avoid this problem is to put all spaces in one stack and let this stack grow from one end of the array, and the other stack starts from the other end and grows in the opposite direction, ie, toward the first stack. In this way, if one stack turns out to be large and the other small, then they will still both fit, and there will be no overflow until all space is used. Declare a new structure that includes these two stacks and perform various stack operations',
    26: 'WAP to implement CIRCULAR QUEUE using Arrays',
    27: 'WAP to implement QUEUE using Linked List',
    28: 'WAP to implement PRIORITY QUEUE using Linked List',
    29: 'WAP to implement NON-CIRCULAR QUEUE using Arrays',
    30: 'WAP to implement DEQUE using Arrays',
    31: 'WAP to implement DEQUE using Linked List',
    32: "Let us assume a Patient's coupon generator for the Doctors' clinic. The patients are given the coupons on first-come-first- serve basis. After the visit of a patient, patient-ID is kept stack- wise. At the end of the day, the count is generated from the stack. Construct a menu-based program for patients' coupons generator using an appropriate data structure",
}
md_gen(template, questions)



'''





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q) </p>

<br>

```cpp
[CODE]
```

<br>

<center>

[SCREENSHOT_FP]</center>'''


