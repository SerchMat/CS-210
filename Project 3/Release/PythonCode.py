import re
import string

#Option 1
def ListItemPurchased(): 

    listPurchased = open('GroceryItems.txt') #Opens GroceryItems list

    contentsRead = listPurchased.read() #Reads GroceryItems

    items = contentsRead.split()

    itemsBought = [] #List that stores the items bought from GroceryItems

    for item in items: #For loop that add items to ItemsBought
        if item not in itemsBought:
            itemsBought.append(item)

    itemsBought.sort() #Sorts itemsBought

    for items in itemsBought:
        print(contentsRead.count(items), items) #Prints a list with a numerical value from ItemsBought
    

    return 0


#Option 2
def ItemsList():
    listPurchased = open('GroceryItems.txt') #Opens GroceryItems list

    contentsRead = listPurchased.read() #Reads GroceryItems

    items = contentsRead.split()

    itemsBought = []

    for item in items:
        if item not in itemsBought:
            itemsBought.append(item)

    itemsBought.sort()

    listToStr = '\n'.join(map(str, itemsBought)) #Joins the itemsBought list into a more legible list for the user to see and read

    print(listToStr)

def SpecificItem(k):

    listPurchased = open('GroceryItems.txt') #Opens GroceryItems list

    contentsRead = listPurchased.read() #Reads GroceryItems

    items = contentsRead.split()

    itemsBought = []

    for item in items:
        if item not in itemsBought:
            itemsBought.append(item)

    itemsBought.sort()

    if k in itemsBought:
        print(contentsRead.count(k), k, "were purchased today") #Gets the user input from C++ and tells the user how many of that item was purchased on the given day

    if k not in itemsBought:
        print("Invalid Item") #User input was not found on list, so returns an error.

    return 0

#Option 3
def Histogram():
    listPurchased = open('GroceryItems.txt') #Opens GroceryItems list

    contentsRead = listPurchased.read() #Reads GroceryItems

    items = contentsRead.split()

    itemsBought = []

    for item in items:
        if item not in itemsBought:
            itemsBought.append(item)

    itemsBought.sort()

    #For loop for the creation of the Histogram
    for items in itemsBought: 
        itemCount = contentsRead.count(items)
        output = ''
        while(itemCount > 0):
            output += '*' #Print '*' for every item in the list
            itemCount -= 1
        print(items.ljust(13), output)





    
