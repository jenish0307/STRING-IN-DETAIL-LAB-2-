#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i, l, d=0, s=0, letter=0;
	
	printf("enter password = ");
	gets(ch);
	
	l = strlen(ch);
	
	if(l>=6)
	{
		for(i=0; i<l; i++)
		{
			if(ch[i]>='a' && ch[i]<='z' ||ch[i]>='A' && ch[i]<='Z')
			{
				letter=1;
			}
			else if(ch[i]>='0' && ch[i]<='9')
			{
				d=1;
				
			}
			else
			{
				s=1;
			}
		}
		if(letter == 1 && d == 1 && s == 1)
		{
			printf("pass is valid");
		}
		else
		{
			printf("pass is not valid");
			
		}
	}	
	else
	{
		printf("plz enter minimum 6 digit");
	}
	return 0;
}