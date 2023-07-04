int main()
{
    char x[10]="Gayle";
    puts(x);
    rev(x);
    return 0;
}
void rev(char *z)
{
    int i,l;
    char temp;
    for(i=0;z[i];i++);

     l=i;
     printf("%d\n",l);
    for(i=0;i<l/2;i++)
    {
     temp = z[i];
     z[i] = z[l-i-1];
     z[l-i-1]=temp;
    }
    printf("Reverse string is :\n");
    puts(z);
}
