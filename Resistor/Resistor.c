#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct _element {
    double d;
    struct _element *next;
}ELEMENT, *EP;

void prtList(EP first){
    for(; first; first = first->next){
        printf("%f\n", first->d);
    }
    printf("\n");
}

EP newElement(double d){
    EP p = malloc( sizeof(ELEMENT) );
    if(p){
        p->d = d; p->next = 0;
    }
    return p;
}

void insertDouble(double d, EP ptr){
    EP p = newElement(d);
    if(p){
        while(ptr->next){
            ptr = ptr->next;
        }
        ptr->next = p;
    }
}

double ResSeries(EP ptr){
    double sum;
    for(;ptr->next; ptr=ptr->next){
        sum += ptr->next->d;
    }
    return sum;
}

double ResParallel(EP ptr){
    double sum;
    for(;ptr->next; ptr=ptr->next){
        sum += 1/ptr->next->d;
    }
    sum = 1/sum;
    return sum;
}

int main(int argc, char **argv){
    char a;
    double result, input = 0.0;
    int i = 0;

    EP ptr = newElement(input);

    // get connection type between resistors
    printf("\n1: Series\n"
        "2: Parallel\n"
        "How are the resistors connected (1 or 2)? "
    );

    while(scanf("%c",& a) != 1 || a != '1' && a != '2'){
        printf("Invalid input, try again! --> ");
        scanf("%*c");
    }  
    printf("\n");
    
    // read resistor values from user
    do{
        printf("Enter the value of the %d resistor (\"0\" if you are done): ", i);
        scanf("%lf", & input);
        if(input != 0){
            insertDouble(input, ptr);
        }
    }
    while(input != 0);

    // call function dependent on connection type
    if(a == '1'){
        result = ResSeries(ptr);
    } else if(a == '2'){
        result = ResParallel(ptr);
    }

    printf("\nThe total resistance (%s) = %.2f Ohm\n\n", a =='1'? "series":"parallel",result);
}


// for(i = 1; i < argc; i++){
//         h = strtod(argv[i], 0);
//         if( h != 0.0 ){
//             sum += (1/h);
//         } else {
//             printf("Argument %d: %s ist leider kein gültiger Wert!\n", i+1, argv[i]);
//         }
//     }