#!/usr/bin/python 

def expoente(e):
	result = 1
	for i in range(1,e+1):
		result *= e
	return result
	
vetor = []
resultado = 0;
n = input('Digite um valor para N: ')
if(n%2==0):
	n = n/2
else:
	n = (n+1)/2

for i in range (1,n+1):
	aux1 = float(expoente((2*i)-1))
	aux2 = float(expoente(2*i))
	vetor.append(float(aux1/aux2))
	if(i-1!=0):
		if((i-1)%2==0):
			aux1 = vetor[i-2]
			aux2 = vetor[i-1]
			vetor[i-2] = aux1*aux2
			vetor[i-1] = 0

for i in range(1,n+1):
	resultado += vetor[i-1]

print resultado
