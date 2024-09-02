#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT; // 대문자로 적어주기

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

	// 열거형에 중간에 있는 값을 바꾸게 되면 그다음에 있는 값은
	// 중간에 바꾼 값에서 부터 +1이 더해서 계산합니다.
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
	// 이미 정해져 있는 예약어를 사용자가 원하는 
	// 이름으로 새롭게 생성하는 것입니다.
	
	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vecotr2 vector2;
	// 
	// Vector2.x = 10;
	// Vector2.y = 20;
	// 
	// printf("x 변수의 값 : %u\n", x);
	// printf("y 변수의 값 : %u\n", y);
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	ptr = (int*)malloc(sizeof(int));
	// }
#pragma endregion

#pragma region 열거형
	// 이름이 지정된 상수 집합을 나타내는 값 형식입니다.
	
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

	// 버튼(1,2,3,4)를 눌렀을때 차례대로 스킬이 나가고
	// 초기 MP가 100
	// Q(구르기) = 10, W(은화살) = 10 , E(선고) = 20; R(결전의 시간) = 30씩 소모
	// MP를 다쓰면 더이상 스킬을 쓸수 없게 해야됨
#pragma endregion

#pragma region 스킬 시스템

	int mana = 100;

	enum Key key = Q;
	
	while (mana > 0)
	{
		scanf_s("%d", &key);

		switch (key)
		{
		case Q : mana -= 10;
			printf("Tumble\n");
			break;
		case W : mana -= 10;
			printf("Silver Bolts\n");
			break;
		case E : mana -= 20;
			printf("Condemn\n");
			break;
		case R : mana -= 30;
			printf("Final Hour\n");
			break;
		default: printf("Exception");
			break;
		}
		
	}
	
#pragma endregion

	return 0;
}