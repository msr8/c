import pandas as pd

data = {
    'age':            [10,22,13,21,12,11,17],
    'section':        ['A','B','C','B','B','A','A'],
    'city':           ['Gurgaon','Delhi','Mumbai','Delhi','Mumbai','Delhi','Mumbai'],
    'gender':         ['M','F','F','M','M','M','F'],
    'favorite_color': ['red','black','yellow','pink','black','green','red']   
}

data_list = [
    ['age', 'section', 'city',    'gender', 'favorite_color'],
    [10,    'A',       'Gurgaon', 'M',      'red'           ],
    [22,    'B',       'Delhi',   'F',      'black'         ],
    [13,    'C',       'Mumbai',  'F',      'yellow'        ],
    [21,    'B',       'Delhi',   'M',      'pink'          ],
    [12,    'B',       'Mumbai',  'M',      'black'         ],
    [11,    'A',       'Delhi',   'M',      'green'         ],
    [17,    'A',       'Mumbai',  'F',      'red'           ]
]

data_dict = [
    {'age': 10, 'section': 'A', 'city': 'Gurgaon', 'gender': 'M', 'favorite_color': 'red'},
    {'age': 22, 'section': 'B', 'city': 'Delhi',   'gender': 'F', 'favorite_color': 'black'},
    {'age': 13, 'section': 'C', 'city': 'Mumbai',  'gender': 'F', 'favorite_color': 'yellow'},
    {'age': 21, 'section': 'B', 'city': 'Delhi',   'gender': 'M', 'favorite_color': 'pink'},
    {'age': 12, 'section': 'B', 'city': 'Mumbai',  'gender': 'M', 'favorite_color': 'black'},
    {'age': 11, 'section': 'A', 'city': 'Delhi',   'gender': 'M', 'favorite_color': 'green'},
    {'age': 17, 'section': 'A', 'city': 'Mumbai',  'gender': 'F', 'favorite_color': 'red'}
]

df = pd.DataFrame(data_list[1:], columns=data_list[0])
df.to_latex()
# Convert df to list of dictionaries
print(df.to_dict(orient='records'))
print(df.head(3))
print(df.tail(3))
print(df.describe())
print(df.info())
print(df.shape)
print(df.columns)
print(df.index)
print(df['city'])
print(df[['city', 'age']])
print(df[2:5])
print(df[df['age'] > 15])
print(df[df['age'] > 15][['city', 'age']])
print(df.iloc[2:5, 2:4])
print(df.iloc[2:5, [2, 4]])