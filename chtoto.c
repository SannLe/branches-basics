#include <stdio.h>

int main()
{
int a, b, c, x;
printf ("Input a variable a: ");
scanf("%d", &a);
printf ("Input a variable b: ");
scanf("%d", &b);
printf ("Input a variable c: ");
scanf("%d", &c);

x=a^3+b^2+c;

printf("%d", x);
 printf("Bye-bye!");
return 0;
}
