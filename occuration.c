

#include <stdio.h>

void countConsonants(char str[])
{
int count[26]={0},i;
char ch;
for(i=0;str[i]!='\0';i++)
{
ch=str[i];
if(ch>='A' && ch<='Z')
ch=ch+32;
if(ch>='a' && ch<='z')
{
if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
count[ch-'a']++;
}
}
printf("Consonant Counts:\n");
for(i=0;i<26;i++)
if(count[i]>0)
printf("%c = %d\n",i+'a',count[i]);
}
int main()
{
char str[100];
printf("Enter a sentence: ");
gets(str);
countConsonants(str);

}
