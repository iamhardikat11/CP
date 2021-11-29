# cook your dish here
tc = int(input())
for _ in range(tc):
     M, H = map(int,input().split())
     bmi = M//(H*H)
     if(bmi<=18):
      print("1")
     elif(bmi<=24 and bmi>=19):
      print("2")
     elif(bmi<=29 and bmi>=25):
      print("3")
     else:
      print("4")
