t = int(input())

for i in range(t):
    n = int(input())
    girls = list(map(int, input().split()))
    girls.sort()
    boys = list(map(int, input().split()))
    boys.sort(reverse=True)
    for j in range(n):
        if 
