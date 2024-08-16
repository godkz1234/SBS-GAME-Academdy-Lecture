﻿#include <stdio.h>
void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감연산자

	// 피연산자를 하나씩 증가시키거나 감소시킬때
	// 사용하는 연산자입니다.

	//int x = 0;
	//int y = 0;

	//int result = ++x;
	//
	//printf("x 변수의 값 : %d\n", x);
	//printf("result 변수의 값 : %d\n", result);
	//
	//result = --x;
	//
	//printf("x 변수의 값 : %d\n", x);
	//printf("result 변수의 값 : %d\n", result);

	//int data = y++;
	//
	//printf("y 변수의 값 : %d\n", y);
	//printf("data 변수의 값 : %d\n", data);
	//
	//data = y--;
	//
	//printf("y 변수의 값 : %d\n", y);
	//printf("data 변수의 값 : %d\n", data);

	// 전위 증감 연산자는 변수의 값을 증감시킨후에
	//연산을 수행하고, 후위 증감 연산자는 연산을 
	//수행한 다음 변수의 값을 증감시킵니다.
#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문 입니다.

	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("hello world %d\n", i);
	//}

	// 반복문의 경우 조건이 끝나는 형태와 반대로 초기식을
	// 연산하게 되면 조건이 일치하지 않아 계속 반복적으로 
	// 실행되는 문제가 발생합니다.
#pragma endregion

#pragma region (1) ~ n까지의 합

	//int sum = 0;
	//int n = 10;
	//
	//for (int i = 1; i <= n; i++)
	//{
	//	sum += i;
	//}
	//printf("sum 변수의 값 = % d\n", sum);

#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진
	// 명령문을 실행하는 반복문입니다.

	//int count = 5;
	//
	//while (count > 0)
	//{
	//	printf("Game Strart\n");
	//
	//	count--;
	//}


#pragma endregion

#pragma region do-while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문입니다.

	//int connect = 0;
	//
	//do
	//{
	//	printf("Login\n");
	//} 
	//while (connect > 5);


#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서
	// 실행하는 제어문입니다.

	//for (int i = 1; i <= 5; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;
	//	}
	//
	//	printf("%d ", i);
	//}



#pragma endregion

#pragma region (2)중 for문

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("♥");
	//	}
	//
	//	printf("♡");
	//}
#pragma endregion

#pragma region 구구단

	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, (i * j));
	//	}
	//	printf("\n");
	//}
#pragma endregion

#pragma endregion

}