//
//  main.c
//  problem 9
//
//
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
    long long factorial=1;
    
    printf("Enter a number: ");
    scanf("%d",&N);
    
    if(N<0){
        printf("Factorial is not defined for negative number.\n");
    }
    else{
        for(int i=1; i<=N; i++){
            factorial = factorial * i;
        }
        printf("Factorial of %d = %11d\n", N, factorial);
    }
    return 0;
}
