#include <stdio.h>
#include <stdlib.h>

long primeFactorization(char* str_num){
    long num = strtol(str_num, 0, 10); 

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