def linear_search(lis:list, val, default:int=-1):
    for i,elem in enumerate(lis):
        if elem == val: return i
    else:
        return default




# start and end are indexes that are included
def binary_search(lis:list, val, start:int=0, end:int=None, default=None, is_ascending:bool=True):
    end     = len(lis)-1 if end==None else end
    
    # print(lis, val, start, end)
    if start > end:
        return default

    lis_len = end-start+1
    mid     = (start+end) // 2

    if lis_len == 1:
        if lis[mid] == val:    return mid
        else:                  return default
    
    if lis[mid] == val:
        return mid
    

    if is_ascending:
        if lis[mid] > val:
            return binary_search(lis, val, start, mid-1, default, is_ascending)
        else:
            return binary_search(lis, val, mid+1, end, default, is_ascending)
    else:
        if lis[mid] > val:
            return binary_search(lis, val, mid+1, end, default, is_ascending)
        else:
            return binary_search(lis, val, start, mid-1, default, is_ascending)


# [612, 561, 351, -173, -430, -531, -615, -633, -856, -933] 466

# lis = [612, 561, 351, -173, -430, -531, -615, -633, -856, -933]
# val = 446
# print(binary_search(lis, val, is_ascending=False))


'''
[612, 561, 351, -173, -430, -531, -615, -633, -856, -933] 446 0 9
[612, 561, 351, -173, -430, -531, -615, -633, -856, -933] 446 0 3
[612, 561, 351, -173, -430, -531, -615, -633, -856, -933] 446 2 3
[612, 561, 351, -173, -430, -531, -615, -633, -856, -933] 446 2 1
'''