#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t		t;
	struct tm	*gmt, *local;

	// time( ) �Լ��� �̿��Ͽ� ���� �ð��� ���Ѵ�.
	t = time(NULL);
	printf("���� GMT: %d \n", t);

	// ���� �ð��� GMT�� ���� ǥ�� �ð����� ��ȯ
	gmt = gmtime(&t);
	local = localtime(&t);

	// tm ����ü�� ����� ���� ������ ���ڿ��� ��ȯ
	//������ ���ڿ� ����: Www Mmm dd hh:mm:ss yyy
	printf("GMT  ǥ�� �ð�: %s \n", asctime(gmt) );
	printf("���� ǥ�� �ð�: %s \n", asctime(local) );

	return 0;
}
