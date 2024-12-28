#include<stdio.h>
int main ()
{

    int a,b;
    scanf("%d%d",&a,&b);
    int arr1[a],arr2[b],i,sum1=0,sum2=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);


        sum1=sum1+arr1[i];
    }
     for(i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);


        sum2=sum2+arr2[i];
    }

    if(sum1==sum2)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
