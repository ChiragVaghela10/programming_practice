# Tom and Jerry are wonderful characters. They are always running and make us laugh.
#
# Right now, they are in a grid of houses and Jerry is running away from Tom. The grid of houses is represented as 0 and 1, where 0 # means that Jerry can enter the house, and 1 means Jerry can't. Jerry can only move horizontally or vertically. Also, Jerry # doesn't enter the same house more than once.

# Jerry started running from the house at () which is the top-left house in the grid and have to reach () which the bottom-right # house in the grid. You have find the number of ways in which Jerry can reach the destination house where he can be safe.

# Input Format

# First line is an integer N ( ), which is the size of the grid. N lines follow, each containing N space separated numbers which # are either '0' or '1'.

# Output format

# Print a single line showing the number of ways in which Jerry can reach from () to ().

# SAMPLE INPUT                          SAMPLE OUTPUT 
# 9                                     8512
#0 0 0 0 0 0 0 0 0
#0 1 0 1 0 1 0 1 0
#0 0 0 0 0 0 0 0 0
#0 1 0 1 0 1 0 1 0
#0 0 0 0 0 0 0 0 0
#0 1 0 1 0 1 0 1 0
#0 0 0 0 0 0 0 0 0
#0 1 0 1 0 1 0 1 0
#0 0 0 0 0 0 0 0 0

n = int(input())

g = [list(map(int, input().split())) for i in range(n)]

arr = [[0] * n]* n

for i in arr:
    i[0] = 1

arr[0] = [1] * n

# print('g:', g, '\n', 'arr:', arr)














