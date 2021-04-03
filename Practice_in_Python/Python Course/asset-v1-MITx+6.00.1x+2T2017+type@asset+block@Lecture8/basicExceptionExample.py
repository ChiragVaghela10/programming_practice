while True:
	try:
		n = input('Enter an integer: ')
		n = int(n)
		break
	except NameError:
		print 'Input isn\'t Integer, try again'

print 'Correct input of Integer!'
