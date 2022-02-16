#include <stdio.h>

int main() {
  //int : 32비트 (4바이트), 정수를 담는 데 쓰임
  int a = 5;
  int b = 3;

  int sum1 = a + b;
  int min1 = a - b;
  int mul1 = a * b;
  int div1 = a / b;
  int div2 = a % b;   // 5%3 = 2 나머지 반환

  printf("%d + %d = %d\n", a, b, sum1);
  printf("%d - %d = %d\n", a, b, min1);
  printf("%d * %d = %d\n", a, b, mul1);
  printf("%d / %d = %d\n", a, b, div1);
  printf("%d + %d = %d\n", a, b, div2);
  
}
