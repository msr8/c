from sklearn.linear_model import LinearRegression
from matplotlib import pyplot as plt
import pandas as pd

plt.style.use('dark_background')
# Set figure DPI, sort of like quality
plt.rcParams['figure.dpi'] = 100
# Remove the extra margin that is present when saving the figure
plt.rcParams['savefig.bbox'] = 'tight'
# Change size of markers
plt.rcParams['lines.markersize'] = 2
# Change size of line
plt.rcParams['lines.linewidth'] = 1
# Changing the line style
plt.rcParams['lines.linestyle'] = 'dotted'


ATTR  = 'RM'
LABEL = 'MEDV'

df = pd.read_csv('/home/mark/Documents/Even_Newer_Python_Stuff/ML/DATASETS/boston_housing/HousingData.csv')
df = df[[ATTR, LABEL]]

# Remove all the NA values
df = df.dropna()
# Plot the distribution
plt.scatter(x=df[ATTR], y=df[LABEL])
# Set the x and y labels
plt.xlabel(ATTR)
plt.ylabel(LABEL)

plt.show()




# Initialise the linear regression model
model = LinearRegression()

# Train the model
X = df[[ATTR]]
Y = df[LABEL]
model.fit(X, Y)

# Print the (approximate) equation of the best fit line
m = round( model.coef_[0]   , 2)
b = round( model.intercept_ , 2)
print(f'y = {m}x + {b}')

# Plot the best fit line
plt.scatter(x=df[ATTR], y=df[LABEL])
plt.plot(X, model.predict(X), color='red')
plt.xlabel(ATTR)
plt.ylabel(LABEL)
# Making the limits of the X and Y axis' the limits of the original scatter plot
plt.xlim(df[ATTR].min(),  df[ATTR].max())
plt.ylim(df[LABEL].min(), df[LABEL].max())

plt.show()
