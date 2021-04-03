t = int(input())
for i in range(t):
    s = list(input())
    count = 0
    while True:
        try:
            s.remove('r')
            s.remove('u')
            s.remove('b')
            s.remove('y')
            count += 1
        except:
            print(count)
            break
