#include <stdio.h>
#include <stdlib.h>
void Ingresar(float bondi[20][9]){
	int i,j;
	for(i=0;i<20;i++){
		printf("Chofer N°%d\n",i+1);
		for(j=0;j<9;j++){
			if(j==0){
				bondi[i][j]=i+1;
			}else{
				if(j==8){
					bondi[i][j]=0;
				}
				else{
					printf("Ingrese Km recorridos en el dia %d: ",j);
					scanf("%f",&bondi[i][j]);
				}
			}
		}
	}
}
void Total(float bondi[20][9]){
	int i,j;
	float acu=0;
	for(i=0;i<20;i++){
		for(j=1;j<9;j++){
			if(j!=8){
				acu+=bondi[i][j];
			}else{
				bondi[i][8]=acu;
			}
		}
		acu=0;
	}
}
int main() {
	int i,j;
	float bondi[20][9]={0};
	Ingresar(bondi);
	Total(bondi);
	printf("N°\tdia1\tdia2\tdia3\tdia4\tdia5\tdia6\tdia7\tdiaTotal\n");
	for(i=0;i<20;i++){
		for(j=0;j<9;j++){
			printf("%.2f\t",bondi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
