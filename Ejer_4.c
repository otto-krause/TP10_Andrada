#include <stdio.h>
#include <stdlib.h>
void Cambio(int matriz[2][7],int i){
	int j;
	for(j=0;j<7;j++){
		if(j==0){
			matriz[1][j]=matriz[0][i-1];
		}else{
			matriz[1][j]=matriz[0][j-1];
		}
	}
}
void Mostrar(int matriz[2][7]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<7;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int matriz[2][7]={0},i;
	for(i=0;i<7;i++){
		printf("Ingrese el elemento %d: ",i+1);
		scanf("%d",&matriz[0][i]);
	}
	Cambio(matriz,i);
	Mostrar(matriz);
	return 0;
}
