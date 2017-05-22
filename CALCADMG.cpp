#include <stdio.h>
#include <stdlib.h>

int calculaMDC(int X, int Y){
	if(Y == 0)
		return X;

	return calculaMDC(Y, X % Y);
}

int main(){
	int T, A, B, C, D, i;
	scanf("%d", &T);

	for(i=0; i<T; i++){
		scanf("%d %d %d %d", &A, &B, &C, &D);
		printf("%d\n", calculaMDC(abs(C-A), abs(D-B)) +1);
	}
}
