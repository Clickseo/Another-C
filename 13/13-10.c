#include <stdio.h>
#include <stdlib.h>
#include "DNode.h"

DNODE *INPUT(DNODE *head)
{
	int	num;
	DNODE	*temp = NULL, *new_Node = NULL;

	while(TRUE)
	{
		printf("������ ���� �Է�(����: 0) : ");
		scanf("%d", &num);
		fflush(stdin);

		if(num == 0)
			break;

		// ���ο� ��带 ���� ���� �޸� �Ҵ�
		new_Node = (DNODE *)malloc(sizeof(DNODE));
		if(new_Node == NULL)
		{
			printf("��� ���� ����!!! \n");
			exit(100);
		}

		// ���ο� ����� �����Ϳ� ��ũ �ʵ� �ʱ�ȭ
		new_Node->data = num;
		new_Node->Llink = NULL;
		new_Node->Rlink = NULL;

		// ���ο� ��带 ���� ����Ʈ�� ����
		if(head == NULL)	head = new_Node;
		else
		{
			// ����Ʈ�� �� ������ ��� Ž��
			temp = head;
			while(temp->Rlink != NULL)
				temp = temp->Rlink;

			// ���ο� ��带 �� ������ ���� ����
			temp->Rlink =new_Node;
			new_Node->Llink = temp;
		}
	}

	return head;
}
