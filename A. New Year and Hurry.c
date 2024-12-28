#include<stdio.h>
int main ()

{

    int n,k,i,remaining_time=0,total_solveproblem=0;
    scanf("%d%d",&n,&k);
    int total_time=240-k;
    for(i=1;i<=n;i++)
    {
     remaining_time=remaining_time+i*5;

    if(remaining_time<=total_time)
    {
    total_solveproblem++;
    }
    else
    {
        break;
    }
    }
    printf("%d\n",total_solveproblem);
return 0;

}
