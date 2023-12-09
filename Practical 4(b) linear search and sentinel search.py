def linear_search(roll_no, key, n):
    for i in range(len(roll_no)):
        if roll_no[i] == key:
            return i
    return -1


def setinental_search(roll_no, key, n):
    last = roll_no[n - 1]
    roll_no[n - 1] = key
    i = 0
    while roll_no[i] != key:
        i += 1
    roll_no[n - 1] = last
    if (i < n - 1) or (roll_no[i] == key):
        print("Roll no is present")
    else:
        print("roll no is not present")


roll_no = [1, 10, 13, 2, 5, 8, 32, 22, 64, 25]

key = int(input("enter the roll no to find whether its present or not"))
print("________________________________________________________")

n = len(roll_no)

while True:
    print("1.Linear search\n 2.Sentinel Search\n 3. Exit")
    print("________________________________________________________")
    ch = int(input("Enter tour choice"))
    print("________________________________________________________")

    if ch == 1:

        result = linear_search(roll_no, key, n)
        if result == -1:
            print("Roll no is not present")
        else:
            print("roll no is present")

    elif ch == 2:
        setinental_search(roll_no, key, n)
    elif ch == 3:
        break
    else:
        print("Enter valid input")
