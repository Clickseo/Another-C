#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

NODE	*INPUT(NODE *head)
{
	int	num;
	NODE	*new_Node = NULL, *temp = NULL;

	while(TRUE)
	{
		printf("������ ���� �Է� (���� : 0) : ");
		scanf("%d", &num);
		if(num == 0)
			break;

		// ������ ������ ���� ���ο� ��� ����
		new_Node = (NODE  *)malloc(sizeof(NODE));
		if(new_Node == NULL)
		{
			printf("�޸� �Ҵ� ����!!! \n");
			exit(100);
		}

		// ���ο� ����� �����Ϳ� ��ũ �ʵ� �ʱ�ȭ
		new_Node->data = num;
		new_Node->link = NULL;

		// ���ο� ��带 ���� ����Ʈ�� ����
		if(head  ==  NULL)	head  =  new_Node;
		else
		{
			// �� ������ ��� Ž��
			temp  =  head;
			while(temp->link != NULL)
				temp  =  temp->link;

			// ���ο� ��带 �� ������ ��� ������ ����
			temp->link  =  new_Node;
		}
	}

	// ���� �Ǵ� ���� �� ù ��° ����� �޸� �ּ� ��ȯ
	return head;
}
