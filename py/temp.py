import pandas as pd
s = pd.Series([1,1,2,2,2,3,4,4,4,4,4,5,5,5,5,5])
print("Original Series:")
display_df(s)

print("\nFrequency of each unique value:")
freq = s.value_counts()
display_df(freq, index=True)