def biggest(aDict):
    '''
    aDict: A dictionary, where all the values are lists.

    returns: The key with the largest number of values associated with it
    '''
    max = 0
    answer = []
    keys = aDict.keys()
    for key in keys:
    	length = len(aDict[key])
    	if length >= max:
			if length > max:
				answer = []
			answer.append(key)
			max = length
	
	
	print answer

biggest({'b': [1, 7, 5, 4, 3, 18, 10, 0], 'a': []})


