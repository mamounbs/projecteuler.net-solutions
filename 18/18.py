l=[]
def max(liste,i,j):
	if(i==len(liste)-1):
		return int(liste[i][j])
	 #l[i+1]=liste[i][j]
	sg=int(liste[i][j])+max(liste,i+1,j)
	sd=int(liste[i][j])+max(liste,i+1,j+1)
	if(sg>sd):
		l[i+1]=liste[i+1][j]
		return sg
	else:
		l[i+1]=liste[i+1][j+1]
		return sd


def listmax(liste):
	l=[]
	for i in range(len(liste)):
		l.append(0)
	return l
data=""
with open("test.txt","r") as file:
	data=file.read()

liste=data.split("\n") # splits file content into a list, every line is an element of the list


'''for elementg in liste:
	liste[liste.index(elementg)]=elementg.split(" ")'''
	
for i in range(len(liste)):
	liste[i]=liste[i].split(" ")
l=listmax(liste)
print(max(liste,0,0))
print(l)
