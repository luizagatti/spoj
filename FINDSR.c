#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char S[100000];
	int t, z, i, j;

	for(;;){
		scanf("%s" , S);
		int comprimento = strlen(S), substring = 1;

		if(comprimento==1 && S[0]=='*')
			break;

		for(;;){
			if(comprimento%substring != 0 ){
				substring++;
				continue;
			}

			for(i=substring; i<comprimento;){
				for(j=0 ; j<substring; j++){
					if(S[i] != S[j])
						break;
					i++;
				}

				if(j == substring){}
				
				else{
					substring = i+1;
					break;
				}
			}

			if(i == comprimento){
				printf("%d\n" , comprimento/substring);
				break;
			}
		}
	}
}
