groupA=['Aman','Raj','Atharva', 'Ruchi']
groupB=['Aman','Saloni','Aditya','Ayush','Atharva']
groupC=['Raj','Ruchi','Vedant','Atharva']
#List of students who play both cricket and badminton
lena=len(groupA)
lenb=len(groupB)
print("list of student who play both cricket and badminton")
resultlistCB=[]
for i in range(lenb):
    for var in range(lena):
        if(groupB[i]==groupA[var]):
            resultlistCB.append(groupB[i]);
            break;
print(resultlistCB)






#List of students who play both cricket and badminton
print("list of students who play both cricket and batminton")
resultlistCB=[];
if lena<lenb:
    for i in range(lena):
        for var in range(lenb):
            if(groupA[i]==groupB[var]):
                resultlistCB.append(groupA[i]);
                break;
else:
    for i in range(lenb):
        for var in range(lena):
            if(groupB[i]==groupA[var]):
                resultlistCB.append(groupB[i]);
                break;
                
print(resultlistCB)





#list of students who play either cricket or badminton but not both
print("list of students who play either cricket or badminton but not both")
resultlistCBN=[];
flag=0;
if lena<lenb:
    for i in range(lenb):
        for var in range(lena):
            if(groupB[i]==groupA[var]):
                flag=1;
        if(flag==0):
            resultlistCBN.append(groupB[i]);
        flag=0;
        
        
else:
     for i in range(lena):
        for var in range(lenb):
            if(groupA[i]==groupB[var]):
                flag=1;
        if(flag==0):
            resultlistCBN.append(groupA[i]);
        flag=0;
        
print(resultlistCBN)
    





#list of students who play either cricket or badminton but not both
print("list of students who play either cricket or badminton but not both")
resultlistCBN=[];
flag=0;

for i in range(lenb):
    for var in range(lena):
        if(groupB[i]==groupA[var]):
            flag=1;
    if(flag==0):
        resultlistCBN.append(groupB[i]);
    flag=0;
        
        
else:
     for i in range(lena):
        for var in range(lenb):
            if(groupA[i]==groupB[var]):
                flag=1;
        if(flag==0):
            resultlistCBN.append(groupA[i]);
        flag=0;
        
print(resultlistCBN)






#Number of students who play neither cricket nor badminton 
print("Number of students who play neither cricket nor badminton")
resultlistCBNF=[];
lenc=len(groupC)
for i in range(lenc):
    for var in range(lena):
        if(groupC[i]==groupA[var]):
            flag=1;
            break;
            
    for var1 in range(lenb):
        if(groupC[i]==groupB[var]):
            flag=1;
            break;
    if(flag==0):
        resultlistCBNF.append(groupC[i]);
    flag=0;
print(resultlistCBNF)





listlen=int(input("Enter number of student who play cricket"))
groupckt=[]
for i in range(listlen):
    name=input("Enter student name")
    groupckt.append(name)
print(groupckt)


















