#include <stdio.h>

#define	BASIC_RATE	390		// �⺻���
#define	KW_RATE	57.3		// KW�� �����
#define	MIN_CHARGE	1000		// �� �������: 1,000
#define	VAT		0.1		// �ΰ���ġ��: 10%
#define	BASE_FUND	0.037		// ���»����ݱ��: 3.7%
#define	TITLE		"��� ������ û����"

int main(void)
{
	int		fee, vat_tax, fund_tax, tot;
	double		kwh;

	printf("���� ��뷮(kw): ");
	scanf("%lf", &kwh);

	// ����� = �⺻�� + KW�� �����
	fee = (int)(BASIC_RATE + (kwh  *  KW_RATE));

	// �� ������� ����: 1,000��
	if(fee < 1000)
		fee = 1000;

	// ���� ����: �ΰ���ġ��(10%), ���»����ݱ��(3.7%)
	vat_tax = (int)(fee * VAT);
	fund_tax = (int)(fee * BASE_FUND);

	// �����: ����� + �ΰ���ġ�� + ���»����ݱ��
	tot  =  fee + vat_tax + fund_tax;

	printf("\n ### %s ###\n\n", TITLE);
	printf("        �⺻���: %8d \n", BASIC_RATE);
	printf("   KW�� �����: %8.1f \n", KW_RATE);
	printf("      �ΰ���ġ��: %8.1f%%\n", VAT * 100);
	printf("���»����ݱ��: %8.1f%%\n", BASE_FUND * 100);

	printf("\n ��� û�����: %d�� \n", tot);

	return 0;
}
