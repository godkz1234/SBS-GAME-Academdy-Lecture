#include <stdio.h>

struct GameObject
{
	char grade; // 1byte
	int x;		// 4byte
	double scale;	// 8byte
};

int main()
{
#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ������ �ѹ���
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ� 
	// �µ����ִ� ����ȭ �۾��Դϴ�.
#pragma endregion

#pragma region �ڱ� ���� ����ü

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