

def fib(n):
    u0=1
    u1=1
    u=0
    i=2
    while(len(str(u))<n):
        u=u0+u1
        u0=u1
        u1=u
        i+=1
    return i

print(fib(1000))