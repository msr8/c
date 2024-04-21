# Create a normal distribution and plot it
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

data = np.random.normal(loc=2, scale=0.1, size=100000)
# Add -1
data = np.append(data, -1)


data2 = np.random.randn(1000)
plt.hist(data, bins=50)
plt.show()