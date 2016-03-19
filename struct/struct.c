#include <stdio.h>
//结构体很像类的概念
typedef struct weapon{
  char name[20];
  int atk;
  int price;
} w;//要再main之前且需要分号!!
int main()
{
  w weapon_1={"name1",5,100};//初始化结构体
  printf("%s\n",weapon_1.name);//结构体的使用

  w *m;//结构体指针  struct weapon *m
  m=&weapon_1;

  //一个是取到对象会去访问,一个是通过指针直接访问
  printf("weapon_1.atk:%d,weapon_1.pricei:%d\n",(*m).atk,m->price);
  struct weapon weapons[2]={{"name2",10,200},{"name3",15,300}};
  printf("weapons[1]:%s,%d,%d\n",weapons[1].name,weapons[1].atk,weapons[2].price);
  
  return 0;
}

