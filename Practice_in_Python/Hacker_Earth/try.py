'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
arr = list(map(int, input().split()))
n, m = arr[0], arr[1]

g = []
for i in range(n):
    g.append(list(map(int, input().split())))

s=[[i * j for i in list(range(10))] for j in list(range(10))]

def create_plus_values(i, j):
    temp = []
    temp += [g[i-1][j], g[i][j-1], g[i][j], g[i][j+1], g[i+1][j]]
    return temp


def create_plus_coordinates(i, j):
    temp = []
    temp += [[i-1, j], [i, j-1], [i, j], [i, j+1], [i+1, j]]
    return temp


def mul_plus(arr1, arr2):
    mul_value = 0
    for i in range(len(arr1)):
        mul_value += s[arr1[i]][arr2[i]]     # (arr1[i] * arr2[i])
    return mul_value


max_value=0
for i in range(1, n-1):
    for j in range(1, m-1):
        for k in range(1, n-1):
            for l in range(1, m-1):
                if ( (k+l) > (i+j) ) and ([k,l] not in [[i,j],[i-1,j],[i,j-1],[i+1,j],[i,j+1],[i-2,j],[i+2,j],[i,j-2],[i,j+2],[i-1,j-1],[i-1,j+1],[i+1,j-1],[i+1,j+1]]):
                    values = create_plus_values(i, j)
                    arrv = create_plus_values(k, l)
                    multiplied = mul_plus(values, arrv)
                    if multiplied > max_value:
                        max_value = multiplied

print(max_value)























