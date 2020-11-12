#!/usr/bin/python3
"""
Island perimeter calculator module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Attributes:
        grid (list)(int): Represents the island.
    """

    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            sides = 0
            if grid[y][x] == 1:
                # number of sides that could be part of the perimeter
                sides = 4
                # if any side is next to land
                if y - 1 >= 0 and grid[y - 1][x] == 1:
                    # substract that side from possible perimeter sides
                    sides -= 1
                if y + 1 < len(grid) and grid[y + 1][x] == 1:
                    sides -= 1
                if x - 1 >= 0 and grid[y][x - 1] == 1:
                    sides -= 1
                if x + 1 < len(grid[y]) and grid[y][x + 1] == 1:
                    sides -= 1
            perimeter += sides

    return perimeter
