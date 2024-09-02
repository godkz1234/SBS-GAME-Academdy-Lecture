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
#pragma region 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는
	// 변수입니다.

	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr로 호출한 값 : %d\n", fptr(10,20));
	// 
	// fptr = Substract;
	// 
	// printf("fptr로 호출한 값 : %d\n", fptr(10, 20));

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이
	// 일치해야 하며, 함수 포인터를 사용하여 동적으로 
	// 메모리를 할당할 수 있습니다.

	// printf("Calculator의 값 : %d\n", Calculator(5,5,Multply));

	// 함수의 호출은 컴파일 시점에 결정되지만, 함수 포인터로 
	// 함수를 호출하게 되면 프로그램이 실행되는 시점에 함수의
	// 이름을 운영체제에 전당하여 함수를 호출할 수 있습니다.

#pragma endregion

#pragma region rand 함수
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.
	// srand(time(NULL));
	// 
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random 변수의 값 : %d\n", random);
#pragma endregion

#pragma region UP - DOWN 게임

	// Life :5 , UI 표시하면 좋음
	// 컴퓨터가 특정값을 가짐( 1 ~ 50 )
	// 플레이어가 맞춰야 되는 게임
	// 틀리면 힌트를 주고 맞추게 하기
	// 작으면 작다고 표현하고 Life 1 감소
	// 크면 크다고 표현하고 Life 1 감소
	// 맞추면 Victory 틀리면 Fail

	// int Computer, Player, Life = 5;
	// srand(time(NULL));
	// Computer = rand() % 50 + 1;
	// 
	// printf("UP - DOWN 게임에 어서오세요\n");
	// printf("당신에게는 %d개의 목숨이 주어집니다.\n", Life);
	// 
	// while (Life > 0)
	// {
	// 	printf("숫자를 입력해주세요 : ");
	// 	scanf("%d", &Player);
	// 
	// 	// printf("컴퓨터가 선택한 숫자: %d\n", Computer);
	// 	// Computer 안에 숫자를 확인하는 용도
	// 	// printf("당신이 입력한 숫자: %d\n", Player);
	// 	// Player 안에 숫자를 확인하는 용도
	// 	if (Player < 1 || Player > 50)  // 1부터 50까지 숫자를 벗어난 숫자를 입력하였을때 나옴
	// 	{
	// 		printf("잘못 입력했습니다.\n 1부터 50까지의 숫자를 입력하세요.\n");
	// 		continue;
	// 	}
	// 
	// 	if (Player < Computer) // 입력숫자가 실제 랜덤숫자보다 작을때
	// 	{
	// 		printf("입력하신 숫자는 실제 숫자보다 작습니다. 다시 입력해주세요.\n");
	// 	}
	// 	else if (Player > Computer) // 입력숫자가 실제 랜덤숫자보다 클때
	// 	{
	// 		printf("입력하신 숫자는 실제 숫자보다 큽니다. 다시 입력해주세요.\n");
	// 	}
	// 	else // 입력숫자와 실제 랜덤숫자가 같을때
	// 	{
	// 		printf("Victory!");
	// 		return 0;
	// 	}
	// 
	// 	Life--;
	// 	if (Life > 0) // 남은 목숨을 알려주는 명령어
	// 	{
	// 		printf("남은 목숨은 %d개 입니다.\n", Life);
	// 	}
	// 	else // 남은 목숨을 다 사용하였을때 사용되는 명령어
	// 	{
	// 		printf("GAME OVER!\n");
	// 		printf("맞춰야하는 숫자는 %d 였습니다.", Computer);
	// 	}
	// 
	// }




#pragma endregion

	return 0;
}