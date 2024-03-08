# Write a pandas program to convert a series of lists to one series
import pandas as pd

s = pd.Series([
    ['Red', 'Green', 'White'],
    ['Red', 'Black'],
    ['Yellow']
])

print("Original Series:")
print(s)
print("\nOne Series:")
# Get all elems in the series
ans = []
for i in s: ans.extend(i)
ret = pd.Series(ans)
print(ret)






# Write a pandas program to compare elements of two series
s1 = pd.Series([1, 2, 3, 4, 5])
s2 = pd.Series([4, 0, 3, 7, 4])

print("\n1) Original series':")
display_df(s1)
display_df(s2)

print("\n2) Comparing each element one by one:")
for i,j in zip(s1, s2):
    if   i == j: print(f'{i} == {j}')
    elif i > j:  print(f'{i} > {j}')
    else:        print(f'{i} < {j}')







# Write a pandas program to create a subset of a given series based on values and condition
import pandas as pd

s = pd.Series([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

print("\n1) Original series:")
display_df(s)

print("\n2) Subset of elements smaller than 6")
new_s = s[s < 6]
display_df(new_s)