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
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Unit unit;
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	//
	// printf("unit의 grade의 값 : %c\n",unit.grade);
	// printf("unit의 health의 값 : %d\n", unit.health);
	// printf("unit의 attack의 값 : %f\n", unit.attack);
	// printf("unit의 gexperience의 값 : %lf\n", unit.experience);

	// 구조체에 있는 데이터를 초기화할 때 왼쪽에 있는 데이터부터
	// 구조체에 있는 맴버 변수의 순서로 초기화를 진행합니다.

	// struct Unit marin = { 'A',60, 6.5f, 36.5 };

	// printf("marin의 grade의 값 : %c\n", marin.grade);
	// printf("marin의 health의 값 : %d\n", marin.health);
	// printf("marin의 attack의 값 : %f\n", marin.attack);
	// printf("marin의 gexperience의 값 : %lf\n", marin.experience);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.

#pragma endregion

#pragma region 두 점 사이의 거리

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
		// 	printf("공격범위에 들어오지 않았습니다.\n");
		// }
		// else
		// {
		// 	printf("공격범위에 들어왔습니다.\n");
		// }
		// 
		// printf("Player 와 Enemy의 거리 : %f\n", c);

#pragma endregion


	return 0;
}