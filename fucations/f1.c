#include <stdio.h>

int main()
{
 void myfunction();
 printf("\n before main");
 myfunction();
 printf("\n after main");
 return 0;
}
void myfunction()
{
 printf("\n\t inside myFuncation");
}

/*
 before main
         inside myFuncation
 after main
 */