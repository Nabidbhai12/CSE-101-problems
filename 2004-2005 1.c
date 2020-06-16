#include<stdio.h>
#include<string.h>
void encrypt(char *s,int key)
{

    char *str;
    str=&s[0];
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {

            *str-=90;
            *str=(*str+key)%26;
            *str+=90;
            str++;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str-='A';
            *str=(*str+key)%26;
            *str+='A';
            str++;
        }
        else
            str++;
    }
    printf("%s\n",s);

}
int main()
{
    int key;
    char s1[100],s2[100];
    scanf(" %[^\n]",s1);
    scanf("%d",&key);
encrypt(s1,key);
}
