#include <stdio.h>
#include <stdlib.h>

long euclidAlgo(char* str_a, char* str_b){
    long a = strtol(str_a, 0, 10);
    long b = strtol(str_b, 0, 10);
    long result;

    if( a != 0 && b!= 0 ){                           
        while( result != 0 ){
            if( (result = a % b) ){
                a = b;
                b = result;
            } 
        }
        return b;
    } else {
        printf("Invalid Input - Input should be two non-zero integers!\n");
        return -1;
    }
}


int main(int argc, char **argv){
    char str_a[11], str_b[11];             

    printf("Enter first Number: ");
    scanf("%s", str_a);
    
    printf("Enter second Number: ");
    scanf("%s", str_b);

    long result = euclidAlgo(str_a, str_b);
    printf("GCD(%s, %s) = %ld\n", str_a, str_b, result);
}