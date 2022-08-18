import math
import numpy as np
def naive_fib(n):
    if(n<2):
        return n
    else:
        return naive_fib(n-1)+naive_fib(n-2)

def fib_botup(n):
    
    if(n<2):
        return n
    botup=[0]*n
    botup[0]=1
    botup[1]=1
    
    for i in range(n-2):
        
        botup[i+2]=botup[i+1]+botup[i]
        
    return botup[n-1]
    
    
def closed_fib(n):
    alpha=(1+math.sqrt(5))/2
    
    fb=(alpha ** n)/math.sqrt(5)
    return math.ceil(fb)
def fib_mat(n):
    a=[[1,1],[1,0]]
    c=[[1,1],[1,0]]
    if(n<2):
        return n
    else:
        for i in range(n-1):
            
            c=np.matmul(c,a)
        return np.array(c) [0,1]
print(fib_botup(7))
print(closed_fib(7))
print(fib_mat(7))
