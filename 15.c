#include<stdio.h>
int main ()
{

   int  X,Y,T,i,y,t;
   scanf("%d",&T);
   for(i=1;i<=T;i++)
   {
       scanf("%d%d",&X,&Y);
       if(X>Y)
       {
        t=X-Y;
        printf("%d\n",t);

       }
       else
       {
        y=Y-X;
       printf("%d\n",y);
   }
   }
}
