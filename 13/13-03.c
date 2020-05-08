#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

NODE	*INPUT(NODE *head)
{
	int	num;
	NODE	*new_Node = NULL, *temp = NULL;

	while(TRUE)
	{
		printf("임의의 정수 입력 (종료 : 0) : ");
		scanf("%d", &num);
		if(num == 0)
			break;

		// 데이터 저장을 위한 새로운 노드 생성
		new_Node = (NODE  *)malloc(sizeof(NODE));
		if(new_Node == NULL)
		{
			printf("메모리 할당 실패!!! \n");
			exit(100);
		}

		// 새로운 노드의 데이터와 링크 필드 초기화
		new_Node->data = num;
		new_Node->link = NULL;

		// 새로운 노드를 기존 리스트에 연결
		if(head  ==  NULL)	head  =  new_Node;
		else
		{
			// 맨 마지막 노드 탐색
			temp  =  head;
			while(temp->link != NULL)
				temp  =  temp->link;

			// 새로운 노드를 맨 마지막 노드 다음에 연결
			temp->link  =  new_Node;
		}
	}

	// 기존 또는 변경 된 첫 번째 노드의 메모리 주소 반환
	return head;
}
