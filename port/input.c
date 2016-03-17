#include <stdio.h>
int main()
{
  int flag=1;
  //input
  int i;
  int sum;
  int count;
  while(flag){
    scanf("%d",&i);
    if(0==i) break;
    count++;
    sum+=i;
  }
  printf("%d,%d",sum,count);
  return 0; 
}
