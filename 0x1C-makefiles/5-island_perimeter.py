#!/usr/bin/python3
"""
    Module of the Island perimeter function.
"""


def island_perimeter(grid):
    """ Returns perimeter of island described in grid """
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0
    ones = 0
    zeros = 0

    for x in range(rows):
        for y in range(columns):
            if grid[x][y] == 1:
                if y > 0 and grid[x][y-1] == 1:
                    ones += 1
                elif y > 0 and grid[x][y-1] == 0:
                    zeros += 1
                if y < columns-1 and grid[x][y+1] == 1:
                    ones += 1
                elif y < columns-1 and grid[x][y+1] == 0:
                    zeros += 1
                if x > 0 and grid[x-1][y] == 1:
                    ones += 1
                elif x > 0 and grid[x-1][y] == 0:
                    zeros += 1
                if x < rows-1 and grid[x+1][y] == 1:
                    ones += 1
                elif x < rows-1 and grid[x+1][y] == 0:
                    zeros += 1
            if ones == 3:
                perimeter += 1
            elif ones == 2:
                perimeter += 2
            elif ones == 1:
                perimeter += 3
            elif zeros == 4:
                perimeter = 4
            ones = 0
            zeros = 0
    return perimeter
