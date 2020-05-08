#include <stdio.h>
#include "Node.h"

void  SEARCH(const NODE *head)
{
	int		num, state;
	const NODE	*temp = NULL;

	// �� ����Ʈ ���� Ȯ��
	if(!head)
	{
		printf("�� ����Ʈ!!! \n");
		return;
	}

	while(TRUE)
	{
		printf("�˻��� ������ (����: 0) : ");
		scanf("%d", &num);
		fflush(stdin);

		if(num == 0)
			break;

		// ù ��° ������ �� ������ ������ �˻�
		temp = head;
		state = TRUE;

		while(temp != NULL)
		{
			// ã���� �ϴ� �����Ϳ� ��ġ ���� �Ǵ�
			if(num == temp->data)
			{
				printf("�˻� ������:%3d\n",temp->data);
				state = FALSE;
			}

			// ���� ���� �̵�
			temp = temp->link;
		}

		// ã���� �ϴ� �����Ͱ� �������� �ʴ� ���...
		if(state == TRUE)
			printf("�������� �ʴ� ������!!! \n");
	}

	return;
}
