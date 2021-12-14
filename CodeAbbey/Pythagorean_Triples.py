def calculate(s):
  for a in range(2, s):
    if ((s * s - 2 * s * a) % (2 * s - 2 * a)) == 0:
      b = (s * s - 2 * s * a) // (2 * s - 2 * a)
      c = (s - a - b)
      return (a,b,c)
  return 0

def main():
  n = int(input())
  for i in range(0, n):
    s = int(input())
    (a,b,c) = calculate(s)
    print(c*c, end=' ')

if __name__ == '__main__':
    main()
