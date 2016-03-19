#include <stdio.h>
int main()
{
  int a=1;
  int b=2;
  int array[2];
  array[0]=100;
  array[1]=200;
  array[2]=300;
  int *p=&a;
  int i;
  for(i=0;i<6;i++){
     printf("*P=%d\n",*p);
     p++;//指针的值在加
  }
  printf("------------------------\n");
  p=&a;
  for(i=0;i<6;i++){
     printf("p[%d]=%d\n",i,p[i]);//p当成数组在用
  }

}
