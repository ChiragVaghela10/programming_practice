max = 0
fs = ''
sum = 0
str = ''
s='azcbobobegghakl'
i=0
while i < len(s):
	sum += 1
	str += s[i]
	j = i + 1
	while j < len(s):
		if s[j-1] <= s[j]:
			str += s[j]
			sum += 1
		else:
			break
		j += 1
	
	if max < sum:
		fs = ''
		fs += str
		max = sum
	sum = 0
	str = ''
	
	i = j
	
print(fs)
