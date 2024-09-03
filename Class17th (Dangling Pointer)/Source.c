#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT; // �빮�ڷ� �����ֱ�

typedef struct Vector2
{
	int x;
	int y;
}Vector2;

enum State
{
	WALK,
	ATTACK,
	DIE,

	// �������� �߰��� �ִ� ���� �ٲٰ� �Ǹ� �״����� �ִ� ����
	// �߰��� �ٲ� ������ ���� +1�� ���ؼ� ����մϴ�.
};

enum key
{
	Q = 1,
	W,
	E,
	R,
};

int main()
{
#pragma region typedef 
	// �̹� ������ �ִ� ���� ����ڰ� ���ϴ� 
	// �̸����� ���Ӱ� �����ϴ� ���Դϴ�.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vecotr2 vector2;
	// 
	// Vector2.x = 10;
	// Vector2.y = 20;
	// 
	// printf("x ������ �� : %u\n", x);
	// printf("y ������ �� : %u\n", y);
#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	ptr = (int*)malloc(sizeof(int));
	// }
#pragma endregion

#pragma region ������
	// �̸��� ������ ��� ������ ��Ÿ���� �� �����Դϴ�.

	// enum State state = WALK;
	// 
	// switch (state)
	// {
	// case WALK : printf("Walk\n");
	// 	break;
	// case ATTACK : printf("Attack\n");
	// 	break;
	// case DIE : printf("DIe");
	// 	break;
	// default:
	// 	break;
	// }

	// ��ư(1,2,3,4)�� �������� ���ʴ�� ��ų�� ������
	// �ʱ� MP�� 100
	// Q(������) = 10, W(��ȭ��) = 10 , E(����) = 20; R(������ �ð�) = 30�� �Ҹ�
	// MP�� �پ��� ���̻� ��ų�� ���� ���� �ؾߵ�
#pragma endregion

#pragma region ��ų �ý���

	int mana = 100;

	enum Key key = Q;

	while (mana > 0)
	{
		scanf_s("%d", &key);

		switch (key)
		{
		case Q: mana -= 10;
			printf("Tumble\n");
			break;
		case W: mana -= 10;
			printf("Silver Bolts\n");
			break;
		case E: mana -= 20;
			printf("Condemn\n");
			break;
		case R: mana -= 30;
			printf("Final Hour\n");
			break;
		default: printf("Exception");
			break;
		}

	}

#pragma endregion

	return 0;
}