#from decimal import Decimal


def extract_cycle(n):
    ch=str(n)
    i=ch.index(".")+1
    
    ch=ch[i:]
    i=0
    str1=""
    str2="."
    while(str1 != str2 and len(str1)<=len(ch)//2 ):
        str1=ch[0:i+1]
        print("str1: ", str1)
        str2=ch[i+1:i+len(str1)+1]
        print("str2: ", str2)
        i+=1
        print("i: ", i,"\n")
    
    if str1==str2:
        return str1
    else:
        return ""

print(extract_cycle(1/7))

'''max=0
res=0
for i in range(2, 1001):
    n=1.0/(i)
    print("i: ", i)
    print("n: ", n)
    cycle=extract_cycle(n)
    if(len(cycle)>max):
        res=i
        max=len(cycle)

print(res)'''


