/*
Aluna:        Luiza de Almeida Gatti
Matricula:    2013063142
Explicação:
Inicialmente eu leio o valor de N, que é a quantidade
de caracteres que terei na minha cadeia (linha), em seguida
leio a linha.
Faço os cálculos para descobrir que o menor número de
partes em que a cadeia deve ser dividida de forma
que todas as partes dela sejam palíndromos.
Depois de calculado, eu imprimo a ocorrência do teste onde
estou, seguido pelo valor que obtive com os cálculos.

Solução:
*/

#include <cstdio>
#define MAX 5000

int main(){
	bool matrizAux[MAX][MAX];
	char linha[MAX+2];
	int N, t, i, j, k, minimo, calculoPalindromo[MAX];

	for(t=1; scanf("%d\n",&N) &&N; t++){
		gets(linha);

		for(i=0; i<N; i++) 
			matrizAux[i][i] = 1;

		for(i=0; i<(N-1); i++) 
			matrizAux[i][i+1] = linha[i]==linha[i+1];

		for(i=2; i<N; i++)
			for(j=0,k=j+i; k<N; j++,k++)
				matrizAux[j][k] = matrizAux[j+1][k-1] & linha[j]==linha[k];

		for(i=0; i<N; i++){
			if(matrizAux[0][i]){ 
				calculoPalindromo[i] = 1; 
				continue; 
			}

			minimo = 5001;
			for(k=0; k<i; k++)
				calculoPalindromo[i] = (minimo = ((matrizAux[k+1][i] && calculoPalindromo[k] < minimo) ? calculoPalindromo[k] : minimo)) +1;
		}
		printf("Teste %d\n%d\n\n", t, calculoPalindromo[N-1]);
	}
}