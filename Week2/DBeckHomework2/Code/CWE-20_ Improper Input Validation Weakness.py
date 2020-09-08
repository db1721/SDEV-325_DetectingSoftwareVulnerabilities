def itemOneTotal(q):
    itemOnePrice = 15.00
    total = float(q) * float(itemOnePrice)
    return total
    
def itemTwoTotal(q):
    itemTwoPrice = 12.00
    total = float(q) * float(itemTwoPrice)
    return total
  
qauntity = input("How many item ones were purchased? ")
qauntity2 = input("How many item twos were purchased? ")

print("Customer will be charged $", itemOneTotal(qauntity) + itemTwoTotal(qauntity2))