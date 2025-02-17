#include <stdio.h>
int main()
{
    // Simple interest calculater

   float principal ;
   float rate;
   float time ;
   printf("Enter the value of principal amount :- ");
   scanf("%f", &principal);
   printf("Enter the yearly rate :- ");
   scanf("%f", &rate);
   printf("Enter how many years you are borrowing :- ");
   scanf("%f", &time);

   float interest = (principal * rate * time)/100;

   printf("Simple interest calculated :- %f  \n", interest);

   printf("Cube of rate is :- %f \n", (rate*rate*rate));

    printf("%d", 5>6);

    return 0;  
}