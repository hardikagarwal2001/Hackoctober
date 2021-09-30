# include<stdio.h>
# include<string.h>
void anagram(char s[],char t[])
{
    int i,j,c=0;
    if(strlen(s)!=strlen(t))
    {
        printf("Not an anagram");
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            for(j=0;s[j]!='\0';j++)
            {
                if(s[j]==t[i])
                    c++;
            }
        }
        if(strcmp(s,t)!=0&&c==strlen(s))
        {
            printf("%s and %s are anagrams.",s,t);
        }
        else
        {
            printf("Not anagrams.");
        }
    }
}
int main()
{
    char s[50],t[50];
    printf("Enter the string:");
    scanf("%s",s);
    printf("Enter another string:");
    scanf("%s",t);
    anagram(s,t);
    return 0;
}

