#include <stdio.h>
#include <stdlib.h>
#include "DNode.h"

DNODE *INPUT(DNODE *head)
{
	int	num;
	DNODE	*temp = NULL, *new_Node = NULL;

	while(TRUE)
	{
		printf("임의의 정수 입력(종료: 0) : ");
		scanf("%d", &num);
		fflush(stdin);

		if(num == 0)
			break;

		// 새로운 노드를 위한 동적 메모리 할당
		new_Node = (DNODE *)malloc(sizeof(DNODE));
		if(new_Node == NULL)
		{
			printf("노드 생성 실패!!! \n");
			exit(100);
		}

		// 새로운 노드의 데이터와 링크 필드 초기화
		new_Node->data = num;
		new_Node->Llink = NULL;
		new_Node->Rlink = NULL;

		// 새로운 노드를 기존 리스트에 연결
		if(head == NULL)	head = new_Node;
		else
		{
			// 리스트의 맨 마지막 노드 탐색
			temp = head;
			while(temp->Rlink != NULL)
				temp = temp->Rlink;

			// 새로운 노드를 맨 마지막 노드로 연결
			temp->Rlink =new_Node;
			new_Node->Llink = temp;
		}
	}

	return head;
}
