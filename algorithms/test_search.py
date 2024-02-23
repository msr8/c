from random import randint, choice

from searches import linear_search, binary_search


def rand_list(min_elem=1, max_elem=100, min_val=-1000, max_val=1000):
    lis_len = randint(min_elem, max_elem)
    lis     = [ randint(min_val,max_val) for _ in range(lis_len) ]

    val     = choice(lis) if randint(0,1) else randint(min_val,max_val)

    return lis, val




def test_linear_search():
    for _ in range(10000):
        lis,val = rand_list()

        try:
            ind = lis.index(val)
        except ValueError:
            ind = -1

        assert linear_search(lis, val) == ind


def test_binary_search():
    for _ in range(10000):
        lis,val = rand_list()
        
        is_ascending = bool(randint(0,1))
        lis.sort(reverse=(not is_ascending))

        inds = [i for i in range(len(lis)) if lis[i]==val]
        inds = [None] if not inds else inds

        assert binary_search(lis, val, is_ascending=is_ascending) in inds






