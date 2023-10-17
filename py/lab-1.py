def method_1_1(orig:list[int]) -> list[int]:
    new = []

    for i in range(len(orig)):
        sublist = orig[:i+1]
        total   = 0
        for j in sublist:
            total += j
        new.append(total)
    
    return new


def method_1_2(orig:list[int]) -> list[int]:
    new = []

    for i in range(len(orig)):
        new.append(sum(orig[:i+1]))
    
    return new


def method_1_3(orig:list[int]) -> list[int]:
    return [sum(orig[:i+1]) for i in range(len(orig))]




def method_2_1(orig:list[int]) -> list[int]:
    new = []

    total = 0
    for i in orig:
        total += i
        new.append(total)
    
    return new


def method_2_2(orig:list[int]) -> list[int]:
    total = 0
    return [total := total + i for i in orig]


