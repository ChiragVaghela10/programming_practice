t = int(input())

def funcn(i, j):
    if b[j] >= a[i] and j >= i:
        return (j-i)
    else:
        return 0

while t:
    n = int(input())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    
    maxi = 0
    j=n-1
    for i in range(n):
        # print(i, j, '>>>>:', funcn(i, j))
        for j in range(n-1, 0, -1):
            if i > j:
                break
            temp = funcn(i, j)
            if temp > maxi:
                maxi = temp
            j -= 1
    
    print(maxi)
    t -= 1
