#include<stdio.h>
#include<conio.h>

int main()
{
  int Peri=0,A=0,l,b;
  printf("Write the length and breath\n");
  scanf("%d %d",&l,&b);
  printf("Length is %d and breath is %d",l,b);
  Peri= 2*(l+b);
  A=l*b;
  printf("\nPerimeter is %d and ",Peri);
  printf(" Area is %d",A);
  return 0;
}
