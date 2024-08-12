#include <stdio.h>
void main()
{
#pragma region 변수

	// %C는 한문자를 표현하는 서식 지정자
	// %d는 정수를 표현하는 서식 지정자
	// %f는 실수를 표현하는 서식
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


#pragma region 상수

	// 프로그램이 실행되는 동안 더 이상 변경할 수  없는
	// 메모리 공간입니다.

	const float pi = 3.14f;

	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.

	//pi = 6.66f;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴
	// 상수라고 하며, 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.

	// + - * / %
	// 1. 변수 (result1) = 변수 + 변수
	// 2. 변수 (result2) = 변수 - 리터럴 상수
	// 3. 변수 (result3) = 변수 * 심볼릭 상수
	// 4. 변수 (result4) = 리터럴 상수 / 심볼릭 상수
	// 5. 변수 (result5) = 심볼릭 상수 % 심볼릭 상수

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
