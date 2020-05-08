#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

NODE	*INIT(NODE *head)
{
	NODE	*old = NULL;

	// 빈 리스트 여부 확인
	if(!head)
	{
		printf("빈 리스트!!! \n");
		return;
	}

	// 첫 번째 노드부터 맨 마지막 노드까지 메모리 반납
	while(head != NULL)
	{
		old = head;
		head = old->link;
		free(old);
	}

	// 첫 번째 노드의 메모리 주소 반환 : NULL
	return head;
}
