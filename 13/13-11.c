#include <stdio.h>
#include "DNode.h"

void  OUTPUT(DNODE *head)
{
	DNODE	*temp = NULL;

	if(head == NULL)
	{
		printf("�� ����Ʈ!!! \n");
		return;
	}

	// ������(ù ��° ������ �� ������ ������) ���
	temp = head;
	while(temp != NULL)
	{
		printf("%3d --> ", temp->data);
		temp = temp->Rlink;
	}
	printf(" NULL \n");

	return;
}

void  OUTPUT_rev(DNODE *head)
{
	DNODE	*temp = NULL;

	if(head == NULL)
	{
		printf("�� ����Ʈ!!! \n");
		return;
	}

	// �� ���� ����� ��ġ(�ּ�) Ž��...
	temp = head;
	while(temp->Rlink != NULL)
		temp = temp->Rlink;

	// ������(�� ������������ ù ��° ������) ���
	while(temp != NULL)
	{
		printf("%3d --> ", temp->data);
		temp = temp->Llink;
	}
	printf(" NULL \n");

	return;
}
