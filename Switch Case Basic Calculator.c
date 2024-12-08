
#include <stdio.h>
int main(){
char operator;
double a,b;
printf("\n Enter your operator number (+,-,*,/): ");
scanf("%c",&operator);
printf("\n Enter your first number: ");
scanf("%lf",&a);
printf("\n Enter your second number: ");
scanf("%lf",&b);

switch(operator){
case'+':
    printf("\n Addition: %.2lf + %.2lf = %.2lf", a,b,a+b);
    break;
    case'-':
    printf("\n Substruction: %.2lf + %.2lf = %.2lf", a,b,a-b);
    break;
    case'*':
    printf("\nMultification: %.2lf + %.2lf = %.2lf", a,b,a*b);
    break;
    case'/':
    if (b==0){
        printf("\n The Second Velue is 0. So, The divided value is undefined.");
    }
    else
    printf("\n Divided: %.2lf + %.2lf = %.2lf", a,b,a/b);
    break;
}
 return 0;
}

