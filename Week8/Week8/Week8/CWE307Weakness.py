passwordCorrect = False
password = "HI"

while passwordCorrect == False:

    passwordCheck = input("Enter your password: ")
    
    if passwordCheck == password:
        print("Correct!\nYour password is:", password) 
        break
    else:
        print("Try Again")