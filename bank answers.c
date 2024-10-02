#include <stdio.h>
int main() {
    int age;
    float annualincome;
    printf("\nEnter your age");
    scanf("%d",&age);
    printf("\nEnter your annual income");
    scanf("%f",&annualincome);
    if(age>=21 & annualincome>=21000) {
        printf("\ncongratulations you qualify for a loan");
    }
    else {
        printf("\nYou don't qualify for a ploan");
    }
    return 0;
}