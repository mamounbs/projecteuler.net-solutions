def fact(n):
	f=1
	for i in range(2,n):
		f*=i
	return f


def nieme(n):

	f=fact(9)
	pos=0
	ch=""
	x=10

	while(1):
		ch=ch+"0"
		x-=1
		n=0
		while(pos+f<1000000):
			pos+=f
			n+=1
		ch[len(ch)-1]=char(n)
		if(pos==1000000):
			return ch
		f/=10

	