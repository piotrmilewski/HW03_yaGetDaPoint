#include <stdio.h>

int main(){
    //pointer testing
    int a = 15;
    int b = 30;

    int *pa = &a;
    int *pb = &b;

    printf("Size of a: %lu \n", sizeof(a)); //size of int is ofc 4
    printf("Size of pa: %lu \n", sizeof(pa)); //size of pointer remains 8 bytes even after setting its contents 

    printf("a: %d b: %d \n", a, b);
    printf("pa: %p pb: %p \n", pa, pb);
    
    a = *pa;
    b = *pb;
    
    printf("a: %d b: %d \n", a, b);
}
