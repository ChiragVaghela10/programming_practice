#You are given dimensions of matrix and starting integer as an input. e.g. 2 4 3. Than the matrix will be M = [[3,4,5,6], [7,8,9,10]] of 2 X 4.
# Find its transpose here, Mt = [[3, 7], [4, 8], [5, 9], [6, 10]] and multiply M and Mt. Find resM(2 X 2) = M(2 X 4) X Mt(4 X 2)

arr = list(map(int, input().split()))
rows = arr[0]
columns = arr[1]
sPoint = arr[2]

mat = []
for i in range(rows):
    temp = []
    for j in range(columns):
        temp.append(sPoint)
        sPoint += 1
    mat.append(temp)

transposedMat = []
for i in range(columns):
    temp = []
    for j in range(rows):
        temp.append(mat[j][i])
    transposedMat.append(temp)

answerMat = []
for i in range(rows):
    temp = [0] * rows
    answerMat.append(temp)

for i in range(rows):
    for j in range(rows):
        for k in range(columns):
            answerMat[i][j] += (mat[i][k] * transposedMat[k][j])
        
print(mat)
print(transposedMat)
print(answerMat)

#better method

transposedMat2 = [[mat[j][i] for j in range(len(mat))] for i in range(len(mat[0]))]
answerMat = [[sum(a*b for a,b in zip(X_row,Y_col)) for Y_col in zip(*transposedMat2)] for X_row in mat]
print(transposedMat2)
print(answerMat)
            
            