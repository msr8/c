# Write a program to implement pivot() and pivot-table() on a DataFrame
import pandas as pd

# Create a DataFrame
data = {
    'A': ['foo', 'foo', 'foo', 'foo', 'foo', 'bar', 'bar', 'bar', 'bar'],
    'B': ['one', 'one', 'one', 'two', 'two', 'one', 'one', 'two', 'two'],
    'C': ['small', 'large', 'large', 'small', 'small', 'large', 'small', 'small', 'large'],
    'D': [1, 2, 2, 3, 3, 4, 5, 6, 7]
}
df = pd.DataFrame(data)

# Implement pivot() on the DataFrame
pivot = df.pivot(index='A', columns='B', values='D')
print(pivot)

# Implement pivot_table() on the DataFrame
pivot_table = df.pivot_table(index='A', columns='B', values='D', aggfunc='sum')
print(pivot_table)