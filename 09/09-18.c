void  INPUT(SCORE  *p)	// error
{
	int	i;

	for(i=0; i<MAX_SIZE; i++, p++)
	{
		printf("\n %d 번째 학생 성적 입력... \n", i+1);
		printf("학생 이름 : ");	gets(p->name);
		printf("국어 점수 : ");	scanf("%d", &p->kor);
		printf("영어 점수 : ");	scanf("%d", &p->eng);
		printf("수학 점수 : ");	scanf("%d%", &p->math);
		fflush(stdin);

		p->tot = p->kor + p->eng + p->math;
		p->ave = (float)p->tot / 3;
	}

	return;
}
