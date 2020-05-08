#include <stdio.h>
#include <stdlib.h>
#include "NODE.h"

NODE	*DELETE(NODE *head)
{
	int	num;
	NODE	*pre = NULL, *temp = NULL, *old = NULL;

	// 빈 리스트 여부 확인
	if(!head)
	{
		printf("빈 리스트!!! \n");
		return;
	}

	while(TRUE)
	{
		printf("삭제할 데이터 (종료: 0) : ");
		scanf("%d", &num);
		fflush(stdin);
		if(num == 0)
			break;

		// 첫 번째 노드부터 맨 마지막 노드까지 일치하는 데이터 삭제
		temp = head;
		while(temp != NULL)
		{
			// 삭제할 데이터가 존재하는 경우
			if(temp->data == num)
			{
				// 첫 번째 노드인 경우
				if(temp == head)
					head = temp->link;
				// 중간 또는 맨 마지막 노드인 경우
				else
					pre->link = temp->link;

				old = temp;
				temp = old->link;

				// 삭제할 노드의 메모리 반납
				free(old);
			}
			// 삭제할 데이터가 존재하지 않는 경우
			else
			{
				pre = temp;
				temp = temp->link;
			}

		}
	}

	// 기존 또는 변경 된 첫 번째 노드의 메모리 주소 반환
	return head;
}
