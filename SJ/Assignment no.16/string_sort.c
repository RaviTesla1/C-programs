main()
{
    char A[10][10],temp[10];
    int i,j;
    printf("Enter 10 cities name:\n");
    for(i=0;i<10;i++)
        gets(A[i]);
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
           {
               temp = A[i];

               if(temp != A[i+1][j])
                 if(temp > A[i+1][j])

                   A[i] = A[i+1];
                   A[i+1]= temp;
                   break;
           }
}
for(i=0;i<10;i++)
    puts(A[i]);
getch();
