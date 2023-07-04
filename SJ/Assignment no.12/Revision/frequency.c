#include<stdio.h>
int main()
{
    int a[5]={2,3,1,1,8};
    freq(a,5);
    getch();
    return 0;
}
void freq(int b[],int n)
{
    int i,j,num,count;
    for(j=0;j<n;j++)
    {
        num=b[j];
        count=0;
        for(i=0;i<n;i++)
        {
            if(num == b[i])
                count++;
        }
        printf("Frequency of %d is %d\n",num,count);
    }
}
