#include <stdio.h>
#include <stdlib.h>

double ResSeries(double arr[], int size){
    double sum;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

double ResParallel(double arr[], int size){
    double sum;
    
    for(int i = 0; i < size; i++){
        sum += (1/arr[i]);
    }
    sum = 1/sum;
    return sum;
}

int main(int argc, char **argv){
    int a; 
    double arr[] = {1.2, 2.4, 1.001, 10.547, 4.47892}, result;

    // get connection type between resistors
    printf("1: Series\n"
        "2: Parallel\n"
        "How are the resistors connected (1 or 2)? "
    );
    
    // Bug: doesnt call the functions anymore
    while (scanf("%d",& a) != 1 && a != 1 && a != 2) {
        printf("Invalid input - try again ");
        scanf("%*s");
    }  
    
    // read values from user to array with linkedList 
    // or maybe a way to realloc additional memory to array if needed

    // call function dependent on connection type
    if(a == '1'){
        result = ResSeries(arr, sizeof(arr)/sizeof(arr[0]));
    } else if(a == '2'){
        result = ResParallel(arr, sizeof(arr)/sizeof(arr[0]));
    }

    printf("%.3f Ohm\n", result);
}


// for(i = 1; i < argc; i++){
//         h = strtod(argv[i], 0);
//         if( h != 0.0 ){
//             sum += (1/h);
//         } else {
//             printf("Argument %d: %s ist leider kein gültiger Wert!\n", i+1, argv[i]);
//         }
//     }