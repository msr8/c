from functools import cache

@cache
def foo(n:int) -> int:
    if n <= 1: return n
    steps = 0
    while (1 << steps)<=n: steps += 1
    return ((1 << steps) - 1) - foo(n - (1 << (steps - 1)))
        

class Solution:
    def minimumOneBitOperations(self, n: int) -> int:
        # Edgecase
        if n==0: return 0
        return foo(n)




Solution().minimumOneBitOperations(8)