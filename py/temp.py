import pandas as pd

data = {
    'Day':         ['Monday', 'Monday', 'Tuesday', 'Tuesday', 'Wednesday', 'Wednesday'],
    'City':        ['Delhi', 'Mumbai', 'Delhi', 'Mumbai', 'Delhi', 'Mumbai'],
    'Temperature': [32, 34, 33, 35, 34, 36],
}
df = pd.DataFrame(data)
print('Dataframe for pivot(): ')
display_df(df)

pivot_df = df.pivot(index='Day', columns='City', values='Temperature')
print('\npivot(): ')
display_df(pivot_df, index=True)


data = {
    'Day':         ['Monday', 'Monday', 'Monday', 'Tuesday', 'Tuesday', 'Tuesday'],
    'City':        ['Delhi', 'Delhi', 'Mumbai', 'Delhi', 'Mumbai', 'Mumbai'],
    'Temperature': [32, 33, 36, 33, 36, 37],
}
df = pd.DataFrame(data)
print('\nDataframe for pivot_table(): ')
display_df(df)

pivot_table_df = df.pivot_table(index='Day', columns='City', values='Temperature', aggfunc='count')
print('\npivot_table(): ')
display_df(pivot_table_df, index=True)