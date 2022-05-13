#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int i;
    double sum = 0.0, h;

    for(i = 1; i < argc; i++){
        h = strtod(argv[i], 0);
        if( h != 0.0 ){
            sum += (1/h);
        } else {
            printf("Argument %d: %s ist leider kein gültiger Wert!\n", i+1, argv[i]);
        }
    }
    sum = 1/sum;
    printf("%.3f Ohm\n", sum);
}