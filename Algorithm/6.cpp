#include <stdio.h>

int main() {
  /*

  //double : 32��Ʈ (4����Ʈ), ������ ��� �� ����
  double a = 5;
  double b = 3;

  double sum1 = a + b;
  double min1 = a - b;
  double mul1 = a * b;
  double div1 = a / b;
  double div2 = a % b;   // 5%3 = 2 ������ ��ȯ

  printf("%f + %f = %f\n", a, b, sum1);
  printf("%f - %f = %f\n", a, b, min1);
  printf("%f * %f = %f\n", a, b, mul1);
  printf("%f / %f = %f\n", a, b, div1);
  printf("%f %% %f = %f\n", a, b, div2);

  */

  //float : 32��Ʈ (4����Ʈ), �Ǽ��� ��� �� ����
  //double : 64��Ʈ (8����Ʈ), �Ǽ��� ��� �� ���� float�� �ι��� ũ��
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

  // �ε��Ҽ���(floating point)
}