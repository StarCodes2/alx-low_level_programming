#!/usr/bin/python3
"""Defines a function that calculates the perimeter of an island."""


def island_perimeter(grid):
    """Calculates the perimeter of the islamd in the grid representation.
    1 represents land while 0 represents water in the grid

    args:
        grid(list): A list of lists of integers
    return:
        The perimeter of the island defined in grid
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    not_edges = 0

    for i in range(height):
        for n in range(width):
            if grid[i][n] == 1:
                size += 1
                if i > 0 and grid[i - 1][n] == 1:
                    not_edges += 2
                if n > 0 and grid[i][n - 1] == 1:
                    not_edges += 2
    p_meter = (size * 4) - not_edges
    return p_meter
