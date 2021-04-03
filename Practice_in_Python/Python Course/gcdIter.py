def gcdIter(a, b):
    '''
    a, b: positive integers
    
    returns: a positive integer, the greatest common divisor of a & b.
    '''
    test = a if a < b else b
    while(test > 1):
        if a % test == 0 and b % test == 0:
            break
        test -= 1
    
    print(test)

gcdIter(10,10)
