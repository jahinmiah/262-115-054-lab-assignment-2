//
//  main.c
//  problem 6
//
//
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, count=0;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    if(N==0){
        count = 1;
    }
    else {
        while (N != 0) {
            N=N/10;
            count++;
        }
    }
    printf(" Total digits =%d\n", count);
    
    return 0;
}
