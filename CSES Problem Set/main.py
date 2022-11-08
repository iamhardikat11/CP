import math
n = int(input())
MOD = 1e9+7
print((round((math.pow((1 + math.sqrt(5)) / 2, n)%MOD - math.pow((1 - math.sqrt(5)) / 2, n)%MOD)%MOD / math.sqrt(5))%MOD));
