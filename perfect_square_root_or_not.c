#include <stdio.h>
#include <math.h>
 
int main()
{
    int num,Var1;
    float Var2;
    scanf("%d",&num);
  
    Var2=sqrt((double)num);
    Var1=Var2;
 
    if(Var1==Var2)
        printf("True");
    else
        printf("False");
      
    return 0;
}