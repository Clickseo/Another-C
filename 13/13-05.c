#include <stdio.h>
#include "Node.h"

void  SEARCH(const NODE *head)
{
	int		num, state;
	const NODE	*temp = NULL;

	// 빈 리스트 여부 확인
	if(!head)
	{
		printf("빈 리스트!!! \n");
		return;
	}

	while(TRUE)
	{
		printf("검색할 데이터 (종료: 0) : ");
		scanf("%d", &num);
		fflush(stdin);

		if(num == 0)
			break;

		// 첫 번째 노드부터 맨 마지막 노드까지 검색
		temp = head;
		state = TRUE;

		while(temp != NULL)
		{
			// 찾고자 하는 데이터와 일치 여부 판단
			if(num == temp->data)
			{
				printf("검색 데이터:%3d\n",temp->data);
				state = FALSE;
			}

			// 다음 노드로 이동
			temp = temp->link;
		}

		// 찾고자 하는 데이터가 존재하지 않는 경우...
		if(state == TRUE)
			printf("존재하지 않는 데이터!!! \n");
	}

	return;
}
