#include<stdio.h>
#include<cs50.h>

int main(void)
{ int a,b,i,j,k,c=1;
  a=get_int("Enter type of pattern (1 or 2)");
  b=get_int("Number of rows");
  switch(a)
{
  case 1:for(i=b;i>=1;i--)
         { for(j=1;j<=i;j++)
            { printf("#");
            }
           printf("\n");
         }
         break;
  case 2:for(i=b;i>=1;i--)
         { for(j=1;j<=i-1;j++)
            { printf(" ");
            }
           for(k=1;k<=c;k++)
            {printf("#");
            }
           printf("\n");
           c++;
         }
         break;
 }
 return 0;
}

  
