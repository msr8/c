<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q1) Write a program to enter two integers, two floating numbers and then perform all arithmetic operations on them

```python
int_inp = input('Please enter two integers: ')
flt_inp = input('Please enter two floats : ')
a, b    = [int(i)   for i in int_inp.split(' ')]
x, y    = [float(i) for i in flt_inp.split(' ')]

# Integers
print(f'{a} + {b} = {a+b}')
print(f'{a} - {b} = {a-b}')
print(f'{a} * {b} = {a*b}')
print(f'{a} / {b} = {a/b}')
print(f'{a} % {b} = {a%b}')
print(f'{a} // {b} = {a//b}')
print(f'{a} ** {b} = {a**b}')

print('\n' + '-'*100 + '\n')

# Floats
print(f'{x} + {y} = {x+y}')
print(f'{x} - {y} = {x-y}')
print(f'{x} * {y} = {x*y}')
print(f'{x} / {y} = {x/y}')
print(f'{x} % {y} = {x%y}')
print(f'{x} // {y} = {x//y}')
print(f'{x} ** {y} = {x**y}')
```

<center>

![Question 1](/Users/mark/school/py/screenshots/1.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q2) Write a program to check whether a number is an Armstrong number or not

```python
x = int(input('Enter a number:'))

x_sum  = sum([ int(c)**3 for c in str(x) ])
is_arm = x == x_sum

if is_arm: print(f'{x} is an armstrong number')
else:      print(f'{x} is not an armstrong number')
```

<center>

![Question 2](/Users/mark/school/py/screenshots/2.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q3) Write a program to print the sum of all the primes between two ranges

```python
def is_prime(x):
    if x <= 1: return False

    ret = True
    for i in range(2, x//2+1):
        if x % i == 0:
            ret = False
    return ret


inp = input('Please enter two numbers: ')
a,b = [int(i) for i in inp.split(' ')]

primes     = [i for i in range(a,b+1) if is_prime(i)]
primes_str = [str(i) for i in primes]
print(f'{"+".join(primes_str)} = {sum(primes)}')
```

<center>

![Question 3](/Users/mark/school/py/screenshots/3.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q4) Write a program to swap two strings

```python
a = input('Please enter the first string:  ')
b = input('Please enter the second string: ')

print('\nBefore swapping: ')
print(f'{a=} | {b=}')
a,b = b,a
print('\nAfter swapping: ')
print(f'{a=} | {b=}')
```

<center>

![Question 4](/Users/mark/school/py/screenshots/4.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q5) Write a menu driven program to accept two strings from the user and perform the various functions using user defined functions

```python
from sty import fg

def is_digit(s:str) -> bool:
    for i in s:
        if i not in '1234567890': return False
    return True

def is_lower(s:str) -> bool:
    for i in s:
        if not (i>='a' and i<='z'): return False
    return True

def upper(s:str) -> str:
    ret = ''
    for i in s:
        if i>='a' and i<='z': ret += chr(ord(i)-32)
        else:                 ret += i
    return ret

def join(s:str, iter:list[str]) -> str:
    ret = ''
    for i in iter[:-1]: ret += i+s
    ret += iter[-1]
    return ret

def zfill(s:str, length:int) -> str:
    return '0'*(length-len(s)) + s





s1 = input(f'Enter string 1: {fg.green}'); print(fg.rs, end='')
s2 = input(f'Enter string 2: {fg.green}'); print(fg.rs, end='')

while True:
    inp = input(f'What function would you like to perform?\n\n1) is_lower\n2) upper\n3) is_digit\n4) join\n5) zfill\n6) Exit\n\n{fg.green}')
    print(fg.rs, end='')

    match inp:
        case '1': print(f'{is_lower(s1) = }')
        case '2': print(f'{upper(s1) = }')
        case '3': print(f'{is_digit(s2) = }')
        case '4': print(f'{join(s1, ["8","0","1"]) = }')
        case '5': print(f'{zfill(s2, 8) = }')
        case '6': break
        case   _: print(f'{fg.red}\nINVALID INPUT!{fg.rs}')

    print('\n')
```

<center>

![Question 5](/Users/mark/school/py/screenshots/5.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q6) Write a program to find smallest and largest number in a list

```python
def smallest_and_largest(lis:list[int]) -> int:
    if not lis: return None,None

    ret_s = lis[0]
    ret_l = lis[0]
    for i in range(2, len(lis)):
        elem = lis[i]
        if elem > ret_l: ret_l = elem
        if elem < ret_s: ret_s = elem

    return ret_s, ret_l


inp = input('Please enter some numbers: ')
lis = [int(i) for i in inp.split(' ')]
s,l = smallest_and_largest(lis)
print(f'From the given numbers, the smallest number is {s} and the largest number is {l}')
```

<center>

![Question 6](/Users/mark/school/py/screenshots/6.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q7) Create a dictionary whose keys are month names and whose values are the number of days in the corresponding months

- Ask the user to enter a month name and use the dictionary to tell them how many days are in the month
- Print out all keys in the alphabetical order
- Print out all the months with 31 days
- Print out the key value pairs sorted by number of days in each month

```python
dic = {
    'January':   31,
    'February':  28,
    'March':     31,
    'April':     30,
    'May':       31,
    'June':      30,
    'July':      31,
    'August':    31,
    'September': 30,
    'October':   31,
    'November':  30,
    'December':  31
}

inp = input('Please enter a month name: ').title()
print(f'There are {dic[inp]} days in {inp}')

print(f'\nAll the keys in alphabeical order are {sorted(list(dic.keys()))}')
print(f'\nAll the months with 31 days are: {[k for k,e in dic.items() if e==31]}')
print(f'\nKey value pairs sorted by number of days in each month are: {sorted( list(dic.items()) , key=lambda x: x[1] )}')
```

<center>

![Question 7](/Users/mark/school/py/screenshots/7.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q8) Make a list of first 10 letters of the alphabet, then use the slicing to do the following operations:
- Print the first 3 letters of the list
- Print any 3 letters from the middle
- Print the letter from any particular index to the end of the list

```python
from random import randint

lis = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
rand_i = randint(2,9)

print(f'First 3 letters of the list are {lis[:3]}')
print(f'Any 3 letters from the middle of the list are {lis[4:7]}')
print(f'The letters from index {rand_i} to the end of the list are {lis[rand_i:]}')
```

<center>

![Question 8](/Users/mark/school/py/screenshots/8.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q9) Write a program that scans an email address and forms a tuple of user name and domain

```python
x = input('Enter an email address: ')

username,domain = x.split('@')
print(f'Username: {username}')
print(f'Domain: {domain}')
```

<center>

![Question 9](/Users/mark/school/py/screenshots/9.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q10) Write a program that uses a user defined function that accepts name and gender (as M for Male, F for Female) and prefixes Mr./Ms. on the basis of the gender

```python
def foo(gender, name):
    return f'Mr. {name}' if gender=='M' else f'Ms. {name}'

name   = input('Please enter your name: ')
gender = input('Please enter your gender (M for Male, F for Female): ').upper()

print()
print(foo(gender, name))
```

<center>

![Question 10](/Users/mark/school/py/screenshots/10.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q11) Write a program to display Bar graphs or Pie chart using Matplotlib

```python
import matplotlib.pyplot as plt
import random as r
n = 10
x = list(range(1,n+1))
y = [r.randint(5,100) for _ in range(n)]

# Bar graph
plt.bar(x, y)
plt.show()

# Pie chart
plt.pie(y, labels=x)
plt.show()
```

<center>

![Question 11](/Users/mark/school/py/screenshots/11.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q12) Write a program that defines a function large in a module which will be used to find larger of two values and called from code in another module

<center>

![Question 12](/Users/mark/school/py/screenshots/12.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q13) Write a program to know the cursor position and print the text according to specifications given below:
- Print the initial position
- Move the cursor to 4th position
- Display next 5 characters
- Move the cursor to the next 10 characters
- Print the current cursor position
- Print next 10 characters from the current cursor position

```python
fp = open('text.txt', 'rb')

# Print the initial position
print(f'The initial position is {fp.tell()}')
# Move the cursor to 4th position
fp.seek(4)
# Display next 5 characters
print(f'Next 5 characters are: {fp.read(5)}')
# Move the cursor to the next 10 characters
fp.seek(10, 1)
# Print the current cursor position
print(f'The current cursor position is {fp.tell()}')
# Print next 10 characters from the current cursor position
print(f'Next 10 characters are: {fp.read(10)}')
```

<center>

![Question 13](/Users/mark/school/py/screenshots/13.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q14) Create a binary file with roll number, name and marks. Input a roll number and perform the following operations:
- Update the marks
- Delete the record
- Display the record
- Append the record
- Search the record

```python
import pickle
import pandas as pd

def initialise_pickle() -> None:
    with open('students.dat', 'wb') as f:
        pickle.dump({}, f)

def read_pickle() -> dict[int, dict]:
    with open('students.dat', 'rb') as f:
        data = pickle.load(f)
    return data

def save_pickle(data: dict[int, dict]) -> None:
    with open('students.dat', 'wb') as f:
        pickle.dump(data, f)



def append(roll_no:int, name:str, marks:int) -> None:
    data          = read_pickle()
    data[roll_no] = {'name': name, 'marks': marks}
    save_pickle(data)

def update(roll_no:int, marks:int) -> None:
    data = read_pickle()
    if roll_no not in data:
        print('Roll number not found')
        return
    data[roll_no]['marks'] = marks
    save_pickle(data)

def delete(roll_no:int) -> None:
    data = read_pickle()
    if roll_no not in data:
        print('Roll number not found')
        return
    del data[roll_no]
    save_pickle(data)

def display_all() -> None:
    data     = read_pickle()
    new_data = [{'Roll Number':k, 'Name':i['name'], 'Marks':i['marks']} for k,i in data.items()]
    df       = pd.DataFrame(new_data, index=None)
    display(df)

def search(roll_no) -> None:
    data    = read_pickle()
    if roll_no not in data:
        print('Roll number not found')
        return
    df = pd.DataFrame([{'Roll Number':roll_no, 'Name':data[roll_no]['name'], 'Marks':data[roll_no]['marks']}])
    display(df)





initialise_pickle()

append(1, 'Ayush', 31)
append(2, 'Krish', 44)
append(3, 'Rohan', 87)
append(4, 'Raj',   95)

display_all()
inp  = input('Please enter the roll number of the student and the new marks: ')
data = [int(i) for i in inp.split(' ')]
update(*data)
print('Marks updated\n\n')

inp = int(input('Please enter the roll number of the student whose record is to be deleted: '))
delete(inp)
print('Record deleted\n\n')

display_all()
print('Displayed all records\n\n')

inp     = input('Please enter the roll number of the new student, his/her name, and his/her new marks: ')
data    = inp.split(' ')
data[0] = int(data[0])
data[2] = int(data[0])
append(*data)
print('Record added\n\n')

inp = int(input('Please enter the roll number of the student whose record you want to search: '))
search(inp)
```

<center>

![Question 14](/Users/mark/school/py/screenshots/14.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q15) Write a program to Create a CSV file by entering user-id and password, read and search the password for given user id

```python
import pandas as pd

def read_csv() -> pd.DataFrame:
    try:
        df = pd.read_csv('users.csv')
        return df
    except FileNotFoundError:
        return pd.DataFrame(columns=['username', 'password'])


def create(username, password) -> None:
    df = read_csv()

    # If username already exists, update the password
    if username in df['username'].values:
        cond = df['username'] == username
        df.loc[cond, 'password'] = password
    # Else, add a new row
    else:
        new_row = pd.DataFrame( [[username, password]] , columns=['username', 'password'] )
        df      = pd.concat( [df, new_row] )
    
    df.to_csv('users.csv', index=False)



def search(username) -> None | dict[str,str]:
    df   = read_csv()
    # If username does not exist, return None
    if username not in df['username'].values:
        return None
    # Else, return the user's data
    cond = df['username'] == username
    return df[cond].to_dict('records')[0]



username = input('Enter your userID: ')
password = input('Enter your password: ')
create(username, password)
print('UserID and password added successfully\n\n')

username = input('Enter the userID: ')
password = search(username)['password']
print(f'The password is {password}')
```

<center>

![Question 15](/Users/mark/school/py/screenshots/15.png)</center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

