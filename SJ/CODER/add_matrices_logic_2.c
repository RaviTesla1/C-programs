main()
{
    int A[3],B[3],i,j;
    printf("Enter elements of array of A: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
          scanf("%d",& A[i][j]);
        }//scanf("%d",&A[i]);
printf("Enter elements of array of B: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          scanf("%d",&B[i][j]);
printf("\n");
printf("Sum of array elements are: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          printf("%d ",A[i][j]+B[i][j]);
          printf("\n");
getch();
}
