#include<stdio.h>
#include<string.h>
int main()
{
int l,l1,l2,l3,l4,l5,i,j,k,t;
char s1[100],s5[1000];
while(scanf("%d",&t)==1)
{
scanf("\r");
for(j=0;j<t;j++)
{
gets(s1);
gets(s5);
l=strlen(s1);
l5=strlen(s5);
for(i=0;i<l;i++)
    {
    if(s1[i]=='<')
    l1=i;
    if(s1[i]=='>')
        {
        l2=i;
        break;
        }
    }
for(i=l2+1;i<l;i++)
    {
    if(s1[i]=='<')
    l3=i;
    if(s1[i]=='>')
        {
        l4=i;
        break;
        }
    }
for(i=0;i<l;i++)
    {
    if(s1[i]!='<' && s1[i]!='>')
    printf("%c",s1[i]);
    }
printf("\n");
for(i=0;i<l5-3;i++)
    printf("%c",s5[i]);
for(i=l3+1;i<l4;i++)
    printf("%c",s1[i]);
for(i=l2+1;i<l3;i++)
    printf("%c",s1[i]);
for(i=l1+1;i<l2;i++)
    printf("%c",s1[i]);
for(i=l4+1;i<l;i++)
    printf("%c",s1[i]);
printf("\n");
}
}
}
