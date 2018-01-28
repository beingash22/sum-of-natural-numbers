#include <stdio.h>

void main ()
{

int num, i, sum=0;
scanf ("%d",&num);

if (num>0)
{
  for (i=1; i<=num; i++)
    sum=sum+i;
}

else
  printf ("invalid input");
  
}  
