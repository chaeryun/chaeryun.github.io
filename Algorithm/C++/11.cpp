# include <stdio.h>

int main() {
    int a, b;

    scanf("%d%d", &a, &b);  //&:������

    int sum1 = a + b;
    int min1 = a - b;
    int mul1 = a * b;
    int div1 = a / b;

    printf("%d + %d = %d\n", a, b, sum1);
    printf("%d - %d = %d\n", a, b, min1);
    printf("%d * %d = %d\n", a, b, mul1);
    printf("%d / %d = %f\n", a, b, div1); 


}