#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={1,1,1,1,1,1,1,1,1},c[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {


            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
