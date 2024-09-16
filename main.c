#include <stdio.h>

int main(){
	int i;
	int idades[]={1, 2, 3, 4, 5};
	int idades_novas[5];
	
	printf("Vetor 1: ");
	for(i = 0; i <5; i++){
		printf("%d ",idades[i]);
		idades_novas[i]= idades[i]+5;
	}
	printf("\nVetor 2: ");
	for(i = 0; i <5; i++){
		printf("%d ",idades_novas[i]);
	}
	
	
	return 0;
}