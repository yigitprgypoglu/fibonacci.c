#include <stdio.h>
include  <stdlib.h>
int main()
{
//fibonacci serisinin ilk 10 elemanini listeleyen kod.
int a,b,c,d,i;
a=1;
b=1;
c=1;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
for(i=1;i<=8;i++)
{
d=a+b+c
a=b;
b=c;
c=d;
printf("%d\n",c);
}
return 0;
}
