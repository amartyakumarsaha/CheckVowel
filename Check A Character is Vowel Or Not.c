#include<stdio.h>
void checkVowel(char);
int main()
{
	char ch;
	scanf("%c",&ch);
	checkVowel(ch);
}
void checkVowel(char ch)
{
	if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
	{
		printf("%c is an Vowel",ch);	
	}
	else
	{
		printf("%c is not an Vowel",ch);
	}
}
