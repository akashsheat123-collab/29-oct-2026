#include<stdio.h>
int main()
{
     int secret = 7;
    int guess ;
    int i;
    for (i=1 ; i<=10 ; i++)
    {
    printf("enter your choice \n");
    scanf("%d", & guess);
    if (guess == secret)
    {
    printf("congrates you win \n");
    break;
}
    else if (guess < secret)
    {
    printf("too low \n");
}
    else
    {
    printf("too high \n");
}
}
if  (guess !=secret)
{
printf(" game over\n");
}
return 0;
}
