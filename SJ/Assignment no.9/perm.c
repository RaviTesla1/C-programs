int perm(int n,int r);
main()

{
    int n,r,permutation;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    permutation=perm(n,r);
    printf("Number of permutations are %d",permutation);
    getch();

}
int perm(int n,int r)
{
    int i,N_fact=1,Subtraction,Fact_subtraction=1,result;
    for(i=1;i<=n;i++)
       N_fact= N_fact*i;
    Subtraction=n-r;
    for(i=1;i<=Subtraction;i++)
     Fact_subtraction=Fact_subtraction*i;
     result=N_fact/Fact_subtraction;
    return result;
}

    /*int i,c,per,res;
     c=n-r;
    for(i=1;i<c;i++)//i<3;1<3;2>3;<3
    {
        c=c*i;
    }
    for(i=1;i<n;i++)
    {
        n=n*i;
    }
    res=n/c;
 printf("%d",res);
}
*/
