def bubblesort(arr):
    n= len(arr)
    
    #Traverse through all array elements
    for i in range(n-1):
        
        for j in range(0, n-i-1):
            
            #traverse the array from 0 to n-i-1
            #swap if the elemnt found is greater then the next element
            if arr[j] > arr[j+1] :
                            arr[j], arr[j+1] = arr[j+1], arr[j]
                            
                            
arr=[]
Num=int(input("Enter the number of student"))
for i in range (Num):
    per=float(input("Enter the percentage marks"))
    arr.append(per)

bubblesort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print("%f"%arr[i]),




a,b=10,20
print(a,b)
a,b=b,a
print(a,b)







def selectionsort(arr1):
    for i in range(len(arr1)):
        min_idx = i
        for j in range(i+1, len(arr1)):
            if arr1[min_idx] > arr1[j]:
                min_idx = j
                
                
    #swap the found minimum element with the first element
        arr1[i], arr1[min_idx] = arr1[min_idx], arr1[i]
        
arr1=[]
Num=int(input("Enter the number of students"))
for i in range(Num):
    per=float(input("Enter the percentage marks"))
    arr1.append(per)
    
selectionsort(arr1)
#driver code to test above
print("Sorted array is:")
for i in range(len(arr1)):
    print("%f" %arr1[i]),




















