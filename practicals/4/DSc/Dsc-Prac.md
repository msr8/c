<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q1) Write all the ways to create a dataframe

<br>

## CODE

```python
import pandas as pd

# From a list of lists
data = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
df = pd.DataFrame(data)
print('From a list of lists:')
display_df(df)

# From a dictionary
data = {'a': [1, 4, 7], 'b': [2, 5, 8], 'c': [3, 6, 9]}
df = pd.DataFrame(data)
print('\nFrom a dictionary:')
display_df(df)

# From a list of dictionaries
data = [{'a': 1, 'b': 2, 'c': 3}, {'a': 4, 'b': 5, 'c': 6}, {'a': 7, 'b': 8, 'c': 9}]
df = pd.DataFrame(data)
print('\nFrom a list of dictionaries:')
display_df(df)
```

<br>

## OUTPUT

<br>
From a list of lists:

|   0 |   1 |   2 |
|----:|----:|----:|
|   1 |   2 |   3 |
|   4 |   5 |   6 |
|   7 |   8 |   9 |

From a dictionary:

|   a |   b |   c |
|----:|----:|----:|
|   1 |   2 |   3 |
|   4 |   5 |   6 |
|   7 |   8 |   9 |

From a list of dictionaries:

|   a |   b |   c |
|----:|----:|----:|
|   1 |   2 |   3 |
|   4 |   5 |   6 |
|   7 |   8 |   9 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q2) Given a dataset, print the following:

1) Records of index 1 & 3
2) Records where age >= 15
3) Records where age >= 12 and gender = Male
4) City and gender of people with age >= 12

<br>

## CODE

```python
import pandas as pd

data = {
    'age':            [10,22,13,21,12,11,17],
    'section':        ['A','B','C','B','B','A','A'],
    'city':           ['Gurgaon','Delhi','Mumbai','Delhi','Mumbai','Delhi','Mumbai'],
    'gender':         ['M','F','F','M','M','M','F'],
    'favorite_color': ['red','black','yellow','pink','black','green','red']   
}
df = pd.DataFrame(data)

print('\n1) Original data:')
display_df()

print('\n2) Records of index 1 & 3')
res_df = df.iloc[ [1,3] , : ]
display_df(res_df)

print('\n3) Records where age >= 15:')
res_df = df.query('age >= 15')
display_df(res_df)

print('\n4) Records where age >= 12 and gender = Male:')
res_df = df.query('age >= 12 and gender == "M"')
display_df(res_df)

print('\n5) City and gender of people with age >= 12:')
df.query('age >= 12')[['city','gender']]
display_df(res_df)
```

<br>

## OUTPUT

<br>

1) Original data:

|   age | section   | city    | gender   | favorite_color   |
|------:|:----------|:--------|:---------|:-----------------|
|    10 | A         | Gurgaon | M        | red              |
|    22 | B         | Delhi   | F        | black            |
|    13 | C         | Mumbai  | F        | yellow           |
|    21 | B         | Delhi   | M        | pink             |
|    12 | B         | Mumbai  | M        | black            |
|    11 | A         | Delhi   | M        | green            |
|    17 | A         | Mumbai  | F        | red              |

2) Records of index 1 & 3

|   age | section   | city   | gender   | favorite_color   |
|------:|:----------|:-------|:---------|:-----------------|
|    22 | B         | Delhi  | F        | black            |
|    21 | B         | Delhi  | M        | pink             |

3) Records where age >= 15:

|   age | section   | city   | gender   | favorite_color   |
|------:|:----------|:-------|:---------|:-----------------|
|    22 | B         | Delhi  | F        | black            |
|    21 | B         | Delhi  | M        | pink             |
|    17 | A         | Mumbai | F        | red              |

4) Records where age >= 12 and gender = Male:

|   age | section   | city   | gender   | favorite_color   |
|------:|:----------|:-------|:---------|:-----------------|
|    21 | B         | Delhi  | M        | pink             |
|    12 | B         | Mumbai | M        | black            |

5) City and gender of people with age >= 12:

|   age | section   | city   | gender   | favorite_color   |
|------:|:----------|:-------|:---------|:-----------------|
|    21 | B         | Delhi  | M        | pink             |
|    12 | B         | Mumbai | M        | black            |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q3) Create a dataframe to store data of 10 students, with the columns being "Name", "Age", "Semester I marks out of 600", "Semester II marks out of 500", and "Attendance"

1) Display details of students who scored more than 560 marks in sem I
2) Display details of students who scored less than 250 marks in sem II
3) Display details of student who scored minimum marks in sem II
4) Display details of student who scored maximum marks in sem II
5) Display details of students whose attendance is more than 75
6) Display details of students whose attendance is less than 50
7) Insert 2 new records
8) Add a column corresponding to percentage of marks of both semesters
9) Add a new column corresponding to grades:

| Percentage   | Grade |
| ------------ | ----- |
| >=90         | O     |
| >=75 and <90 | A+    |
| >=60 and <75 | A     |
| >=50 and <60 | B+    |
| >=40 and <50 | B     |
| >40          | F     |

<br>

## CODE

```python
import pandas as pd

data = {
    'Name':                         ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'],
    'Age':                          [20, 21, 20, 22, 23, 20, 21, 22, 20, 21],
    'Semester I marks out of 600':  [213, 31, 57, 406, 417, 45, 217, 200, 588, 319],
    'Semester II marks out of 500': [198, 378, 133, 450, 283, 485, 193, 283, 236, 191],
    'Attendance':                   [76, 26, 53, 32, 50, 67, 92, 62, 44, 85]
}
df = pd.DataFrame(data)

print('\nOriginal data:')
display_df()

print('\n1) Students who scored more than 560 marks in sem I:')
ans = df.query('`Semester I marks out of 600` > 560')
display_df(ans, index=True)

print('\n2) Students who scored less than 250 marks in sem II:')
ans = df.query('`Semester II marks out of 500` < 250')
display_df(ans, index=True)

print('\n3) Student who scored minimum marks in sem II:')
min_marks = min(df['Semester II marks out of 500'])
ans       = df.query('`Semester II marks out of 500` == @min_marks')
display_df( ans , index=True )

print('\n4) Student who scored maximum marks in sem II:')
ans = df.sort_values(by='Semester II marks out of 500',ascending=False).head(1)
display_df(ans, index=True)

print('\n5) Students whose attendance is more than 75:')
ans = df.query('Attendance > 75')
display_df(ans, index=True)

print('\n6) Students whose attendance is less than 50:')
ans = df.query('Attendance < 50')
display_df(ans, index=True)

print('\n7) Inserted two new records:')
new_data = {
    'Name':                         ['K', 'L'],
    'Age':                          [22,  23],
    'Semester I marks out of 600':  [300, 400],
    'Semester II marks out of 500': [400, 300],
    'Attendance':                   [80,  40]
}
new_df = pd.DataFrame(new_data)
df     = pd.concat([df,new_df], ignore_index=True)
display_df(index=True)

print('\n8) Added the percentage column:')
df['Percentage'] = (df['Semester I marks out of 600'] + df['Semester II marks out of 500']) / 11
df['Percentage'] = df['Percentage'].apply(lambda x: round(x,2))
display_df(df)

print('\n9) Added the grade column:')
def get_grade(x: float):
    if   x >= 90: return 'O'
    elif x >= 75: return 'A+'
    elif x >= 60: return 'A'
    elif x >= 50: return 'B+'
    elif x >= 40: return 'B'
    else:         return 'F'
df['Grade'] = df['Percentage'].apply(get_grade)
display_df(df)
```

<br>

## OUTPUT

<br>

Original data:

| Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|:-------|------:|------------------------------:|-------------------------------:|-------------:|
| A      |    20 |                           213 |                            198 |           76 |
| B      |    21 |                            31 |                            378 |           26 |
| C      |    20 |                            57 |                            133 |           53 |
| D      |    22 |                           406 |                            450 |           32 |
| E      |    23 |                           417 |                            283 |           50 |
| F      |    20 |                            45 |                            485 |           67 |
| G      |    21 |                           217 |                            193 |           92 |
| H      |    22 |                           200 |                            283 |           62 |
| I      |    20 |                           588 |                            236 |           44 |
| J      |    21 |                           319 |                            191 |           85 |

1) Students who scored more than 560 marks in sem I:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  8 | I      |    20 |                           588 |                            236 |           44 |

2) Students who scored less than 250 marks in sem II:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  0 | A      |    20 |                           213 |                            198 |           76 |
|  2 | C      |    20 |                            57 |                            133 |           53 |
|  6 | G      |    21 |                           217 |                            193 |           92 |
|  8 | I      |    20 |                           588 |                            236 |           44 |
|  9 | J      |    21 |                           319 |                            191 |           85 |

3) Student who scored minimum marks in sem II:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  2 | C      |    20 |                            57 |                            133 |           53 |

4) Student who scored maximum marks in sem II:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  5 | F      |    20 |                            45 |                            485 |           67 |

5) Students whose attendance is more than 75:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  0 | A      |    20 |                           213 |                            198 |           76 |
|  6 | G      |    21 |                           217 |                            193 |           92 |
|  9 | J      |    21 |                           319 |                            191 |           85 |

6) Students whose attendance is less than 50:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  1 | B      |    21 |                            31 |                            378 |           26 |
|  3 | D      |    22 |                           406 |                            450 |           32 |
|  8 | I      |    20 |                           588 |                            236 |           44 |

7) Inserted two new records:

|    | Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |
|---:|:-------|------:|------------------------------:|-------------------------------:|-------------:|
|  0 | A      |    20 |                           213 |                            198 |           76 |
|  1 | B      |    21 |                            31 |                            378 |           26 |
|  2 | C      |    20 |                            57 |                            133 |           53 |
|  3 | D      |    22 |                           406 |                            450 |           32 |
|  4 | E      |    23 |                           417 |                            283 |           50 |
|  5 | F      |    20 |                            45 |                            485 |           67 |
|  6 | G      |    21 |                           217 |                            193 |           92 |
|  7 | H      |    22 |                           200 |                            283 |           62 |
|  8 | I      |    20 |                           588 |                            236 |           44 |
|  9 | J      |    21 |                           319 |                            191 |           85 |
| 10 | K      |    22 |                           300 |                            400 |           80 |
| 11 | L      |    23 |                           400 |                            300 |           40 |

8) Added the percentage column:

| Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |   Percentage |
|:-------|------:|------------------------------:|-------------------------------:|-------------:|-------------:|
| A      |    20 |                           213 |                            198 |           76 |        37.36 |
| B      |    21 |                            31 |                            378 |           26 |        37.18 |
| C      |    20 |                            57 |                            133 |           53 |        17.27 |
| D      |    22 |                           406 |                            450 |           32 |        77.82 |
| E      |    23 |                           417 |                            283 |           50 |        63.64 |
| F      |    20 |                            45 |                            485 |           67 |        48.18 |
| G      |    21 |                           217 |                            193 |           92 |        37.27 |
| H      |    22 |                           200 |                            283 |           62 |        43.91 |
| I      |    20 |                           588 |                            236 |           44 |        74.91 |
| J      |    21 |                           319 |                            191 |           85 |        46.36 |
| K      |    22 |                           300 |                            400 |           80 |        63.64 |
| L      |    23 |                           400 |                            300 |           40 |        63.64 |

9) Added the grade column:

| Name   |   Age |   Semester I marks out of 600 |   Semester II marks out of 500 |   Attendance |   Percentage | Grade   |
|:-------|------:|------------------------------:|-------------------------------:|-------------:|-------------:|:--------|
| A      |    20 |                           213 |                            198 |           76 |        37.36 | F       |
| B      |    21 |                            31 |                            378 |           26 |        37.18 | F       |
| C      |    20 |                            57 |                            133 |           53 |        17.27 | F       |
| D      |    22 |                           406 |                            450 |           32 |        77.82 | A+      |
| E      |    23 |                           417 |                            283 |           50 |        63.64 | A       |
| F      |    20 |                            45 |                            485 |           67 |        48.18 | B       |
| G      |    21 |                           217 |                            193 |           92 |        37.27 | F       |
| H      |    22 |                           200 |                            283 |           62 |        43.91 | B       |
| I      |    20 |                           588 |                            236 |           44 |        74.91 | A       |
| J      |    21 |                           319 |                            191 |           85 |        46.36 | B       |
| K      |    22 |                           300 |                            400 |           80 |        63.64 | A       |
| L      |    23 |                           400 |                            300 |           40 |        63.64 | A       |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q4) Create a DataFrame based on E-Commerce data and generate mean, mode, and median

<br>

## CODE

```python
import pandas as pd

data = {
    'Order_ID':     ['101', '102', '103', '104', '105'],
    'Price':        [50, 20, 40, 50, 45],
    'Quantity':     [2, 3, 1, 2, 1]
}
df = pd.DataFrame(data)
print('\n1) Original dataframe:')
display_df(df)

mean_df   = df.mean(numeric_only=True)
mode_df   = df.mode(numeric_only=True)
median_df = df.median(numeric_only=True)

print('\n2) Means: ')
display_df(mean_df, index=True)
print('\n3) Modes: ')
display_df(mode_df, index=True)
print('\n4) Medians: ')
display_df(median_df, index=True)
```

<br>

## OUTPUT

<br>

1) Original dataframe:

|   Order_ID |   Price |   Quantity |
|-----------:|--------:|-----------:|
|        101 |      50 |          2 |
|        102 |      20 |          3 |
|        103 |      40 |          1 |
|        104 |      50 |          2 |
|        105 |      45 |          1 |

2) Means: 

|          |    0 |
|:---------|-----:|
| Price    | 41   |
| Quantity |  1.8 |

3) Modes: 

|    |   Price |   Quantity |
|---:|--------:|-----------:|
|  0 |      50 |          1 |
|  1 |     nan |          2 |

4) Medians: 

|          |   0 |
|:---------|----:|
| Price    |  45 |
| Quantity |   2 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q5) Write a program to implement pivot() and pivot-table() on a DataFrame

<br>

## CODE

```python
import pandas as pd

data = {
    'Day':         ['Monday', 'Monday', 'Tuesday', 'Tuesday', 'Wednesday', 'Wednesday'],
    'City':        ['Delhi', 'Mumbai', 'Delhi', 'Mumbai', 'Delhi', 'Mumbai'],
    'Temperature': [32, 34, 33, 35, 34, 36],
}
df = pd.DataFrame(data)
print('\n1) Dataframe for pivot(): ')
display_df(df)

pivot_df = df.pivot(index='Day', columns='City', values='Temperature')
print('\n2) pivot(): ')
display_df(pivot_df, index=True)

data = {
    'Day':         ['Monday', 'Monday', 'Monday', 'Tuesday', 'Tuesday', 'Tuesday'],
    'City':        ['Delhi', 'Delhi', 'Mumbai', 'Delhi', 'Mumbai', 'Mumbai'],
    'Temperature': [32, 33, 36, 33, 36, 37],
}
df = pd.DataFrame(data)
print('\n3) Dataframe for pivot_table(): ')
display_df(df)

pivot_table_df = df.pivot_table(index='Day', columns='City', values='Temperature', aggfunc='count')
print('\n4) pivot_table(): ')
display_df(pivot_table_df, index=True)
```

<br>

## OUTPUT

<br>

1) Dataframe for pivot(): 

| Day       | City   |   Temperature |
|:----------|:-------|--------------:|
| Monday    | Delhi  |            32 |
| Monday    | Mumbai |            34 |
| Tuesday   | Delhi  |            33 |
| Tuesday   | Mumbai |            35 |
| Wednesday | Delhi  |            34 |
| Wednesday | Mumbai |            36 |

2) pivot(): 

| Day       |   Delhi |   Mumbai |
|:----------|--------:|---------:|
| Monday    |      32 |       34 |
| Tuesday   |      33 |       35 |
| Wednesday |      34 |       36 |

3) Dataframe for pivot_table(): 

| Day     | City   |   Temperature |
|:--------|:-------|--------------:|
| Monday  | Delhi  |            32 |
| Monday  | Delhi  |            33 |
| Monday  | Mumbai |            36 |
| Tuesday | Delhi  |            33 |
| Tuesday | Mumbai |            36 |
| Tuesday | Mumbai |            37 |

4) pivot_table(): 

| Day     |   Delhi |   Mumbai |
|:--------|--------:|---------:|
| Monday  |       2 |        1 |
| Tuesday |       1 |        2 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q6) Write a Program to read a CSV file and create its DataFrame

<br>

## CODE

```python
import pandas as pd

filename = 'data.csv'
print(f'\n1) Contents of {filename}:')
with open(filename) as f:
    print(f.read())

df = pd.read_csv(filename)
print('\n2) Dataframe:')
display_df(df)
```

<br>

## OUTPUT

<br>

1) Contents of data.csv:
Name,Age,Gender
Ram,16,M
Manish,18,M
Sahil,15,M
Amrit,20,F
Mark,19,M


2) Dataframe:

| Name   |   Age | Gender   |
|:-------|------:|:---------|
| Ram    |    16 | M        |
| Manish |    18 | M        |
| Sahil  |    15 | M        |
| Amrit  |    20 | F        |
| Mark   |    19 | M        |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q7) Consider the DataFrame QtrSales where each row contains the item category, item name and expenditure and group the rows by category, and print the average expenditure per category

<br>

## CODE

```python
import pandas as pd

QtrSales = pd.DataFrame({
    'category':    ['Electronics', 'Electronics', 'Fashion', 'Fashion', 'Electronics', 'Fashion'],
    'item_name':   ['Laptop', 'Headphones', 'T-Shirt', 'Jeans', 'Smartphone', 'Shoes'],
    'expenditure': [1200, 100, 31, 50, 800, 60]
})
print('\n1) Original dataframe:')
display_df(QtrSales)

grouped = QtrSales.groupby(by='category')['expenditure']
mean_df = grouped.mean()
print('\n2) Average expenditure per category:')
display_df(mean_df, index=True)
```

<br>

## OUTPUT

<br>

1) Original dataframe:

| category    | item_name   |   expenditure |
|:------------|:------------|--------------:|
| Electronics | Laptop      |          1200 |
| Electronics | Headphones  |           100 |
| Fashion     | T-Shirt     |            31 |
| Fashion     | Jeans       |            50 |
| Electronics | Smartphone  |           800 |
| Fashion     | Shoes       |            60 |

2) Average expenditure per category:

| category    |   expenditure |
|:------------|--------------:|
| Electronics |           700 |
| Fashion     |            47 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q8) Create a DataFrame having age, name, weight of five students. Write a program to display only the weight of first and fourth rows

<br>

## CODE

```python
import pandas as pd

data = {
    'name':   ['John', 'Emma', 'Michael', 'Sophia', 'William'],
    'age':    [20, 21, 22, 20, 23],
    'weight': [70, 65, 75, 68, 72]
}
df = pd.DataFrame(data)
print('\n1) Original dataframe:')
display_df(df, index=True)

weight_df = df.loc[ [0,3] , ['weight'] ]
print('\n2) Weight of the first and fourth rows:')
display_df(weight_df, index=True)
```

<br>

## OUTPUT

<br>

1) Original dataframe:

|    | name    |   age |   weight |
|---:|:--------|------:|---------:|
|  0 | John    |    20 |       70 |
|  1 | Emma    |    21 |       65 |
|  2 | Michael |    22 |       75 |
|  3 | Sophia  |    20 |       68 |
|  4 | William |    23 |       72 |

2) Weight of the first and fourth rows:

|    |   weight |
|---:|---------:|
|  0 |       70 |
|  3 |       68 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q9) Write a program to create a DataFrame to store weight, age and name of three people. Print the DataFrame and its transpose

<br>

## CODE

```python
import pandas as pd

data = {
    'name':   ['John', 'Emma', 'Michael', 'Sophia', 'William'],
    'age':    [20, 21, 22, 20, 23],
    'weight': [70, 65, 75, 68, 72]
}
df = pd.DataFrame(data)
print('\n1) Original dataframe:')
display_df(df, index=True)

print('\n2) Transpose of the dataframe:')
display_df(df.T, index=True)
```

<br>

## OUTPUT

<br>

1) Original dataframe:

|    | name    |   age |   weight |
|---:|:--------|------:|---------:|
|  0 | John    |    20 |       70 |
|  1 | Emma    |    21 |       65 |
|  2 | Michael |    22 |       75 |
|  3 | Sophia  |    20 |       68 |
|  4 | William |    23 |       72 |

2) Transpose of the dataframe:

|        | 0    | 1    | 2       | 3      | 4       |
|:-------|:-----|:-----|:--------|:-------|:--------|
| name   | John | Emma | Michael | Sophia | William |
| age    | 20   | 21   | 22      | 20     | 23      |
| weight | 70   | 65   | 75      | 68     | 72      |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q10) Create a pandas series from a dictionary of values and an ndarray

<br>

## CODE

```python
import pandas as pd
import numpy as np

data = {
    'Name':   np.array([ 'Ram', 'Manish', 'Sahil', 'Amrit', 'Mark' ]),
    'Age':    np.array([ 16, 18, 15, 20, 19 ]),
    'Gender': np.array([ 'M', 'M', 'M', 'F', 'M' ])
}
df = pd.DataFrame(data)
print('\n1) Dataframe created from a dictionary of values and ndarray:')
display_df(df)
```

<br>

## OUTPUT

<br>

1) Dataframe created from a dictionary of values and ndarray:

| Name   |   Age | Gender   |
|:-------|------:|:---------|
| Ram    |    16 | M        |
| Manish |    18 | M        |
| Sahil  |    15 | M        |
| Amrit  |    20 | F        |
| Mark   |    19 | M        |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q11) Perform sorting on Series data and DataFrames

<br>

## CODE

```python
import pandas as pd

data = {
    'name':    ['Jason', 'Molly', 'Tina', 'Jake', 'Amy'],
    'year':    [2012, 2012, 2013, 2014, 2014],
    'reports': [4, 24, 31, 2, 3]
}
df        = pd.DataFrame(data)
print('\n1) Original dataframe:')
display_df(df)

sorted_df = df.sort_values(by='reports', ascending=False)
print('\n2) Sorted dataframe (based on reports) in descending order:')
display_df(sorted_df)

s = pd.Series([3, 1, 2, 3, 4])
print('\n3) Original series:')
display_df(s)

s.sort_values(inplace=True)
print('\n4) Sorted series in ascending order:')
display_df(s)
```

<br>

## OUTPUT

<br>

1) Original dataframe:

| name   |   year |   reports |
|:-------|-------:|----------:|
| Jason  |   2012 |         4 |
| Molly  |   2012 |        24 |
| Tina   |   2013 |        31 |
| Jake   |   2014 |         2 |
| Amy    |   2014 |         3 |

2) Sorted dataframe (based on reports) in descending order:

| name   |   year |   reports |
|:-------|-------:|----------:|
| Tina   |   2013 |        31 |
| Molly  |   2012 |        24 |
| Jason  |   2012 |         4 |
| Amy    |   2014 |         3 |
| Jake   |   2014 |         2 |

3) Original series:

|   0 |
|----:|
|   3 |
|   1 |
|   2 |
|   3 |
|   4 |

4) Sorted series in ascending order:

|   0 |
|----:|
|   1 |
|   2 |
|   3 |
|   3 |
|   4 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q12) Two Series object, Population stores the details of four metro cities of India and another object AvgIncome stores the total average income reported in four years in these cities. Calculate income per capita for each of these metro cities

<br>

## CODE

```python
import pandas as pd

Population = pd.Series({'Delhi': 20000000, 'Mumbai': 22000000, 'Bangalore': 12000000, 'Kolkata': 15000000})
AvgIncome  = pd.Series({'Delhi': 350000,   'Mumbai': 320000,   'Bangalore': 300000,   'Kolkata': 280000})
print('\n1) Population:')
display_df(Population, index=True)
print('\n2) AvgIncome:')
display_df(AvgIncome, index=True)

income_per_capita = AvgIncome / Population
print("\n3) Income per capita for each metro city:")
display_df(income_per_capita, index=True)
```

<br>

## OUTPUT

<br>

1) Population:

|           |       0 |
|:----------|--------:|
| Delhi     | 2e+07   |
| Mumbai    | 2.2e+07 |
| Bangalore | 1.2e+07 |
| Kolkata   | 1.5e+07 |

2) AvgIncome:

|           |      0 |
|:----------|-------:|
| Delhi     | 350000 |
| Mumbai    | 320000 |
| Bangalore | 300000 |
| Kolkata   | 280000 |

3) Income per capita for each metro city:

|           |         0 |
|:----------|----------:|
| Delhi     | 0.0175    |
| Mumbai    | 0.0145455 |
| Bangalore | 0.025     |
| Kolkata   | 0.0186667 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q13) Series objects Temp1, Temp2, Temp3, and Temp4 store the temperature of days of week 1, week 2, week 3, week 4. Write a script to:
1) Print average temperature per week
2) Print average temperature of entire month

<br>

## CODE

```python
import pandas as pd

Temp1   = pd.Series([20, 22, 21, 23, 25], index=['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'])
Temp2   = pd.Series([24, 23, 22, 21, 20], index=['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'])
Temp3   = pd.Series([22, 23, 24, 25, 26], index=['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'])
Temp4   = pd.Series([25, 24, 23, 22, 21], index=['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'])
temp_df = pd.DataFrame({'Week 1': Temp1, 'Week 2': Temp2, 'Week 3': Temp3, 'Week 4': Temp4})
print('\n1) Original data:')
display_df(temp_df, index=True)

mean_df = temp_df.mean()
print("\n2) Average temperature per week:")
display_df(mean_df, index=True)

print("\n3) Average temperature of the entire month: ", temp_df.values.mean())
```

<br>

## OUTPUT

<br>

1) Original data:

|           |   Week 1 |   Week 2 |   Week 3 |   Week 4 |
|:----------|---------:|---------:|---------:|---------:|
| Monday    |       20 |       24 |       22 |       25 |
| Tuesday   |       22 |       23 |       23 |       24 |
| Wednesday |       21 |       22 |       24 |       23 |
| Thursday  |       23 |       21 |       25 |       22 |
| Friday    |       25 |       20 |       26 |       21 |

2) Average temperature per week:

|        |    0 |
|:-------|-----:|
| Week 1 | 22.2 |
| Week 2 | 22   |
| Week 3 | 24   |
| Week 4 | 23   |

3) Average temperature of the entire month:  22.8



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q14) Write a pandas program to convert a series of lists to one series

<br>

## CODE

```python
import pandas as pd

s = pd.Series([
    ['Red', 'Green', 'White'],
    ['Red', 'Black'],
    ['Yellow']
])
print("\n1) Original Series:")
display_df(s)

ans = []
for i in s: ans.extend(i)
ret = pd.Series(ans)
print("\n2) Resultant Series:")
display_df(ret)
```

<br>

## OUTPUT

<br>

1) Original Series:

| 0                         |
|:--------------------------|
| ['Red', 'Green', 'White'] |
| ['Red', 'Black']          |
| ['Yellow']                |

2) Resultant Series:

| 0      |
|:-------|
| Red    |
| Green  |
| White  |
| Red    |
| Black  |
| Yellow |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q15) Write a pandas program to compare elements of two series

<br>

## CODE

```python
import pandas as pd

s1 = pd.Series([1, 2, 3, 4, 5])
s2 = pd.Series([4, 0, 3, 7, 4])

print("\n1) Original series':")
display_df(s1)
print('\n')
display_df(s2)

print("\n2) Comparing each element one by one:")
for i,j in zip(s1, s2):
    if   i == j: print(f'{i} == {j}')
    elif i > j:  print(f'{i} > {j}')
    else:        print(f'{i} < {j}')
```

<br>

## OUTPUT

<br>

1) Original series':

|   0 |
|----:|
|   1 |
|   2 |
|   3 |
|   4 |
|   5 |



|   0 |
|----:|
|   4 |
|   0 |
|   3 |
|   7 |
|   4 |

2) Comparing each element one by one:
1 < 4
2 > 0
3 == 3
4 < 7
5 > 4



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q16) Write a pandas program to create a subset of a given series based on values and condition

<br>

## CODE

```python
import pandas as pd

s = pd.Series([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

print("\n1) Original series:")
display_df(s)

print("\n2) Subset of elements smaller than 6")
new_s = s[s < 6]
display_df(new_s)
```

<br>

## OUTPUT

<br>

1) Original series:

|   0 |
|----:|
|   0 |
|   1 |
|   2 |
|   3 |
|   4 |
|   5 |
|   6 |
|   7 |
|   8 |
|   9 |

2) Subset of elements smaller than 6

|   0 |
|----:|
|   0 |
|   1 |
|   2 |
|   3 |
|   4 |
|   5 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

Q17) Given the dataset Toyota.csv, do the following operations: 	

1. Upload Toyota.csv in dataframe df.
2. What is the data type of MetColor?
3. How many null values are there in the KM field?
4. Which column has 7 unique values?
5. How many records are there? What is the mean and median of age grouped by FuelType?
6. Replace three, four, five value in Doors column to 3,4,5 respectively
7. Change the datatype of Doors to int64
8. Impute the value of Price with median
9. Replace "????" in HP field with mean
10. Impute blank values in FuelType with Mode.
11. Delete the rows with MetColor and Age as blank
12. Replace “??” value in KM with Mean
13. What is the mean, median and mode of the KM field?
14. Create a new column “Category” based on the value of the column “Age” according to the following table:

| Value | Category |
| :---: | :------: |
| 0-10  | Old      |
| 11-20 | Medium   |
| 20+   | New      |

15. Create Dummy fields for the FuelType column



<br>

## CODE

```python
import pandas as pd


# 1) Upload Toyota.csv in dataframe df
df = pd.read_csv('Toyota.csv')

# 2) What is the data type of MetColor?
metcolor_dtype = df['MetColor'].dtype
print(f'\n2) Datatype of the MetColor column is ', metcolor_dtype)

# 3) How many null value are there in KM field?
num_null = df['KM'].isnull().sum()
print(f'\n3) The KM column has {num_null} null values')

# 4) Which column has 7 unique values?
for col in df.columns:
    if df[col].nunique() == 7:
        print(f'\n4) The {col} column has 7 unique values')
else:
    print('\n4) No column with 7 unique values')

# 5) How many records are there?
print(f'\n5) There are a total of {len(df)} records')

# 6) Replace three, four, five value in Doors column to 3,4,5 respectively.
replace_dict = {'three': 3, 'four': 4, 'five': 5}
df['Doors'] = df['Doors'].replace(replace_dict)

# 7) Change the datatype of Doors to int64
df['Doors'] = df['Doors'].astype('int64')

# 8) Impute the value of Price with median
median_price = df['Price'].median()
df['Price']  = df['Price'].fillna(median_price)

# 9) Replace "????"" in HP field with mean
temp     = df['HP']
temp     = temp[temp != '????']
temp     = temp.astype('int64')
mean_hp  = temp.mean()
df['HP'] = df['HP'].replace('????', mean_hp)

# 10) Impute blank values in FuelType with Mode
mode_fueltype  = df['FuelType'].mode()[0]
df['FuelType'] = df['FuelType'].fillna(mode_fueltype)

# 11) Delete the rows with MetColor and Age as blank
df.dropna(subset=['MetColor', 'Age'], inplace=True)

# 12) Replace ?? value in KM with Mean
temp     = df['KM']
temp     = temp[temp != '??']
temp     = temp.astype('int64')
mean_km  = temp.mean()
df['KM'] = df['KM'].replace('??', mean_km)

# 13) What is the mean, median and mode of KM field
km = df['KM'].astype('int64')
print(f'\n13.1) Mean of KM:   {mean_km}')
print(f'13.2) Median of KM: {km.median()}')
print(f'13.3) Mode of KM:   {km.mode()[0]}')

# 14) Create a new column "Category" based on the value of the column "Age"
def func(val):
    if   val <= 10: return 'New'
    elif val <= 20: return 'Medium'
    else:           return 'Old'
df['Category'] = df['Age'].apply(func)

# 15) Create Dummy fields for FuelType
df = pd.get_dummies(df, columns=['FuelType'])
```

<br>

## OUTPUT

<br>

2) Datatype of the MetColor column is  float64

3) The KM column has 0 null values

4) The Doors column has 7 unique values

4) No column with 7 unique values

5) There are a total of 1436 records

13.1) Mean of KM:   69006.62001696353
13.2) Median of KM: 63875.5
13.3) Mode of KM:   69006



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q18) Write a pandas program to change the order of index of a given series

<br>

## CODE

```python
s = pd.Series(data = [1, 2, 3, 4, 5], index = ['A', 'B', 'C', 'D', 'E'])
print("Original series:")
display_df(s, index=True)

s = s.reindex(index = ['B', 'A', 'C', 'D', 'E'])
print("\nSeries after changing the order of index:")
display_df(s, index=True)
```

<br>

## OUTPUT

<br>
Original series:

|    |   0 |
|:---|----:|
| A  |   1 |
| B  |   2 |
| C  |   3 |
| D  |   4 |
| E  |   5 |

Series after changing the order of index:

|    |   0 |
|:---|----:|
| B  |   2 |
| A  |   1 |
| C  |   3 |
| D  |   4 |
| E  |   5 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q19) Write a pandas program to get the items of a given series not present in another given series

<br>

## CODE

```python
import pandas as pd

s1 = pd.Series([1, 2, 3, 4, 5])
s2 = pd.Series([1, 20, 30, 4, 50])

print("S1:")
display_df(s1)
print("\nS2:")
display_df(s2)

print("\nItems of s1 not present in s2:")
ans = s1[~s1.isin(s2)]
display_df(ans)
```

<br>

## OUTPUT

<br>
S1:

|   0 |
|----:|
|   1 |
|   2 |
|   3 |
|   4 |
|   5 |

S2:

|   0 |
|----:|
|   1 |
|  20 |
|  30 |
|   4 |
|  50 |

Items of s1 not present in s2:

|   0 |
|----:|
|   2 |
|   3 |
|   5 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q20) Write a pandas program to calculate the frequency counts of each unique value of a given series

<br>

## CODE

```python
import pandas as pd
s = pd.Series([1,1,2,2,2,3,4,4,4,4,4,5,5,5,5,5])
print("Original Series:")
display_df(s)

print("\nFrequency of each unique value:")
freq = s.value_counts()
display_df(freq, index=True)
```

<br>

## OUTPUT

<br>
Original Series:

|   0 |
|----:|
|   1 |
|   1 |
|   2 |
|   2 |
|   2 |
|   3 |
|   4 |
|   4 |
|   4 |
|   4 |
|   4 |
|   5 |
|   5 |
|   5 |
|   5 |
|   5 |

Frequency of each unique value:

|    |   count |
|---:|--------:|
|  4 |       5 |
|  5 |       5 |
|  2 |       3 |
|  1 |       2 |
|  3 |       1 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q21) Create a Series and print all the elements that are above 75th percentile

<br>

## CODE

```python
import pandas as pd

s      = pd.Series([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
per_75 = s.quantile(0.75)
ans    = s[s > per_75]
print(ans)
```

<br>

## OUTPUT

<br>
7     8
8     9
9    10
dtype: int64



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q22) Write a program to find the MAD (mean absolute deviation) of all columns in a dataframe

<br>

## CODE

```python
import pandas as pd

df = pd.DataFrame({
    'A': [1, 2, 3, 4, 5],
    'B': [6, 7, 8, 9, 100]
})

ans = pd.Series()
for col in df:
    mean  = df[col].mean()
    diffs = df[col] - mean
    diffs = diffs.abs()
    mad   = diffs.mean()
    ans[col] = mad

print('Original dataframe:')
display_df(df)
print('\nMADs: ')
display_df(ans, index=True)
```

<br>

## OUTPUT

<br>
Original dataframe:

|   A |   B |
|----:|----:|
|   1 |   6 |
|   2 |   7 |
|   3 |   8 |
|   4 |   9 |
|   5 | 100 |

MADs: 

|    |    0 |
|:---|-----:|
| A  |  1.2 |
| B  | 29.6 |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

# Q23) Create a dataframe based on employee data and generate quartile and variance

<br>

## CODE

```python
import pandas as pd

df = pd.DataFrame({
    'Name':   ['A', 'B', 'C', 'D', 'E'],
    'Salary': [1000, 2000, 3000, 4000, 5000],
    'Age':    [20, 30, 40, 50, 60]
})

quartiles = df.quantile([0.25, 0.5, 0.75], numeric_only=True)
variances = df.var(numeric_only=True)

print('Original dataframe:')
display_df(df)
print('\nQuartiles:')
display_df(quartiles, index=True)
print('\nVariances:')
display_df(variances, index=True)
```

<br>

## OUTPUT

<br>
Original dataframe:

| Name   |   Salary |   Age |
|:-------|---------:|------:|
| A      |     1000 |    20 |
| B      |     2000 |    30 |
| C      |     3000 |    40 |
| D      |     4000 |    50 |
| E      |     5000 |    60 |

Quartiles:

|      |   Salary |   Age |
|-----:|---------:|------:|
| 0.25 |     2000 |    30 |
| 0.5  |     3000 |    40 |
| 0.75 |     4000 |    50 |

Variances:

|        |         0 |
|:-------|----------:|
| Salary |   2.5e+06 |
| Age    | 250       |


<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

