#include<stdio.h>
#include<conio.h>
void arms_range(int F,int L);
void main()
{
    int F,L;
    printf("Enter first number: ");
    scanf("%d",&F);
    printf("Enter last number: ");
    scanf("%d",&L);
    arms_range(F,L);
    getch();
}
void arms_range(int F,int L)
{
    int mod,num,sum=0,new_num=0;
    for(num=F;num<=L;num++)
     {
        new_num=new_num+num;
        while(num != 0)
        {
            mod = num%10;
            sum = sum+mod*mod*mod;
            num = num/10;
        }
       if(new_num == sum)
       {
          printf("\n%d ",sum);
          new_num=0;
       }
     }
}
