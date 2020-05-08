#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

void	OUTPUT(const NODE *head)
{
	const NODE	*temp = NULL;

	// �� ����Ʈ ���� Ȯ��
	if(!head)
	{
		printf("�Էµ� �����Ͱ� �����ϴ�... \n");
		return;
	}

	// ù ��° ������ �� ������ ����� ������ ���
	temp  =  head;
	while(temp != NULL)
	{
		printf("%3d ->>", temp->data);
		temp  =  temp->link;
	}
	printf(" NULL\n\n");

	return;
}
