#include <stdio.h>
#include <string.h>

char	*ID = "Clickseo";		// ����� ���̵�
char	*PASS = "1234";		// ����� ��й�ȣ

int main(void)
{
	char	user_id[12];
	char	user_pass[12];

	printf("���̵� : ");
	gets(user_id);

	// ���̵� ��ġ ���� �Ǵ�
	if(!strcmp(ID, user_id))
	{
		printf("��й�ȣ : ");
		gets(user_pass);

		// ��й�ȣ ��ġ ���� �Ǵ�
		if(!strcmp(PASS, user_pass))
			printf("%s�� ȯ���մϴ�!!! \n", ID);
		else	
			printf("�߸��� ��й�ȣ!!! \n");
	}
	else
		printf("�߸��� ���̵�!!! \n");

	return 0;
}
