def insert(lis:list, ind:int, val):
    lis.append(None) # So that our list is wide enough

    for i in range( len(lis)-1, ind, -1 ):
        lis[i] = lis[i-1]

    lis[ind]   = val


def delete(lis:list, ind:int):
    for i in range(ind, len(lis)-1):
        lis[i]      = lis[i+1]

    lis[len(lis)-1] = None
