#include <stdio.h>
#include <stdlib.h>
void Cambio(int matriz[12][19]) {
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<19;j++){
			if(matriz[i][j]<0){
				matriz[i][j]=0;
			}
		}
	}
}

void Mostrar(int matriz[12][19]) {
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<19;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matriz[12][19],i,j;
	for(i=0;i<12;i++){
		for(j=0;j<19;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Matriz Antes:\n");
	Mostrar(matriz);
	Cambio(matriz);
	printf("Matriz Despues:\n");
	Mostrar(matriz);
	return 0;
}
