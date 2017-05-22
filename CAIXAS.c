#include <stdio.h>
   int main(){
      int N, P, Q, quantidade[P], i, j, linhaC, pilhaC, aux, esq, dir;
      while(scanf("%d %d", &N, &P)){
         if(!N)
            return 0;
         for(i=0; i<P; i++){
            scanf("%d", &quantidade[i]);
            for(j=0; j<quantidade[i]; j++){
               scanf("%d", &Q);
               if(Q == 1){
                  linhaC = j + 1;
                  pilhaC = i;
               }
            }
         }
         aux = quantidade[pilhaC] - linhaC;
         esq = dir = aux;
         for(i=pilhaC-1; i>=0; i--){
            if(quantidade[i] >= linhaC)
               esq += quantidade[i] - linhaC + 1;
            else
               break;
         }
         for(i=pilhaC+1; i<P; i++){
            if(quantidade[i] >= linhaC)
               dir += quantidade[i] - linhaC + 1;
            else
               break;
         }
         printf("%d\n",(esq > dir) ? dir:esq);
      }
}
