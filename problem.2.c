//
//  main.c
//  problem 2
//
//  //

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
    
    printf("enter a number: ");
    scanf("%d", &N);
    
    for (int i =N; i>=1; i--){
        printf("%d",i);
    }
    
    return 0;
    
}
