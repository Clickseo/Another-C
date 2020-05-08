#include <stdio.h>
#include <stdlib.h>
#include "NODE.h"

NODE	*DELETE(NODE *head)
{
	int	num;
	NODE	*pre = NULL, *temp = NULL, *old = NULL;

	// �� ����Ʈ ���� Ȯ��
	if(!head)
	{
		printf("�� ����Ʈ!!! \n");
		return;
	}

	while(TRUE)
	{
		printf("������ ������ (����: 0) : ");
		scanf("%d", &num);
		fflush(stdin);
		if(num == 0)
			break;

		// ù ��° ������ �� ������ ������ ��ġ�ϴ� ������ ����
		temp = head;
		while(temp != NULL)
		{
			// ������ �����Ͱ� �����ϴ� ���
			if(temp->data == num)
			{
				// ù ��° ����� ���
				if(temp == head)
					head = temp->link;
				// �߰� �Ǵ� �� ������ ����� ���
				else
					pre->link = temp->link;

				old = temp;
				temp = old->link;

				// ������ ����� �޸� �ݳ�
				free(old);
			}
			// ������ �����Ͱ� �������� �ʴ� ���
			else
			{
				pre = temp;
				temp = temp->link;
			}

		}
	}

	// ���� �Ǵ� ���� �� ù ��° ����� �޸� �ּ� ��ȯ
	return head;
}
