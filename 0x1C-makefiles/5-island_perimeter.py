#!/usr/bin/python3
"""
a function that returns the perimeter
of an island described in grid
"""


def island_perimeter(grid):
    """
    returns perimeter of an island
    """
    count = 0
    Length = len(grid) - 1
    Width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                    if j == 0 or grid[i][j - 1] != 1:
                        count += 1
                        if j == Width or grid[i][j + 1] != 1:
                            count += 1
                            if i == Length or grid[i + 1][j] != 1:
                                count += 1

    return count
