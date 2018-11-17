#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{

char temp[100],str[10][10];
int len[10],i,j,n;

printf("How many string do you want to enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
len[i]=strlen(str[i]);
}

printf("Transmitted data is :");

for(i=0;i<n;i++)
{
sprintf(temp,"%d",len[i]);
strcat(temp,str[i]);
strcpy(str[i],temp);
printf("\n%s",str[i]);
}
return(0);
}
