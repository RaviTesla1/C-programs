main()
{
    int A[9],B[9],i;
    printf("Enter elements of array of A: ");
    for(i=0;i<9;i++)
        scanf("%d",&A[i]);
    printf("Enter elements of array of B: ");
    for(i=0;i<9;i++)
        scanf("%d",&B[i]);
    printf("\n\n");
    printf("Sum of array elements are:\n ");
    for(i=0;i<3;i++)
        printf("%d ",A[i]+B[i]);
        printf("\n")  ;
    for(i=3;i<6;i++)
        printf("%d ",A[i]+B[i]);
        printf("\n")  ;
    for(i=6;i<9;i++)
        printf("%d ",A[i]+B[i]);

getch();
}
