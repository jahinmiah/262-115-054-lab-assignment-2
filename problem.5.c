//
//  main.c
//  problem 5
//
//
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    
    printf("\nMultiplication table of %d:\n",N);
    
    for( int i=1; i<=10; i++){
        printf("%d x %d = %d\n", N,i,N * i);
    }
    return 0;
}
