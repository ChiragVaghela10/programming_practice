t = int(input())

while t:
    arr=[]
    prev = ''
    s = input()
    for i in s:
        if prev == '(' and i == ')' and arr:
            arr.pop()
        else:
            arr.append(i)
        if arr:
            prev = arr[-1]
    # print(arr)
    o = arr.count(')')
    t1= o * '('

    c = arr.count('(')
    t2 = c * ')'
    print(t1 + s + t2)
    t -= 1
