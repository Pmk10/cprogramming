#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the numbers \n");
    scanf("%d \n %d \n %d \n",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is the greatest\n",a);
    }
    else if(b>c)
    {
        printf("%d is the greatest\n",b);
    }
else
printf("%d is the greatest\n",c);
    return 0;
}
