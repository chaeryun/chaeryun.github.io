#include <stdio.h>

int main() {
  /*

<<<<<<< HEAD
  //double : 32ºñÆ® (4¹ÙÀÌÆ®), Á¤¼ö¸¦ ´ã´Â µ¥ ¾²ÀÓ
  double a = 5;
  double b = 3;

  double sum1 = a + b;
  double min1 = a - b;
  double mul1 = a * b;
  double div1 = a / b;
  double div2 = a % b;   // 5%3 = 2 ³ª¸ÓÁö ¹ÝÈ¯

  printf("%f + %f = %f\n", a, b, sum1);
  printf("%f - %f = %f\n", a, b, min1);
  printf("%f * %f = %f\n", a, b, mul1);
  printf("%f / %f = %f\n", a, b, div1);
  printf("%f %% %f = %f\n", a, b, div2);

  */

  //float : 32ºñÆ® (4¹ÙÀÌÆ®), ½Ç¼ö¸¦ ´ã´Â µ¥ ¾²ÀÓ
  //double : 64ºñÆ® (8¹ÙÀÌÆ®), ½Ç¼ö¸¦ ´ã´Â µ¥ ¾²ÀÓ floatÀÇ µÎ¹èÀÇ Å©±â
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

  // ºÎµ¿¼Ò¼öÁ¡(floating point)
}
=======
  int sum1 = a + b;
  int min1 = a - b;
  int mul1 = a * b;
  int div1 = a / b;
  int div2 = a % b;   // 5%3 = 2 ë‚˜ë¨¸ì§€ ë°˜í™˜

  printf("%d + %d = %d\n", a, b, sum1);
  printf("%d - %d = %d\n", a, b, min1);
  printf("%d * %d = %d\n", a, b, mul1);
  printf("%d / %d = %d\n", a, b, div1);
  printf("%d + %d = %d\n", a, b, div2);
  
}
>>>>>>> a5cb925b950f948c58156b1246548851486e9c6f
