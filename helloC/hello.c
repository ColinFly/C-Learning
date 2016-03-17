#include <stdio.h>
#include "min.h" 
#include "max.h" 
int main()
{ 
    int a=10;
    int b=20;
    int maxNum=max(a,b);
    int minNum=min(a,b);
    printf("the max value is: %d\n the min value is : %d\n",maxNum,minNum);
    return 0;
}
