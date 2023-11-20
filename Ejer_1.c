#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Cero(int matriz[4][4], int cont){
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(matriz[i][j]==0){
				cont++;
			}
		}
	}
	return cont;
}
void Mostrar(int matriz[4][4]){
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int matriz[4][4],cont=0,i,j;
	srand(time(NULL));
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matriz[i][j]=rand()%10;
		}
	}
	cont=Cero(matriz,cont);
	Mostrar(matriz);
	printf("Hay %d 0 en la matriz",cont);
	return 0;
}
