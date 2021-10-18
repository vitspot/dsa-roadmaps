#a="1234"
#print(a[-2:])
#Linear Probing in Hashing
#Hash Function takes numbers and saves key as last 2 digits of the number 
n=int(input("Enter size of hashing table: "))
def adder(d,h,i,n,d1):
    if i>=n:
        i=0
    
    if len(h[i])==0:
        h[i][0]=(d)
        h[i][1]=(d1)
    else:
        adder(d,h,(i+1),n,d1)
h=[]
for i in range (n):
    h.append([n+1,0])
c=0
print("Hashing Starts: ")
print("Enter 2 to add elements to the Hash Table")
print("Enter 1 to stop")
print("Note: No collision handling in this case")
while c!=1:
    print("Enter Choice: ")
    c=int(input())
    if c==2:
        print("Enter Data key")
        d=input()
        print("Enter Data")
        d1=input()
        i=int(d[-2:])
        adder(d,h,i,n,d1)
    print()
    count=0
    for i in range(n):
        if len(h[i])>0:
            count+=1
    if count==n:
        print("Hash Table Full")
        break
print("Hashing table is:",h)
s=input("Enter key to be searched: ")
i1=int(s[-2:])
def search(st,n,key,h):
    bool=False
    for i in range(st,n):
        if len(h[i])==0:
            continue
        if h[i][0]==key:
            print("Required data is",h[i][1],"with key",h[i][0])
            bool=True
            break
    start=0
    end=st+1
    for i in range(start,end):
        if h[i][0]==key:
            print("Required data is",h[i][1],"with key",h[i][0])
            bool=True
            break
    if bool==False:
        print("Data not found")
search(i1,n,s,h)    
