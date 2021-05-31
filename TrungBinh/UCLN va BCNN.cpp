#include <stdio.h>
int main()
{ 
  int a,b,c,d;
  scanf("%d %d",&a,&b);
  c=a*b;
  while(a!=b)
  {
     if(a>b)
        a=a-b;
     else
        b=b-a;
  }
  printf("%d ",a);
  printf("%d",c/a);
 
return 0;
}
