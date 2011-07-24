#include "stdio.h"
   
  int add(int a,int b)
   {
        return a+b;
  
   } 
  int sub(int a,int b)
   {
         return a-b;


   }
int main ()

{
  
    int hh;

    hh=add(100,120);
    printf("add=%d\n",hh);

    hh=sub(100,120);
    printf("add=%d\n",hh);

    return 0;

}


