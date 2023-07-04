int main()
{
    char a[10] ="sidhumoo",b[10] = "sidhumoo";
    int i;
    i=compare(a,b);
    if(i)
        printf("Strings are not equal\n");
    else
        printf("Strings are  equal");
    return 0;

}
int compare(char *s,char *t)
{
    int i,len_s,len_t;
    for(i=0;s[i];i++);
    len_s =i;
    for(i=0;t[i];i++);
    len_t =i;
    if(len_s == len_t)
    {

      for(i=0;s[i];i++)
     {
        if( s[i] != t[i])
            break;
      }
      if(len_s == i)
        return 0;
      return 1;
    }
    else
        return 1;



}
