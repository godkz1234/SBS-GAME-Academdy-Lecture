#include <stdio.h>
void main()
{
#pragma region ����

	// %C�� �ѹ��ڸ� ǥ���ϴ� ���� ������
	// %d�� ������ ǥ���ϴ� ���� ������
	// %f�� �Ǽ��� ǥ���ϴ� ����
	//char alphabet = 'A';
	//int data = 100;
	//float decimal = 3.75f;


	//alphabet = 'B';
	//data = 999;
	//decimal = 5.75f;

	//printf("%c\n", alphabet);
	//printf("%d\n", data);
	//printf("%f\n", decimal);
#pragma endregion


#pragma region ���

	// ���α׷��� ����Ǵ� ���� �� �̻� ������ ��  ����
	// �޸� �����Դϴ�.

	const float pi = 3.14f;

	// ����� �޸� ������ �����ϴ� ���ÿ� �ʱ�ȭ�ؾ� �ϸ�,
	// �� �� ����� ���� �� �̻� ������ �� �����ϴ�.

	//pi = 6.66f;

	// ����� ��� �޸� ������ ������ ���� ���� ����� ���ͷ�
	// ������ �ϸ�, �޸� ������ ������ �ִ� ����� �ɺ��� ������ �մϴ�.

	// + - * / %
	// 1. ���� (result1) = ���� + ����
	// 2. ���� (result2) = ���� - ���ͷ� ���
	// 3. ���� (result3) = ���� * �ɺ��� ���
	// 4. ���� (result4) = ���ͷ� ��� / �ɺ��� ���
	// 5. ���� (result5) = �ɺ��� ��� % �ɺ��� ���

	int A = 30;
	int B = 20;
	const int C = 6;
	const int D = 10;

	int result1 = A + B;
	int result2 = B - 12;
	int result3 = B * C;
	int result4 = 10 / C;
	int result5 = C % D;



	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);
	printf("%d\n", result5);
#pragma endregion

}
