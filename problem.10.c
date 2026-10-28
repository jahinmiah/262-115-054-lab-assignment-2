//
//  main.c
//  problem 10
//
//  }
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, isPrime= 1;
    
    printf("Enter a number: ");
    scanf("%d",&N);
    
    if(N<=1) {
        isPrime = 0;
    }
    else{
        for(int i =2; i * i <=N; i++){
            if ( N%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d is a prime number.\n",N);
        }
        else{
            printf("%d is not a Prime number.\n",N);
        }
        
        return 0;
    }
}

