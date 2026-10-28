//
//  main.c
//  problem 3
//
//  //

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    for (int i =1; i<=N; i++){
        sum = sum + i;
    }
    
    printf("sum = %d\n",sum);
    
    return 0;
}
