#include<stdio.h>
int main()
{
    int a[10] ={5,18,3,2,15,5,22,8,0,1};
    small(a,10);
    getch();
    return 0;
}
void small(int b[],int n)
{
    int i,little=20,index;
    for(i=0;i<n;i++)
    {
        if(little > b[i])
        {
            little = b[i];
            index =i;
        }
    }
    printf("Smallest element index is %d",index);
}
