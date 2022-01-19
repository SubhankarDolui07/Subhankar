// How many lines the string has
#include<stdio.h>
int starlen(char a[]);
int starlen(char a[]){
	char *count=a;
	int i=0;
	while(*count!='\0'){
		i++;
		count++;	
	}
	return i;
}
int main()
{
	char a[20];
	printf("enter the string:");
	scanf("%s",a);
	int c=starlen(a);
	printf("the number of letter is %d",c);
	return 0;
}
