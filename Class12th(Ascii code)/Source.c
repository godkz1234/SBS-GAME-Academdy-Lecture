#include <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Execute\n");
	Execute(count - 1);
	printf("%d\n", count);
}


int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	//Execute(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �˴ϴ�.

#pragma endregion

#pragma region ASCII CODE
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ���� ��ȯ��
	// 7bit ��ȣ ü���Դϴ�.
	// int alphabet = 'A';
	// 
	// for (int i = 0; i < 26;  i++)
	// {
	// 	printf("%c\n", alphabet + i);
	// }



#pragma endregion

#pragma region ��ҹ��� ��ȯ

	// char content[] = "HELLO";
	// // 72,69,76,76,79->104,101,108,108,111
	// for (int i = 0; i < sizeof(content); i++)
	// {
	// 	if ('a' <= content[i] && content[i] <= 'z')
	// 	{
	// 		content[i] = content[i] - 32;
	// 	}
	// 	else if ('A' <= content[i] && content[i] <= 'Z')
	// 	{
	// 		content[i] = content[i] + 32;
	// 	}
	// }
	// printf("%s", content);

#pragma endregion

	return 0;
}