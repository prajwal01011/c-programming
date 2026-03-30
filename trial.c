//program to find if the character is capital or not through (ASCII VALUE)
#include <stdio.h>
int main()
	{ 
	int a;
	char ch;
	
			
	printf("enter any character on capital letter or small\n");
	scanf("%c",&ch);
	printf("the value of character is %d\n",ch);
	if (ch>=97&&ch<=122){
	printf("the character is lowercase\n" );//97 to 122 is lowercase start from a-z
						}
	else{
	printf("the character is not lowercase\n");/*although the ascii value of uppercase is 65-90 A-Z 
	but the there are other character also which aren't uppercase*/	
	
		}
		
		getchar();
	
	return 0;
	}
