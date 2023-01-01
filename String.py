#To display word with th longest length
str1=input("Enter the string")
list1=str1.split()
m=0
word=0
print(list1)
for i in range (len(list1)):
    len(list1[i])
    if m<len(list1[i]):
        m=len(list1[i])
        word=i
print("The word with longest length ",list1[word])



# To determine the frequency of ocurrance of particular character in the string 
str1=input("Enter the string ")
char=input("Enter character ")

counter=0
for i in range(len(str1)):
    

    if char==str1[i]:
        counter+=1
print("Charactr %s is present %d times in string %s",char,counter,str1)





#To count the occurences of each word in a given string
str1=input("Enter input")
list1= str1.split()
list2=set(list1)         #Delete duplicates
list3=list(list2)        #convert set again into List
print(list1)
print(list3)
list4=[]
list5=[]
counter=0
for i in range(len(list3)):
    counter=0
    for j in range(len(list1)):
        if list3[i]==list1[j]:
            counter+=1
    list4=list3[i],counter
    list5.append(list4)
    

print("\n",list5) 







# To check whether given string is palindrome or not 
str2=input("Enter string")
lenstr2=len(str2)
j=lenstr2-1
print(lenstr2)
flag=0
for i in range (int (lenstr2/2+1)):
    if (str2[i]==str2[j]):
        flag=1
    else:
        break
    j=-1
    
    
if(flag==1):
    print("\n It is palindrome")
else:
    print("\n It is not palindrome")
        





#To display index of frist appearance of the substring
str1=input("Enter string")
sub1=input("Enter substring ")
sublen=len(sub1)
index1=0
j=0

for i in range(len(str1)):
        if sub1[j]==str1[i]:
            flag=1
            print(sub1[j],i,j)
            j=j+1
            
            if j==sublen:
                index1=i-(sublen-1)
                break;
        else:
            flag=0
            j=0
            
print("substring index :", index1) 



 