import pandas as pd
from numpy import NaN
from IPython.display import HTML

# This makes it so that no indexing is there when displaying the df
def display_df(tp_df=None):
    tp_df = tp_df if isinstance(tp_df,pd.DataFrame) else df
    display(HTML(tp_df.to_html(index=False)))



data = {
    'age': [10,22,13,21,12,11,17],
    'section': ['A','B','C','B','B','A','A'],
    'city': ['Gurgaon','Delhi','Mumbai','Delhi','Mumbai','Delhi','Mumbai'],
    'gender': ['M','F','F','M','M','M','F'],
    'favorite_color': ['red',NaN,'yellow',NaN,'black','green','red']   
}

df = pd.DataFrame(data)
df



# Records where age >= 12 and print only the city and gender columns
df.query('age >= 12')[ ['city','gender'] ]
df[df.age >= 12][ ['city','gender'] ]
df.loc[ df.age.ge(12).values, ['city','gender'] ]
       