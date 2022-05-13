#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    long a = 0, b = 0, r;
    
    if( argc == 3 ){
        a = strtol(argv[1], 0, 10);
        b = strtol(argv[2], 0, 10);
    }

    if( a != 0 && b!= 0 ){                           
        while( r != 0 ){                    //GCD
            if( (r = a % b) ){
                a = b;
                b = r;
            } 
        }
        printf("GCD(%s, %s) = %ld\n", argv[1], argv[2], b);
    } else {
        printf("Invalid Input - Input should be two non-zero integers!\n");
    }
}
        //linear combination coming soon...
        //more than two inputs coming soon...