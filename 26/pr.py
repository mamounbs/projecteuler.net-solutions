
def extract_cycle(n):
    ch=str(n)
    '''
    i=ch.index('.')+1
    ch=ch[i:]'''
    i=0
    str1=""
    str2="2"
    while(str1 is not str2):
        str1=ch[0:i+1]
        print("str1: ", str1)
        str2=ch[i+1:i+len(str1)+1]
        print("str2: ", str2)
        i+=1
        print("i: ", i,"\n")
    
    return str1
print(extract_cycle(14285714285714285714285714285714‬))
