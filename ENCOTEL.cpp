#include <stdio.h>
#include <ctype.h>
 
int main(){
	char C;
 
	while(scanf("%c", &C) != EOF){
		if (isalpha(C))
			printf("%d", (C-'A')/3 - ((C=='S') || (C=='V') || (C>='Y')) + 2);
		else
			putc(C, stdout);
	}
} 
