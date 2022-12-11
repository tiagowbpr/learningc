#include <stdio.h>
#include "prints.h"

int get_min(int numbers[], int size){
    int min = numbers[0];
    for(int i = 0; i < size; i++) {
        if(numbers[i] < min) min = numbers[i];
    }
    return min;
}

int get_max(int numbers[], int size){
    int max = numbers[0];
    for(int i = 0; i < size; i++) {
        if(numbers[i] > max) max = numbers[i];
    }
    return max;
}

void get_min_and_max(int numbers[], int size, int *min, int *max){
    *min = numbers[0];
    *max = numbers[0];
    for(int i = 0; i < size; i++) {
        if(numbers[i] > *max) *max = numbers[i];
        if(numbers[i] < *min) *min = numbers[i];
    }
}


int main()
{   
    int min, max;
    int *minptr = &min;
    int *maxptr = &max;
    int numbers[] = {12, 54, 777, 1, 90};
    pd(get_min(numbers, 5));    
    pd(get_max(numbers, 5));  

    get_min_and_max(numbers, 5, minptr, maxptr);
    pd(min);
    pd(max);
    return 0;
}
