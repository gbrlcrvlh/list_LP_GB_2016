#include <iostream>
#include <cstdlib>
using namespace std;

int Expoente(int e){
	int i;
	int result=1;
	for(i=1;i<=e;i++){
		result*=e;
	}
	return result;
}

int main(){
	int n,i,nvezes;
	double *v,aux1,aux2,resultado;
	cin >> n;
	v = (double*)malloc(n*sizeof(double));
	if(n%2==0){
		n = n/2;
	}else{
		n = (n+1)/2;
	}
	for(i=1;i<=n;i++){
		aux1 = Expoente((2*i)-1);
		aux2 = Expoente(2*i);
		v[i-1] = aux1/aux2;
		
		if(i-1!=0){	
			if((i-1)%2==0){
				aux1 = v[i-2];
				aux2 = v[i-1];
				v[i-2] = aux1*aux2;
				v[i-1] = 0;
			}
		}
	}
	for(i=1;i<=n;i++){
		resultado += v[i-1];
	}
	cout <<"\nResultado: "<<resultado<<"\n";
	return 0;
}
