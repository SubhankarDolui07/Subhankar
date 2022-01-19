#include<stdio.h>
#include<string.h>
int main()
{
	char a[56],b[20];
	int i;
	printf("enter the string :");
	scanf("%s",a);
	for(i=0;i<20;i++){
		scanf("%c",&b[i]);
	}
	int c=strcmp(a,b);
	printf("%d",c);
	if(c==0 ){
		printf("two strings are equal");
	}
	else{
		printf("two strings are not equal");
	}
	return 0;
}
