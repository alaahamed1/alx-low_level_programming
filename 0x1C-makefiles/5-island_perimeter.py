#!/usr/bin/python3
''' Module of island_perimeter(grid) function'''


def island_perimeter(grid):
	''' returns the perimeter of the island described in grid '''
	perimeter = 0

	for row, IntList in enumerate(grid):
		for col, zone in enumerate(IntList):
			if zone == 1:
				if grid[row][col - 1] == 0:
					perimeter += 1
				if grid[row][col + 1] == 0:
					perimeter += 1
				if grid[row - 1][col] == 0:
					perimeter += 1
				if grid[row + 1][col] == 0:
					perimeter += 1
	return perimeter
