init_balance = 320000
annualInterestRate = 0.2
monthlyInterestRate = 0.2/12.0
lower = init_balance/12.0
upper = ( init_balance * (1 + monthlyInterestRate)**12 ) / 12.0

while True:
	mid = (lower + upper) / 2.0
	balance = init_balance
	print mid
	for i in range(12):
		balance = round(balance - mid + ((balance - mid) * monthlyInterestRate), 2)
	
	if balance > 0:
		lower = mid 
	elif balance < 0:
		upper = mid
	else:
		break

print 'Lowest Payment:', round(mid, 2)

