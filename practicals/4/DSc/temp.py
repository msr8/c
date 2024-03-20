import pandas as pd


# 1) Upload Toyota.csv in dataframe df
df = pd.read_csv('toyota.csv')

# 2) What is the data type of MetColor?
print(df['MetColor'].dtype)

# 3) How many null value are there in KM field?
print(df['KM'].isnull().sum())

# 4) Which column has 7 unique values?
for col in df.columns:
    if df[col].nunique() == 7:
        print(col)
else:
    print('No column with 7 unique values')

# 5) How many records are there?
print(len(df))

# 6) Replace three, four, five value in Doors column to 3,4,5 respectively.
replace_dict = {'three': 3, 'four': 4, 'five': 5}
df['Doors'] = df['Doors'].replace(replace_dict)

# 7) Change the datatype of Doors to int64
df['Doors'] = df['Doors'].astype('int64')

# 8) Impute the value of Price with median
median_price = df['Price'].median()
df['Price'] = df['Price'].fillna(median_price)

# 9) Replace "????"" in HP field with mean
temp = df['HP']
temp = temp[temp != '????']
temp = temp.astype('int64')
mean_hp = temp.mean()
df['HP'] = df['HP'].replace('????', mean_hp)

# 10) Impute blank values in FuelType with Mode
mode_fueltype = df['FuelType'].mode()[0]
df['FuelType'] = df['FuelType'].fillna(mode_fueltype)

# 11) Delete the rows with MetColor and Age as blank
df.dropna(subset=['MetColor', 'Age'], inplace=True)

# 12) Replace ?? value in KM with Mean
temp = df['KM']
temp = temp[temp != '??']
temp = temp.astype('int64')
mean_km = temp.mean()
df['KM'] = df['KM'].replace('??', mean_km)

# 13) What is the mean, median and mode of KM field
km = df['KM'].astype('int64')
print(f'Mean:   {mean_km}')
print(f'Median: {km.median()}')
print(f'Mode:   {km.mode()[0]}')

# 14) Categorise Age into AgeCat column with 0-10 NewCarCat, 11-20 MediumCarCat, 21- highest value – OldCarCat.
def func(val):
    if   val <= 10: return 'New'
    elif val <= 20: return 'Medium'
    else:           return 'Old'
df['Category'] = df['Age'].apply(func)

# 15) Create Dummy fields for FuelType
df = pd.get_dummies(df, columns=['FuelType'])


df.to_csv('new.csv', index=False)

