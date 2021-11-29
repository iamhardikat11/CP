def Ackermann(m,n):
  if type(m) is not int or type(n) is not int:
    return None
  if m < 0 or n < 0:
    return None
  if m == 0:
    return n + 1
  elif n == 0:
    return Ackermann(m-1, 1)
  else:
    return Ackermann(m-1, Ackermann(m, n-1))
