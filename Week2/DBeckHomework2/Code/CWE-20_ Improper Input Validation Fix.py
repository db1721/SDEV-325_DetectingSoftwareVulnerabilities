def itemOneTotal(q):
    itemOnePrice = 15.00
    total = float(q) * float(itemOnePrice)
    return total
    
def itemTwoTotal(q):
    itemTwoPrice = 12.00
    total = float(q) * float(itemTwoPrice)
    return total

try:
    q1 = input("How many item ones were purchased? ")
    q2 = input("How many item twos were purchased? ")
    
    if float(q1) < 0 or float(q2) < 0:
        raise TypeError
    else:
        print("Customer will be charged $", itemOneTotal(q1) + itemTwoTotal(q2))
except TypeError:
    print("Can not enter a negative number!")
    