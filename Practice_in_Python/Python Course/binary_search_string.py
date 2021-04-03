def isIn(char, aStr):
    '''
    Search if char is in alphabetically ordered string using binary search
    char: a single character
    aStr: an alphabetized string
    
    returns: True if char is in aStr; False otherwise
    '''
    if len(aStr) <= 1:
        return True if char == aStr else False
    else:
    	mid = int(len(aStr)/2)
    	if char == aStr[mid]:
    		return True
    	elif char < aStr[mid]:
    		return isIn(char,aStr[:mid])
    	else:
    		return isIn(char,aStr[mid+1:])
    		
print(isIn('f','abcde'))
