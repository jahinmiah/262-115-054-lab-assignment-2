//
//  main.c
//  problem 4
//
////

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, sum = 0;
    
    printf("enter a number:  ");
    scanf("%d", &N);
    for (int i = 2; i<=N; i +=2){
        sum = sum +i;
    }
    printf(" sum of even numbers =%d\n", sum);
    
    
    return 0;
    
}
