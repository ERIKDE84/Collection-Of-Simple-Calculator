#include <stdio.h>
#include <stdlib.h>

long isPrime(char* str_p){
    long i, p;
    
    p = strtol(str_p, 0, 10); 

    for(i = 2; i < p/2; i++){
        if( !(p % i) ){
            return i;
        }
    }
    return 0;
}


int main(int argc, char **argv){
    char str_p[11];           

    printf("Enter a Number: ");
    scanf("%s", str_p);

    long result = isPrime(str_p);

    if(result){
        printf("%s is NOT a prime, %ld is a divisor\n", str_p, result);
    } else {
        printf("%s is a prime\n", str_p);
    }
}