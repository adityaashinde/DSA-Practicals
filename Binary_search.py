#\twrite a python program to store names and mobile numbers of your friends in sorted order on names search your friend 
#from list using binary search(recursive and non-recursive) insert friend if not present in phonebook
def binary_search(list1, key):
    start=0
    end = len(list1)
    while start < end:
        mid = (start + end)//2
        if list1[mid] > key:
            end = mid
        elif list1[mid] < key:
            start = mid + 1
        else:
            return mid
    return -1
dict1={}
while True:
    data=input("Enter name and mobile number seperated by comma")
    if 'Exit' == data:
        break
    name,num=data.split(",")
    num=int(num)
    dict1[num]=name
print(dict1)
list1=dict1.keys()
list1=list(list1)
list1.sort()
print(list1)
                
key = int(input("The number to search for:"))
                   
index = binary_search(list1, key)
if index <0:
    print('{}was not found.'.format(key))
else:
    print('{} was found at index {}.'.format(key,index))
    print("datails of number found")
    print(dict1[key])