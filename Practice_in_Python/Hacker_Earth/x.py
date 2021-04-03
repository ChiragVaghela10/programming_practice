n = int(input())
r = list(map(int, input().split()))

s=1
state='h'
k=1
for i in range(1,len(r)):
    if r[i] > r[i-1] and state=='h':
        k += 1
    elif r[i] < r[i-1] and state=='h':
        state='l'
        k = 1
    elif r[i] > r[i-1] and state=='l':
        state='h'
        k=2
    elif r[i] < r[i-1] and state=='l':
        k+=1
    elif r[i] == r[i-1]:
        k=1
    print(k)
    s+=k

print(s)
