def isPrime(n):
    flag = True
    for i in range(2,int(n**.5+1)):
        if(n%i==0):
            flag = False
    return flag

def sumPrime(n):
    sum=2
    for i in range(3,n,2):
        if(isPrime(i)):
            sum+=i
    return sum
print(sumPrime(2000000))