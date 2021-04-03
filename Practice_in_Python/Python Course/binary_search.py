low = int(0)
high = int(100)
print("Please think of a number between 0 and 100!")
while True:
    mid = int((low + high)/ 2)
    ans = raw_input("Is your secret number " + str(mid) + "?\nEnter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter 'c' to indicate I guessed correctly. ")
    if ans == 'c':
        break
    elif ans == 'h':
        high = mid
    elif ans == 'l':
        low = mid
    else:
        print("Sorry, I did not understand your input.")

print("Game over. Your secret number was: " + ans)
