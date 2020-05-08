#include <stdio.h>
#include "DNode.h"

void  OUTPUT(DNODE *head)
{
	DNODE	*temp = NULL;

	if(head == NULL)
	{
		printf("빈 리스트!!! \n");
		return;
	}

	// 순방향(첫 번째 노드부터 맨 마지막 노드까지) 출력
	temp = head;
	while(temp != NULL)
	{
		printf("%3d --> ", temp->data);
		temp = temp->Rlink;
	}
	printf(" NULL \n");

	return;
}

void  OUTPUT_rev(DNODE *head)
{
	DNODE	*temp = NULL;

	if(head == NULL)
	{
		printf("빈 리스트!!! \n");
		return;
	}

	// 맨 마직 노드의 위치(주소) 탐색...
	temp = head;
	while(temp->Rlink != NULL)
		temp = temp->Rlink;

	// 역방향(맨 마지막노드부터 첫 번째 노드까지) 출력
	while(temp != NULL)
	{
		printf("%3d --> ", temp->data);
		temp = temp->Llink;
	}
	printf(" NULL \n");

	return;
}
