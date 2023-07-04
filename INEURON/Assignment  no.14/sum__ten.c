 #include<stdio.h>
 int main()
 {
     int a[10],i,sum=0;
     printf("Enter ten numbers : \n");
     for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
     /*for(i=0;i<10;i++)
     {

     }*/
     printf("Sum is %d",sum);
     return 0;

 }
