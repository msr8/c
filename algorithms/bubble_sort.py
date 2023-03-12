lis     = [5,3,7,8,1]
lis_len = len(lis)

to_stop = False

print(f'0.0: {lis}\n\n')


c = 1
j = 0
while not to_stop:
    to_stop = True
    j = 1
    for i in range(0, lis_len-1):
        if lis[i] < lis[i+1]:
            lis[i], lis[i+1] = lis[i+1], lis[i]    # Swaps the elements
            to_stop = False                        # Tells the program that we had to swap elems, meaning the list might not be in order yet
        print(f'{c}.{j}: {lis}')
        j += 1
    c += 1


