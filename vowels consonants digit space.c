#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char line[50];
	int vowels,consonant,digit,space;
	printf("enter the string");
	scanf("%d",&line[50]);
	for (int i=0;i<='\0';i++)
	line[i]=towoler(line);
	if (line[i]==a||line[i]==e||line[i]==i||line[i]==0||line[i]==u||)
	{
		vowel++;
	}
	else if (line[i]>=a&&line[i<=z])
	{
		consonant++;
	}
	else if (line[i]>=0&&line[i]<=9)
	{
		digit++;
	}
	else if (line[i]=" ")
	{
		space++;
	}
	printf("vowels:%d",vowels);
	printf("consonants:%d",consonants);
	printf("digits:%d",digits);
	printf("space:%d",space);
}
