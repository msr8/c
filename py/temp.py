# We are defining a function which takes a list as an argument and returns a list. `orig` refers to the original list and `list[int]` means that the function takes in and returns a list of integers
def method_1_1(orig:list[int]) -> list[int]:
    # We are defining a new list which will be returned at the end of the function
    new = []

    # len(orig) returns the length of the list `orig`, so if `orig` is [1,2,3,4,5], then len(orig) will return 5
    # Then the loop will run from 0 to 4 (because range(5) returns [0,1,2,3,4])
    for i in range(len(orig)):
        # We extract the sublist of which we need to find the sum of
        sublist = orig[:i+1]
        # We go through the sublist manually and add all the elements to `total`
        total   = 0
        for j in sublist:
            total += j
        # Once we have iterated the sublist, we add the total to the list `new` and move on to the next sublist
        new.append(total)
    
    # Once all that is done, we return the list `new`
    return new

# We take the input from the user and `inp` is a string which would look like "1 2 3 4 5"
inp = input('Enter some numbers (seperated by spaces): ')
# Then we convert it to a list of integers so it ends up looking like [1,2,3,4,5]
# We do it by first splitting `inp` so that it becomes ["1","2","3","4","5"] and then we convert each element to an integer
lis = [int(i) for i in inp.split()]
# We then run our function on the user inputted list and return the output
print(method_1_1(lis))


