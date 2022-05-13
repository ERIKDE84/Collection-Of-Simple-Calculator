#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
    long i, p;
    double time;

    if( argc == 2 ){
        p = strtol(argv[1], 0, 10);
        for(i = 2; i < p; i++){
            if( !(p % i) ){
                printf("Not a prime! %ld is a divisor of %ld\n", i, p);
                return 0;
            }
        }
        printf("%ld is prime!\n", p);
        return 0;

    } else {
        printf("Invalid Input - Input should be one integer!\n");
    }
}





    
    