def displayInstruction():                       #display function to show the user instructions
    print("\nChoose your operation: ")
    print("Press (8) to check Palindrome.          Press (1) to check if the number PRIME. \n")
    print("                          Press (0) to EXIT... :(")
    return True


def primeChecker():               #function that takes integer from the user & checks whether it's prime
    p = int(input("\nPlease enter the number to check...:"))
    if p > 1:
        for i in range(2, p):
            if (p % i) == 0:
                print(p, "is not a prime number.")
                break
        else:
            print(p, "is a prime number")
    else:                         #if input number is less than or equal to 1, it is not prime
        print(p, "is not a prime number.")
    return True


def palindromeChecker():           #function that takes a string from the user then checks whether it's palindrom or not
    s = input("\nEnter the word needed to check...:")
    if s == s[::-1]:
        print("           It's a PALINDROME.\n")
    else:
        print("           Not a PALINDROME...\n")
    return True


while True:                       #an open loop
    displayInstruction()          #displays instruction to the user
    Num = int(input("...:"))      #takes the choice from the user

    if Num != 1 and Num != 8 and Num != 0:       #condition to check the validity of the input
        print("Invalid input...\nTry again.")
    elif Num == 8:                               #condition of the palindrome
        palindromeChecker()
    elif Num == 1:                               #condition of the oddEvenChecker
        primeChecker()
    elif Num == 0:                               #condition to exit
        exit()
