arr = list(map(int, input().split()))
a = arr[0]
b = arr[1]
c = arr[2]

if a > b and a > c:
    print('a')
elif b > c:
    print('b')
else:
    print('c')

if a > b:
    if a > c:
        print('a')
    else:
        print('c')
else:
    if b > c:
        print('b')
    else:
        print('c')
