#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    long long i,j,b,c,l,d;
    while(1)
    {
        scanf("%s",a);
        c=0;b=0;
        l=strlen(a);
        if(a[0]=='0'&&l==1)
        break;
        for(i=0;i<l;i=i+2)
        c+=a[i]-'0';
        for(j=1;j<l;j=j+2)
        b+=a[j]-'0';
        d=c-b;
        if(d%11==0)
        printf("%s is a multiple of 11.\n",a);
        else
        printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
