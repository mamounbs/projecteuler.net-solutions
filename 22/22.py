def export(namefile):
	with open(namefile,"r") as file:
		 data=file.read().split('","')
		 data[0]=data[0][1:]
		 #data[len(data)-1]=data[len(data)-1][:len(data[len(data)-1])-1]
		 data[len(data)-1]=data[len(data)-1][:-1]
	data.sort()
	return data
		

def Score(name,pos):
	s=0
	for i in name:
		s+=ord(i)-64
	return pos*s
	

def ScoreTotale(listname):
	s=0
	for i in range(len(listname)):
		s+=Score(listname[i],i+1)
	return s

def affiche(filename):
	print(ScoreTotale(export(filename)))


affiche('test.txt')