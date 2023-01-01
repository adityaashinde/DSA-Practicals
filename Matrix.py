#addition of matrix
row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of column:"))

#initialise matrix
matrixa = []
matrixb = []
resultmatrix=[]
print("Enter the entries rowwise:")

#for user input
for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrixa.append(a)
print(matrixa)

#for printing 1st matrix 
for i in range(row):
    for j in range(col):
        print(matrixa[i][j], end = "")
    print()
    
for i in range(row):
    a=[]
    for j in range(col):
        a.append(int(input()))
    matrixb.append(a)
    
#for printing 2nd matrix
for i in range(row):
    for j in range(col):
        print(matrixb[i][j], end = "")
    print()
    
#for matrix addition
for i in range(row):
    a = []
    for j in range(col):
        
        a.append(matrixa[i][j] + matrixb[i][j])
    resultmatrix.append(a)
    
print("Addition is:")
#for printing the result matrix
for i in range(row):
    for j in range(col):
        print(resultmatrix[i][j], end = "")
    print()














#substraction of matrix
row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of column:"))

#initialise matrix
matrixa = []
matrixb = []
resultmatrix=[]
print("Enter the entries rowwise:")

#for user input
for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrixa.append(a)
print(matrixa)

#for printing 1st matrix 
for i in range(row):
    for j in range(col):
        print(matrixa[i][j], end = "")
    print()
    
for i in range(row):
    a=[]
    for j in range(col):
        a.append(int(input()))
    matrixb.append(a)
    
#for printing 2nd matrix
for i in range(row):
    for j in range(col):
        print(matrixb[i][j], end = "")
    print()
    
#for matrix asubstraction
for i in range(row):
    a = []
    for j in range(col):
        
        a.append(matrixa[i][j] - matrixb[i][j])
    resultmatrix.append(a)
    
print("substraction is:")
#for printing the result matrix
for i in range(row):
    for j in range(col):
        print(resultmatrix[i][j], end = "")
    print()





















#multiplication of two matrix
row1 = int(input("Enter the number of rows:"))
col1 = int(input("Enter the number of columns:"))
c=0
#intialize matrix
matrixa = []
matrixb = []
resultmatrix = []
print("Enter the entries rowwise")

#for user input
for i in range(row1):
    a = []
    for j in range(col1):
        a.append(int(input()))
    matrixa.append(a)
print(matrixa)

print("matrix is:")
#for printing 1st matrix 
for i in range(row1):
    for j in range(col1):
        print(matrixa[i][j], end = "")
    print()
    
row2 = int(input("Enter the number of rows:"))
col2 = int(input("Enter the number of columns:"))

for i in range(row2):
    a = []
    for j in range(col2):
        a.append(int(input()))
    matrixb.append(a)

print("matrix is:")
#for printing 2nd matrix 
for i in range(row2):
    for j in range(col2):
        print(matrixb[i][j], end = "")
    print()  
    
#for matrix addition
for i in range(row1):
    a=[]
    for j in range(col2):
        
        for k in range(row2):
            c=c+ matrixa[i][k] * matrixb[k][j]
            
        a.append(c)
        c=0
    resultmatrix.append(a)
    
print("result matrix is:")
#for printing the result matrix
for i in range(row1):
    for j in range(col2):
        print(resultmatrix[i][j], end = "")
    print()











#transpose of a matrix 
row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of columns:"))
a=[]
#initialize matrix
matrixa=[]
matrixb=[]
result=[]

print("Enter the entries rowwise:")

#for user input 
for i in range(row):
    a=[]
    for j in range(col):
        a.append(int(input()))
    matrixa.append(a)
    
#for printing matrix
for i in range(row):
    for j in range(col):
        print(matrixa[i][j], end = " ")
    print()
    
#result matrix

for i in range(col):
    a=[]
    for j in range(row):
        a.append(0)
    result.append(a)
    
for i in range(col):
    for j in range(row):
        print(result[i][j], end = " ")
    print()
    
#transpose of matrix
for i in range(row):
    for j in range(col):
        result[j][i]=matrixa[i][j]
        
#print result
for i in range(col):
    for j in range(row):
        print(result[i][j], end = " ")
    print()













