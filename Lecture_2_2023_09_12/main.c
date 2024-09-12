#include <stdio.h>

int main(){
    // int staticArrayAbhi[]={1,2,3,4,5};
    // printf("%d",staticArrayAbhi[0]);

    int a[10]; //static array
    int *arr=(int *)malloc(10*sizeof(int)); //diynamically created array
    a[0]=100;
    a[9]=1000;
    arr[0]=200;
    printf("Hello World");
    return 0;
}