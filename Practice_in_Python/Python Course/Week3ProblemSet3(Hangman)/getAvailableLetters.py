import string
def getAvailableLetters(lettersGuessed):
    '''
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters that represents what letters have not
      yet been guessed.
    '''
    answer = ''
    totalLetters = string.ascii_lowercase
    for letter in totalLetters:
    	if letter not in lettersGuessed:
    		answer += letter
    return answer


getAvailableLetters(['e', 'i', 'k', 'p', 'r', 's'])

    

