#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int health;
	float attack;
	double experience;
};
struct Player {
	int x;
	int y;
};

struct Enemy {
	int x;
	int y;
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Unit unit;
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	//
	// printf("unit�� grade�� �� : %c\n",unit.grade);
	// printf("unit�� health�� �� : %d\n", unit.health);
	// printf("unit�� attack�� �� : %f\n", unit.attack);
	// printf("unit�� gexperience�� �� : %lf\n", unit.experience);

	// ����ü�� �ִ� �����͸� �ʱ�ȭ�� �� ���ʿ� �ִ� �����ͺ���
	// ����ü�� �ִ� �ɹ� ������ ������ �ʱ�ȭ�� �����մϴ�.

	// struct Unit marin = { 'A',60, 6.5f, 36.5 };

	// printf("marin�� grade�� �� : %c\n", marin.grade);
	// printf("marin�� health�� �� : %d\n", marin.health);
	// printf("marin�� attack�� �� : %f\n", marin.attack);
	// printf("marin�� gexperience�� �� : %lf\n", marin.experience);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ 
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

#pragma endregion

#pragma region �� �� ������ �Ÿ�

		// struct Player p1;    
		// struct Enemy  p2;  
		// 
		// 
		// p1.x = 30;
		// p1.y = 30;
		// 
		// 
		// p2.x = 10;
		// p2.y = 10;
		// 
		// double c = sqrt((p1.x - p2.x) + (p1.y - p2.y));    
		// if (c >= 5)
		// {
		// 	printf("���ݹ����� ������ �ʾҽ��ϴ�.\n");
		// }
		// else
		// {
		// 	printf("���ݹ����� ���Խ��ϴ�.\n");
		// }
		// 
		// printf("Player �� Enemy�� �Ÿ� : %f\n", c);

#pragma endregion


	return 0;
}