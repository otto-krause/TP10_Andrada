#include <stdio.h>
#include <stdlib.h>
int Acumulador(int ma1[12][12], int ma2[12][12],int cont) {
	for(int i=0;i<12;i++){
		if(ma1[i][i]==ma2[i][i]){
			cont++;
		}
	}
	return cont;
}
void Identificar(int cont){
	if(cont==12){
		printf("Tienen la misma diagonal principal");
	}else{
		printf("Tienen una diagonal principal diferente");
	}
}
int main() {
	int ma1[12][12],ma2[12][12],i,j,cont=0;
	printf("Matriz 1:\n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&ma1[i][j]);
		}
	}
	printf("Matriz 2:\n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&ma2[i][j]);
		}
	}
	cont=Acumulador(ma1,ma2,cont);
	Identificar(cont);
	return 0;
}
