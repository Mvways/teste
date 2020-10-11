#include <stdio.h>
int hanoi(int a){
	if(a>1){
		return (2*hanoi(a-1)+1);
	}
	else{
		return 1;
		//caso base C1=1
	}
}
int main(){
	int aux=0,resul=0;
	printf("Quantos discos vai ter seu Hanoi: ");
	scanf("%d", &aux);
	resul=hanoi(aux);
	printf("A quantidade minima de movimentos para resolver a Torre de Hanoi com %d discos e: %d",aux,resul);
	return 0;
}