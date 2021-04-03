max=0
sum=1
fs=''
s = 'bcbabc'
str = ''
for i in range(len(s)):
	str += s[i]
	if s[i] < s[i+1]:
		#str += s[i+1]
		sum += 1
	else:
		print(str)
		str=''
		#str += str[i+1]
		#str = s[i]
		sum = 1
	if max < sum:
		max = sum
		fs = ''
		fs += str
		
print(max)
print('fs: ' + fs)
