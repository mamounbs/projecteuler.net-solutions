from operator import add

NbP=0
listePizza=[]


def ExtractList(fileName):
	with open(fileName,"r") as file:
		data=file.split("\n")
		data[0]=data[0].split(" ")
		global NbP
		NbP=int(data[0][0])
		del data[0]
		global listePizza
		listePizza=data


l=[5,5,5]
print(sum(l))