main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter array matrix of A\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
         scanf("%d",&A[i][j]);
 printf("Enter array matrix of B\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
         scanf("%d",&B[i][j]);
printf("Sum of two matrices are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    getch();
}
