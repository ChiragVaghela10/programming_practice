arr = list(map(int, input().split()))
n, m = arr[0], arr[1]

g = []
for i in range(n):
    g.append(list(map(int, input().split())))


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
        mul_value += (arr1[i] * arr2[i])
    return mul_value


max_value=0
for i in range(1, n-1):
    for j in range(1, m-1):
        cords = create_plus_coordinates(i,j)
        for k in range(1, n-1):
            for l in range(1, m-1):
                flag = 1
                arrc = create_plus_coordinates(k, l)
                for item in arrc:
                    if item in cords:
                        flag = 0
                        break
                if flag:
                    values = create_plus_values(i,j)
                    arrv = create_plus_values(k, l)
                    multiplied = mul_plus(values, arrv)
                    if multiplied > max_value:
                        max_value = multiplied

print(max_value)
