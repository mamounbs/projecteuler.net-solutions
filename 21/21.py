

def d(n):
	i=1
	s=0
	while(i<=n//2):
		if(n%i==0):
			s+=i
		i=i+1
	return s


s3=0
for i in range(2,10000):
	s1=d(i)
	s2=d(s1)
	if(i==s2 and s1!=s2 and s1<10000):
		print(i,"\t",s1,"\t",s2)
		s3+=s1

#s1=d(220)
#s2=d(s1)
print(s3)