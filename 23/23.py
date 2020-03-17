def som(n):
	s=0
	for i in range(1,n//2+1):
		if(n%i==0):
			s+=i
	return s

def isab(n):
	return n<som(n)

def somNab():
	s=0
	for i in range(1,28123+1):
		test=False
		j=i//2
		
		while(j>=1 and test==False):
			test=isab(j) and isab(i-j)
			j-=1
		if(test==False):
			print(i)
			s+=i 
	return s


print(somNab())
