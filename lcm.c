#include <stdio.h>
int main()
{

    int x, y, a, b, lcm;

    printf("Enter a :- ");
    scanf("%d", &x);
    printf("Enter b :- ");
    scanf("%d", &y);

    // bigger no 
    if (y > x)
    {
        a = y;
    }
    else
    {
        a = x;
    }
    // printf("%f", a);

    // smaller no 
    // if (y < x)
    // {
    //     b = y;
    // }
    // else
    // {
    //     b = x;
    // }
    // printf("%f", b);



    // if (a % x == 0)
    // {
    //     printf("%f", a);
    // }
    // else{
    while(1){
        if(a % x == 0 && a % y  == 0){
            lcm = a;
            break;
        }
        a++;
        }
        printf("Lcm of %d and %d is %d", x,y,lcm );

    return 0;
}