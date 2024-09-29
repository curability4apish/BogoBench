#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int reverser(int x)
{
    int reversed=0;
    if (x%10==0) x+=1;
    while(x!= 0)
    {
        reversed=reversed*10+x%10;
        x=x/10;
    }
    return reversed;
}

int main()
{
    printf("PROGRESS\n");
    printf("[==================================================================================================]\n");
    int siz=10;
    int bogo[siz];
    for (int i=0;i<siz;i++) bogo[i]=reverser(rand()>>3);
    int ran=0,temp=0;
    for (int j=0;j<100;j++){
    redo:
    for (int i=0;i<siz;i++)
    {
        ran=reverser(rand()>>7);
        ran=(int)ran*(1+cos(rand()>>4));
        temp=bogo[ran%siz];
        bogo[ran%siz]=bogo[i];
        bogo[i]=temp;
    }
    for (int i=0;i<siz-2;i++)
    {
        if (bogo[i]>bogo[i+1]) {ran=0;temp=0;goto redo;}
    }
    printf(".");}
    return 0;
}
