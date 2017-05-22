#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

int *sobrepor;
char *padrao;
vector< int > calculaKMP(int n){
	vector< int > vetor;
	int i=0, j=0;
	char c;
	for(;;){
		c = getchar();
		if(c == '\n') break;
		for(;;){
			if(c == padrao[j]){
				j++;
				if(j == n){
					vetor.push_back(i-n+1);
					j = sobrepor[j];
				}
				break;
			}
			else if(j == 0) 
				break;
			else 
				j = sobrepor[j];
		}
		i++;
	}
	return vetor;
}

void calculaSobreposicao(){
	int i;
	sobrepor[0] = -1;
	for(i=0; padrao[i]; i++){
		sobrepor[i+1] = sobrepor[i]+1;
		while(sobrepor[i+1]>0 && padrao[i]!=padrao[sobrepor[i+1]-1])
			sobrepor[i+1] = sobrepor[sobrepor[i+1]-1]+1;
	}
}

int main(){
	int n, i, tamanhoVetor;
	vector< int > vetor;

	while(scanf("%d",&n) == 1){
		getchar();
		padrao = new char[n+10];
		sobrepor = new int[n+10];

		gets(padrao);
		calculaSobreposicao();
		vetor = calculaKMP(n);
		tamanhoVetor = vetor.size();

		for(i=0; i < tamanhoVetor; i++)
			printf("%d\n",vetor[i]);

		if(!tamanhoVetor) 
			printf("\n");
		
		delete[] padrao;
		delete[] sobrepor;
	}
}
