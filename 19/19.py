

def fact(n):
	f=1
	i=1
	for i in range(1,n+1):
		#print (i,"\t")
		f*=i
	return f

print(fact(100),"\n")

'''
string=str(fact(100))
s=0

for i in range(len(string)):
	s+=int(string[i])
'''
s=0
'''x=fact(100)
while(x!=0):
	s+=x%10
	x//=10
	'''

for n in str(fact(100)):
	s+=int(n)

print(s)