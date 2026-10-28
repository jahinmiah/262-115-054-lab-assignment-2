//
//  main.c
//  problem 7
//
//  Created by Bakhtiyar Uddin on 14/10/26.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, remainder, reverse=0;
    
    printf(" Enter number= ");
    scanf("%d", &N);
    while(N != 0) {
        remainder =N % 10;
        reverse = reverse * 10 + remainder;
        N=N/10;
    }
    
    printf("Reversed number = %d\n", reverse);
    
    return 0;
}
