/* 题意没明白 */
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    int len[500];
    int sum[500];
    char str[500][1000];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%s",str[i]);
        for(i=0;i<n;i++)
        {
            sum[i]=0;
            //gets(str[i]);
            len[i]=strlen(str[i]);
            for(j=0;j<len[i];j++)
            {
                if(str[i][j]>='A'&&str[i][j]<='Z')
                    sum[i]=sum[i]+str[i][j]-64;
                else if(str[i][j]>='a'&&str[i][j]<'z')
                    sum[i]=sum[i]+str[i][j]-96;
            }
        }
        for(i=0;i<n;i++)
            printf("%d\n",sum[i]);
		//	printf("%s",str[i]);
    }
    return 0;
}