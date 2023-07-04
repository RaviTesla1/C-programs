int main()
{
 char t[10] ;
 int f;
 printf("Enter your name: \n");
 gets(t);

 f=cont(t);
 printf("No. of vowels are : %d",f);
 return 0;
}
int cont(char *s)
{
    int i,count=0;
    for(i=0;s[i];i++)
    {
     if(s[i]== 'a'|| s[i]== 'i'||s[i]== 'e'||s[i]== 'o'||s[i]== 'u')
     {
            count ++;
     }

    }
    return count;

}
