// ����ȯ : �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include <stdio.h>


int main() {
    int math = 90, korean = 95, english = 96;
    int sum = math + korean + english;
    // double avg = sum / 3;       //���� / ���� = ����  93.66667 �� �ƴ� 93.00000 ��� 
                                //�Ǽ� / ���� = �Ǽ�
                                //�Ǽ� / �Ǽ� = �Ǽ�
    
    double avg = (double)sum / 3;
    printf("%f\n", avg);
}
//���� + ���� = ����
//���� + �Ǽ� = �Ǽ�
//�Ǽ� + �Ǽ� = �Ǽ�