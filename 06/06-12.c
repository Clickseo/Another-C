#include <stdio.h>
#define MAX_SIZE 1024

// ���� ��ҹ��� ���� �Լ� ����
void  String_Change(char *to_string, const char *from_string);

int main(void)
{
	char	str[MAX_SIZE], res[MAX_SIZE];

	printf("���ڿ� �Է� : ");
	gets(str);

	String_Change(res,  str);

	printf("��ȯ�� ���ڿ� : %s \n", res);

	return 0;
}

// �ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� �����ϴ� �Լ�
void  String_Change(char  *to_str,  const  char  *from_str)
{
	// ���ڿ��� ���� �ƴ� �� ���ڰ� �ƴ� ����...
	while(*from_str)
	{
		// ���� �ҹ����� ��� : �빮�ڷ� ����
		if (('a' <= *from_str) && (*from_str <= 'z'))
			*to_str = *from_str - 32;
		// ���� �빮���� ��� : �ҹ��ڷ� ����
		else if (('A' <= *from_str) && (*from_str <= 'Z'))
			*to_str = *from_str + 32;
		// ������ ���ڴ� �״�� ���
		else
			*to_str = *from_str;

		from_str++;
		to_str++;
	}

	// ���ڿ��� ���� �ǹ��ϴ� �� ���� �߰�
	*to_str = '\0';

	return;
}
