#include <stdio.h>

struct GameObject
{
	char grade; // 1byte
	int x;		// 4byte
	double scale;	// 8byte
};

int main()
{
#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을때 한번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에 
	// 맞딩해주는 최적화 작업입니다.
#pragma endregion

#pragma region 자기 참조 구조체

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct Node = currentNode = &node1;

	while (currentNode != NULL)
	{
		printf("", currentNode->data);
	}

#pragma endregion



	return 0;
}