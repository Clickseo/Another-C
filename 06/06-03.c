#include <stdio.h>
int main(void)
{
	char	stu_ID[15];		// �й�
	char	name[12];		// �̸�
	char	gender[5];		// ����
	char	tel[15];		// ����ó
	char	addr[50];		// �ּ�

	printf("��  �� : ");				gets(stu_ID);
	printf("��  �� : ");				gets(name);
	printf("��  �� (��: ����) : ");		gets(gender);
	printf("����ó (��: 010-1234-5678) : ");	gets(tel);
	printf("��  �� : ");				gets(addr);

	printf("\n ### �Է� ���� ### \n\n");
	printf("��   �� : ");				puts(stu_ID);
	printf("��   �� : ");				puts(name);
	printf("��   �� : ");				puts(gender);
	printf("����ó : ");				puts(tel); 
	printf("��   �� : ");				puts(addr);

	return 0;
}
