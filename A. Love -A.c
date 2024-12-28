#include<stdio.h>
#include<string.h>
int main ()
{

    char str[51];


    scanf("%s",&str);
    int i,count=0,len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a')
        {
            count++;
        }
    }
    int s=len-count;
    if(s>=count-1)
    printf("%d\n",(count+(count-1)));
    else
        printf("%d\n",len);
    return 0;

}
