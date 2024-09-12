#include <stdio.h>
#include <stdlib.h>
int main(){
    // int staticArrayAbhi[]={1,2,3,4,5};
    // printf("%d",staticArrayAbhi[0]);

    int a[10]; //static array
    // int *arr=(int *)malloc(10*sizeof(int)); //diynamically created array
    int *b=(int *)malloc(10*sizeof(int)); //diynamically created array
    a[0]=100;
    a[9]=1000;
    // arr[0]=200;
    b[0]=200;
    printf("%X and %X and %X",&a[0],&a[0],&a,a); //findind the adress of those dynamic arrays.
    printf("%X and %X and %X",&a[0],&b[0],&b,b); //findind the adress of those dynamic arrays.
    // printf("%x and %X",&a[0],&a[9]); //findind the adress of those dynamic arrays.

    // printf("\n%d\n",*arr);
    return 0;
}
