class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        ret = 0
        n_rows = len(grid)
        n_cols = len(grid[0])

        for row in range(n_rows):
            for col in range(n_cols):
                if grid[row][col] == 1:
                    if row == 0 or grid[row - 1][col] == 0:
                        ret += 1
                    if row == n_rows-1 or grid[row + 1][col] == 0:
                        ret += 1
                    if col == 0 or grid[row][col - 1] == 0:
                        ret += 1
                    if col == n_cols-1 or grid[row][col + 1] == 0:
                        ret += 1
                    
        return ret