void  INPUT(SCORE  *p)	// error
{
	int	i;

	for(i=0; i<MAX_SIZE; i++, p++)
	{
		printf("\n %d ��° �л� ���� �Է�... \n", i+1);
		printf("�л� �̸� : ");	gets(p->name);
		printf("���� ���� : ");	scanf("%d", &p->kor);
		printf("���� ���� : ");	scanf("%d", &p->eng);
		printf("���� ���� : ");	scanf("%d%", &p->math);
		fflush(stdin);

		p->tot = p->kor + p->eng + p->math;
		p->ave = (float)p->tot / 3;
	}

	return;
}
