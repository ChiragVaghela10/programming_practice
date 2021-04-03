t = int(input())
#arr = []
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    j=0
    #print(list(range(1,len(arr)-1)))
    #print(arr)
    flag=1
    for j in range(1,len(arr)-1):
        #print(j)
        if (arr[j] - arr[j-1]) != (arr[j+1] - arr[j]):
            print('NO')
            flag=0
            break
    if flag:
        print('YES')

