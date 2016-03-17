#include <stdio.h>
/*
all things is flie
stdin: screen
stdout: keyboard
stderr:
*/
int main()
{
  //printf("please input the value a: \n");
  fprintf(stdout,"please input the value a:\n");
  int a;
  //scanf("%d",&a);
  fscanf(stdin,"%d",&a);
  if(a<0){
   fprintf(stderr,"the value must >0\n");
  }
}
