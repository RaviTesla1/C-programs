void index(int b[],int n);
#include<stdio.h>
int main()
{
    int a[3]={2,1,3};
    index(a,3);
    getch();
    return 0;
}
void index(int b[],int n)
{
    int i,smallest,inde=0;
    for(i=1;i<n;i++)
    {
        smallest=b[0];

        if(smallest < b[i])
        {
           inde=0;
        }
        else
        {
            smallest = b[i];
            inde = i;
        }
    }
printf("Smallest element index is %d",inde);
}
