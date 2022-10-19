n,o=[int(input()),1]
s=input()
p=""
flag=False
for i in range(0,n):
    if s[i]=='1' or flag:
        flag=True
        p+=s[i]
if len(p)==0:
    print(0)
    exit(0)
s=p
n=len(s)
p=""
a = 0
b = 0
for i in range(2,n+1):
    x=n-o+1
    y=n-i+1
    for j in range(min(x,y),n+1):
        if s[j-1]=='0':
            if j>=x:
                a=s[j-x]=='1'
            else:
                a=0
            if j>=y:
                b=s[j-y]=='1'
            else:
                b=0
            if a<b:
                o=i
            if a!=b:
                break

for i in range(1,n+1):
    p+=str(((i>=n-o+1 and s[i-n+o-1]=='1')|(int(s[i-1])-48))+48)
print(p)