passwordCorrect = False
password = "HI"
count = 0

while passwordCorrect == False:

    passwordCheck = input("Enter your password: ")
    
    if count < 3:
        if passwordCheck == password:
            print("Correct!\nYour password is:", password) 
            break
        else:
            print("Try Again")
            count = count + 1
    else:
        print("Exceeded allowed number of attempts")
        break