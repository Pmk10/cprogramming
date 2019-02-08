#include <stdio.h>

int main() {
char a[10]={"a,e,i,o,u"};
char b;
printf("Enter the alphabet \n");
scanf("%c",&b);
if(b==a[0]||b==a[1]||b==a[2]||b==a[3]||b==a[4]||b==a[5])
{
	printf("Vowel \n");
}
else
printf("Consonant \n");
	return 0;
}
