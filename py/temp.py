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

df = pd.DataFrame(data_list[1:], columns=data_list[0])