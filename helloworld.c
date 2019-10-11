#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int a,i;
  printf("enter how many times you wanna print hello world");
  scanf("%d",&a);
  for(i=1;i<=a;i++);
      printf("hello world\n");
  getch();
}
