lis      = [5,3,7,8,1]
lis_len  = len(lis)
boundary = 0

print(f'0: {lis}\n')

for i in range(lis_len):
    elem   = max(lis[i:])                      # Gets max elem from unsorted part of list
    elem_i = lis.index(elem)                   # Gets its index
    lis[i], lis[elem_i] = lis[elem_i], lis[i]  # Swaps the max elem and the first elem of the unsorted part of list

    print(f'{i+1}: {lis}')






'''
Selection sort is a simple sorting algorithm that repeatedly finds the minimum element from the unsorted part of \
the list and places it at the beginning of the list, which forms the sorted part of the list. The algorithm divides \
the list into two parts: the sorted part and the unsorted part. Initially, the sorted part is empty and the unsorted \
part contains all the elements of the list.

The algorithm works as follows:

1) Find the smallest element in the unsorted part of the list
2) Swap the smallest element with the first element of the unsorted part
3) Move the boundary of the sorted part one element to the right
4) Repeat steps 1-3 until the entire list is sorted.

The algorithm has a time complexity of O(n^2) in the worst case scenario, which makes it inefficient for large lists. \
However, it has the advantage of being easy to understand and implement
'''
