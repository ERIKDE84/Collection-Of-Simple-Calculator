#include <stdio.h>

double findSquare(double n){
    double upper = n/2, lower = 0;
    double search = upper;

    while(search*search != n){
        printf("upper: %lf   lower: %lf    search: %lf\n", upper, lower, search);
        if(search*search < n){
            lower = search;
        } else {
            upper = search;
        }
        search = (upper + lower)/2;
    }
    return search;
}

int main(int argc, char **argv){
    double n = 45647;
    double result = findSquare(n);
    printf("Square Root of %.2f is %.2f\n", n, result);
}