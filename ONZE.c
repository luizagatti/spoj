#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	  
int main(){
	char N[1001], vetorAux[2];
	int i, aux, tamanhoN;
	vetorAux[1] ='\0';

	for(;;){
		scanf("%s", N);

		if(strcmp(N,"0") == 0)
			break;

		tamanhoN = strlen(N);
		aux = 0;
		 
		for(i=0; i<tamanhoN; i++){
			vetorAux[0] = N[i];
			aux = (-1)*aux + atoi(vetorAux);
		}
		 
		if(aux%11 == 0) 
			printf("%s is a multiple of 11.\n", N);
		else 
			printf("%s is not a multiple of 11.\n", N);
	}
}
