#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int vetor[] = {1, 50, 6, 35, 3, 67, 25, 2, 46, 79, 11};
    int i = 0;
    
    qsort(vetor, sizeof(vetor)/sizeof(int), sizeof(int), cmpfunc);
    
    while(i < ( sizeof(vetor)/sizeof(int) ) ){ printf("%d ", vetor[i]); i++;}
    printf("\n");

    return 0;
}
