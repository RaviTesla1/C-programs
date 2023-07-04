 #include<stdio.h>
 int main()
 {
     int a[10],i,sum=0,average;
     printf("Enter ten numbers : \n");
     for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
     /*for(i=0;i<10;i++)
     {

     }*/
     average=sum/10;
     printf("Sum is : %d",average);
     return 0;

 }

