# Find the subset:
# Define the ugliness of a set T as the number of unordered pairs (x,y) such that x, y E T and x + y > D. Given a set S of length #M, find the lexicographic minimal subset of S of length N such that the ugliness of this subset is minimal.
#
# Suppose we have two different sets A and B of length K with elements a1 < a2 < a3 ... ak and b1 < b2 < b3 ... bk respectively. We # say that A is lexicographically smaller than B if there exist i such that aj = bj for 1 <= j < i and ai < bi. 
#
# INPUT
# The first line contains three integers N, M, D (1 <= N <= M <= 10^5, 1 <= D <= 10^9).
#
# The second line contains M distinct integers representing the set S. All elements of S are between 1 and 10^9 (inclusive).
#
# OUTPUT
# Output the subset of minimal ugliness in the order given in input. Because all elements are distinct there will always be only #one way of printing them.
# SAMPLE INPUT                              SAMPLE OUTPUT
# 4 5 2                                     1 4 3 2
# 1 4 5 3 2

def combinationUtil(arr, n, r, index, data, i):
    # Current cobination is ready, print it
    if index == r:
        subsets.append(data[:])
        return

    # When no more elements are there to put in data[]
    if (i >= n): return

    data[index] = arr[i]
    combinationUtil(arr, n, r, index + 1, data, i + 1)
    combinationUtil(arr, n, r, index, data, i + 1)


arr = list(map(int, input().split()))
N = arr[0]
M = arr[1]
D = arr[2]

arr = list(map(int, input().split()))
data = [0] * N
subsets = []
combinationUtil(arr, M, N, 0, data, 0)
for i in min(subsets):
    print(i, end=" ")











