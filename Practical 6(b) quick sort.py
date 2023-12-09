def quicksort(alist, start, end):
    if end - start > 1:
        p = partition(alist, start, end)
        quicksort(alist, start, p)
        quicksort(alist, p + 1, end)


def partition(alist, start, end):
    pivot = alist[start]
    i = start + 1
    j = end - 1

    while True:
        while i <= j and alist[i] <= pivot:
            i = i + 1
        while i <= j and alist[j] >= pivot:
            j = j - 1

        if i <= j:
            temp = alist[j]
            alist[j] = alist[i]
            alist[i] = temp

        else:
            temp = alist[j]
            alist[j] = alist[start]
            alist[start] = temp

            return j

def display_top_five(array):
    print("Top Five Percentages are : ")
    if len(array) < 5:
        start, end = len(array) - 1, -1
    else:
        start, end = len(array) - 1, len(array) - 6

    for i in range(start, end, -1):
        print(array[i],sep = "\n")

print("enter the number of student in class")
n = int(input())
array = []
i = 0
for i in range(n):
    print(f"Enter the percentage of student[{i}]")
    percentage = float(input())
    array.append(percentage)
print("You have entered following percentage:")
for i in array:
    print(i, end=" ")

quicksort(array, 0, n)
print('\n Sorted list: ', end='')
print(array)
display_top_five(array)

