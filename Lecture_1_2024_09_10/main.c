#include <stdio.h>

int main(){
  int a[10];
  printf("%lu",(unsigned long)&a[0]);   
//   for(int i; i<10; i++){
//     printf("%lu ",(unsigned long)&a[i]);
//   }; 
    // int *ptr= &a;
    printf(" The size of a pointer on this machine is %d",sizeof(int *));
  return 0;
}