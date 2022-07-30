from contextlib import nullcontext
from math import inf
from typing import *

from zmq import NULL

def minDistance(a: List[[int, int]]) -> int:
    # write your code here
    minDist=inf
    for p1 in a:
        dist = 0
        f = 0
        for p2 in a:
            dist+=abs(p1[0]-p2[0])+abs(p2[1]-p1[1])
            if dist>=minDist:
                f=1
                break
        if(f):
             continue
        minDist = min(dist,minDist)
    return minDist

    pass