#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

NODE	*INIT(NODE *head)
{
	NODE	*old = NULL;

	// �� ����Ʈ ���� Ȯ��
	if(!head)
	{
		printf("�� ����Ʈ!!! \n");
		return;
	}

	// ù ��° ������ �� ������ ������ �޸� �ݳ�
	while(head != NULL)
	{
		old = head;
		head = old->link;
		free(old);
	}

	// ù ��° ����� �޸� �ּ� ��ȯ : NULL
	return head;
}
