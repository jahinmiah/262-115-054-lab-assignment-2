//
//  main.c
//  problem 8
//
//
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, remainder, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    while(N != 0){
        remainder= N%10;
        sum=sum+ remainder;
        N=N/10;
    }
    printf("Sum of digit = %d\n",sum);
    
    return 0;
}
