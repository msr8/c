import pandas as pd

data = {
    'SNO':     [1, 2, 3, 4, 5],
    'Batsman': ['Virat Kohli', 'Ajinkya Rehane', 'Rohit Sharma', 'Shikhar Dhawan', 'Hardik Pandya'],
    'Test':    [3543, 2578, 2280, 2158, 1879],
    'ODI':     [2245, 2165, 2080, 1957, 1856],
    'T20':     [1925, 1853, 1522, 1020, 980]
}

df = pd.DataFrame(data)


# 1) Print the batsman name along with runs scored in Test and T20 using column names and dot notation
new_df = pd.DataFrame({'Batsman': df.Batsman, 'Test': df.Test, 'T20': df.T20})
print('\n1)')
display_df(new_df)

# 2) Display the batsman name along with runs scored in the ODI using the loc method
new_df = df.loc[:, ['Batsman', 'ODI']]
print('\n2)')
display_df(new_df)

# 3) Display the batsman details who:
# 3.1) scored more than 2000 in ODI
new_df = df.query('ODI > 2000')
print('\n3.1)')
display_df(new_df)

# 3.2) scored less than 2500 in Test
new_df = df.query('Test < 2500')
print('\n3.2)')
display_df(new_df)

# 3.3) scored more than 1500 in T20
new_df = df.query('T20 > 1500')
print('\n3.3)')
display_df(new_df)

# 4) Display the columns using the column index number like 0, 2, and 4
new_df = df.iloc[:, [0,2,4]]
print('\n4)')
display_df(new_df)

# 5) Display the alternate rows
new_df = df.iloc[::2, :]
print('\n5)')
display_df(new_df)

# 6) Reindex the dataframe created above with batsman name and delete the data of Hardik Pandya and Shikhar Dhawan by their index from the original dataframe
new_df.index = new_df['Batsman']
new_df = new_df.drop(columns='Batsman')
print('\n6)')
display_df(new_df, index=True)

drop_indices = df.query('Batsman == "Hardik Pandya" or Batsman == "Shikhar Dhawan"').index
new_df = df.drop(index=drop_indices)
print()
display_df(new_df)

# 7) Insert two rows in the dataframe and delete rows whose index is 1 and 4
to_insert = pd.DataFrame({
    'SNO':     [6, 7],
    'Batsman': ['Rishabh Pant', 'KL Rahul'],
    'Test':    [1500, 1200],
    'ODI':     [1000, 900],
    'T20':     [800, 700]
})
new_df = pd.concat([df, to_insert], ignore_index=True)
new_df.drop(index=[1, 4], inplace=True)
print('\n7)')
display_df(new_df)

# 8) Delete the column Test, and add one more column "total", ie the total of ODI and T20 runs
new_df          = df.drop(columns='Test')
new_df['total'] = new_df['ODI'] + new_df['T20']
print('\n8)')
display_df(new_df)

# 9) Rename the column "T20" to "T20I Runs"
new_df = df.rename(columns={'T20': 'T20I Runs'})
print('\n9)')
display_df(new_df)

# 10) Print the dataframe without headers
print('\n10)')
print(new_df.to_string(header=False, index=False))