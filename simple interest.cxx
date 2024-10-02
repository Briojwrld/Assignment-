#include  <stdio.h>
int main(){
    int P;
    int R;
    int T;
    printf("enter P");
    scanf("%d", &P);
    printf("enter R");
    scanf("%d", &R);
    printf("enter T");
    scanf("%d", &T);
    float  SI =(P*R*T) /100;
    printf("%f", SI);
    return 0;	
}