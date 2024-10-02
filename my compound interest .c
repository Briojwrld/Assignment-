#include <stdio.h>
#include <math.h>
int main() {
char name [24];
printf("enter your name");
scanf("%s", &name);// prompts user to enter their name
printf("\nhi:%s.%s. \n this program calculate CI", name);
float p,r,n,t;
printf("\nenter p");//user to enter principal 
scanf("%f",&p);
printf("\n the principal is %f" ,p);
printf("\nenter r");
scanf("%f", &r);
printf("\n the principal amount is %f" ,r);
printf("\nenter n");
scanf("%f", &n);
printf("\n the amount of compounding per year is %f", n);
printf("\nenter t");
scanf("%f", &t);
printf("\n the total number of years is %f", t);

float CI=p*pow((1+(r/100)/n),n*t)-p;
printf("n the compound interest is %1f", CI);
return 0;
}