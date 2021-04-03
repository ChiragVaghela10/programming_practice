import string, random

MAX_ALLOWED_GUESSES = 6


class hangman(object):

    def __init__(self, filePath):
        self.availableGuesses = MAX_ALLOWED_GUESSES
        self.lettersGuessed = []
        self.wordList = self.loadWords(filePath)
        self.secretWord = self.chooseWord(self.wordList)
        print(">>>>", self.secretWord)
        # UI = userInterface()
        #self.playGame(self.secretWord)

    def loadWords(self, filePath):
        """
        Returns a list of valid words. Words are strings of lowercase letters.
        
        Depending on the size of the word list, this function may
        take a while to finish.
        """
        print("Loading word list from file...")
        inFile = open(filePath, 'r')
        line = inFile.readline()
        wordlist = line.split()
        print(" ", len(wordlist), "words loaded.")
        return wordlist


    def chooseWord(self, wordlist):
        """
        wordlist (list): list of words (strings)

        Returns a word from wordlist at random
        """
        return random.choice(wordlist)


    def isWordGuessed(self, secretWord, lettersGuessed):
        '''
        secretWord: string, the word the user is guessing
        lettersGuessed: list, what letters have been guessed so far
        returns: boolean, True if all the letters of secretWord are in lettersGuessed;
          False otherwise
        '''
        for letter in secretWord:
            if letter not in lettersGuessed:
                return False

        return True


    def getGuessedWord(self):
        '''
        secretWord: string, the word the user is guessing
        lettersGuessed: list, what letters have been guessed so far
        returns: string, comprised of letters and underscores that represents
          what letters in secretWord have been guessed so far.
        '''
        answer = ''
        for letter in self.secretWord:
            if letter in self.lettersGuessed:
                answer += letter
            else:
                answer += '_ '
        
        return answer


    def getLettersGuessed(self):
        return self.lettersGuessed


    def getAvailableGuesses(self):
        return self.availableGuesses

    def getSecretWord(self):
        return self.secretWord

    def playGame(self, guess):
        if self.availableGuesses:
            if guess in self.lettersGuessed:
                return 'already guessed'
            elif guess not in self.secretWord:
                self.lettersGuessed += guess
                self.availableGuesses -= 1
                return 'bad guess'
            elif guess in self.secretWord:
                self.lettersGuessed += guess
##                if self.isWordGuessed(self.secretWord, self.lettersGuessed):
##                    return 
                return self.getGuessedWord()
        else:
            return 1
