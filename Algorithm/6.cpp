#include <stdio.h>

int main() {
  /*

<<<<<<< HEAD
  //double : 32비트 (4바이트), 정수를 담는 데 쓰임
  double a = 5;
  double b = 3;

  double sum1 = a + b;
  double min1 = a - b;
  double mul1 = a * b;
  double div1 = a / b;
  double div2 = a % b;   // 5%3 = 2 나머지 반환

  printf("%f + %f = %f\n", a, b, sum1);
  printf("%f - %f = %f\n", a, b, min1);
  printf("%f * %f = %f\n", a, b, mul1);
  printf("%f / %f = %f\n", a, b, div1);
  printf("%f %% %f = %f\n", a, b, div2);

  */

  //float : 32비트 (4바이트), 실수를 담는 데 쓰임
  //double : 64비트 (8바이트), 실수를 담는 데 쓰임 float의 두배의 크기
  double a = 9.8;
  double b = 3.14;

  double sum1 = a + b;
  double min1 = a - b;
  double mul1 = a * b;
  double div1 = a / b;

  printf("%f + %f = %f\n", a, b, sum1);
  printf("%f - %f = %f\n", a, b, min1);
  printf("%f * %f = %f\n", a, b, mul1);
  printf("%f / %f = %f\n", a, b, div1);

  // 부동소수점(floating point)
}
=======
  int sum1 = a + b;
  int min1 = a - b;
  int mul1 = a * b;
  int div1 = a / b;
  int div2 = a % b;   // 5%3 = 2 �굹癒몄�� 諛섑솚

  printf("%d + %d = %d\n", a, b, sum1);
  printf("%d - %d = %d\n", a, b, min1);
  printf("%d * %d = %d\n", a, b, mul1);
  printf("%d / %d = %d\n", a, b, div1);
  printf("%d + %d = %d\n", a, b, div2);
  
}
>>>>>>> a5cb925b950f948c58156b1246548851486e9c6f
