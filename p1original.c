#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the numerator and denominator\n");
  scanf("%d%d %d%d",num1,den1,num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  *den3=den1*den2;
  *num3=(num1*den2)+(num2*den1);
    int i,gcd;
  for(i=1;i<=*num3 && i<=*den3;i++)
{
if(*num3%i==0 && *den3%i==0)
gcd = i;
  }
}
void output(int num1,int den1,int num2,int den2,int num3,int den3,int gcd)
{
  printf("The sum of %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,num3/gcd,den3/gcd);
}
int main()
{
  int a,b,c,d,x,y,gcd;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&x,&y);
  output(a,b,c,d,x,y,gcd);
  return 0;
}