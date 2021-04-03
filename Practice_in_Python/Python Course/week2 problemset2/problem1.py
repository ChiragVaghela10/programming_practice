balance = int(input("balance = "))
annualInterestRate = float(input("annualInterestRate = "))
monthlyPaymentRate = float(input("monthlyPaymentRate = "))
for i in range(12):
	minPay = balance * monthlyPaymentRate
	rem = balance - minPay
	interest = rem * (annualInterestRate/12.0)
	balance = rem + interest

print "Remaining balance: " + str(round(balance,2))
