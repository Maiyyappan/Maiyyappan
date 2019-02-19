#include <stdio.h>
#include<string.h>
int main() {
	char ch[10];
	scanf("%s",ch);
	if((strcmp(ch,"Saturday")==0)||(strcmp(ch,"Sunday")==0))
	{
	printf("Yes");
	}
	else
	{
	printf("No");
	}
	return 0;
}
