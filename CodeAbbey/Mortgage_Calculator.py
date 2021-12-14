import math
def mortgage_calculator():
  data = input().split()
  p = int(data[0])
  i = (int(data[1])/100.0)/12.0
  n = int(data[2])
  monthly_installment = p*(i*(1+i)**n)/((1+i)**n-1)
  print(math.round(monthly_installment))
mortgage_calculator()
