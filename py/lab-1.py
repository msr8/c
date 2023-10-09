# Write a program that inputs a list of numbers and returns the cumulative sum that is, a new list where the (i+1)th ts element is the sum of the
# first i elements from the original list. For example, the cumulative sum of [1, 2, 3] is [1, 3, 6]

inp       = input('Enter some numbers (separated by space):\n')
orig_list = [int(i) for i in inp.split()]
new_list  = []

for i in range(len(orig_list)):
    sum_ = sum(orig_list[:i+1])
    new_list.append(sum_)

print(new_list)