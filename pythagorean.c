#include<stdio.h>
#include<cs50.h>



int main(void)
{ int a,b,c,u,v,z;
  a=get_int("side 1 ");
  b=get_int("side 2 ");
  c=get_int("side 3 ");
  u=a*a;
  z=c*c;
  v=b*b;
  if((u+v)==z || (v+z)==u || (u+z)==v)
    {printf("Yes\n");
    }
  
  else
   { printf("No\n");
   }
  return 0;
}
  
