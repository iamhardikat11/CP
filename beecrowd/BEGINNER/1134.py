# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = 0
g = 0
d = 0
n = int(input())
while n!=4:
    if n==1:
        a+=1
        n = int(input())
    elif n==2:
        g+=1
        n = int(input())
    elif n==3:
        d+=1
        n = int(input())
    else:
        if n==4:
            break
        else:
            n = int(input())
            
print("MUITO OBRIGADO")
print("Alcool:", end = ' ')
print(a)
print("Gasolina:",end = ' ')
print(g)
print("Diesel:",end = ' ')
print(d)
