#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include  <stdlib.h>
#include <time.h>

// int Add(int x, int y)
// {
// 	return x + y;
// }
// 
// int Substract(int x, int y)
// {
// 	return x - y;
// }
// 
// int Multply(int x, int y)
// {
// 	return 5 * 5;
// }
// 
// int Divide(int x, int y)
// {
// 	return 5 / 5;
// }
// 
// int Calculator(int x, int y, int (*fptr)(int, int))
// {
// 	return fptr(x,y);
// }

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ�
	// �����Դϴ�.

	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10,20));
	// 
	// fptr = Substract;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� �������� 
	// �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

	// printf("Calculator�� �� : %d\n", Calculator(5,5,Multply));

	// �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ� 
	// �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ���
	// �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

#pragma endregion

#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.

	// UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
	// srand(time(NULL));
	// 
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);
#pragma endregion

#pragma region UP - DOWN ����

	// Life :5 , UI ǥ���ϸ� ����
	// ��ǻ�Ͱ� Ư������ ����( 1 ~ 50 )
	// �÷��̾ ����� �Ǵ� ����
	// Ʋ���� ��Ʈ�� �ְ� ���߰� �ϱ�
	// ������ �۴ٰ� ǥ���ϰ� Life 1 ����
	// ũ�� ũ�ٰ� ǥ���ϰ� Life 1 ����
	// ���߸� Victory Ʋ���� Fail

	// int Computer, Player, Life = 5;
	// srand(time(NULL));
	// Computer = rand() % 50 + 1;
	// 
	// printf("UP - DOWN ���ӿ� �������\n");
	// printf("��ſ��Դ� %d���� ����� �־����ϴ�.\n", Life);
	// 
	// while (Life > 0)
	// {
	// 	printf("���ڸ� �Է����ּ��� : ");
	// 	scanf("%d", &Player);
	// 
	// 	// printf("��ǻ�Ͱ� ������ ����: %d\n", Computer);
	// 	// Computer �ȿ� ���ڸ� Ȯ���ϴ� �뵵
	// 	// printf("����� �Է��� ����: %d\n", Player);
	// 	// Player �ȿ� ���ڸ� Ȯ���ϴ� �뵵
	// 	if (Player < 1 || Player > 50)  // 1���� 50���� ���ڸ� ��� ���ڸ� �Է��Ͽ����� ����
	// 	{
	// 		printf("�߸� �Է��߽��ϴ�.\n 1���� 50������ ���ڸ� �Է��ϼ���.\n");
	// 		continue;
	// 	}
	// 
	// 	if (Player < Computer) // �Է¼��ڰ� ���� �������ں��� ������
	// 	{
	// 		printf("�Է��Ͻ� ���ڴ� ���� ���ں��� �۽��ϴ�. �ٽ� �Է����ּ���.\n");
	// 	}
	// 	else if (Player > Computer) // �Է¼��ڰ� ���� �������ں��� Ŭ��
	// 	{
	// 		printf("�Է��Ͻ� ���ڴ� ���� ���ں��� Ů�ϴ�. �ٽ� �Է����ּ���.\n");
	// 	}
	// 	else // �Է¼��ڿ� ���� �������ڰ� ������
	// 	{
	// 		printf("Victory!");
	// 		return 0;
	// 	}
	// 
	// 	Life--;
	// 	if (Life > 0) // ���� ����� �˷��ִ� ��ɾ�
	// 	{
	// 		printf("���� ����� %d�� �Դϴ�.\n", Life);
	// 	}
	// 	else // ���� ����� �� ����Ͽ����� ���Ǵ� ��ɾ�
	// 	{
	// 		printf("GAME OVER!\n");
	// 		printf("������ϴ� ���ڴ� %d �����ϴ�.", Computer);
	// 	}
	// 
	// }




#pragma endregion

	return 0;
}