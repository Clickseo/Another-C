#include <stdio.h>

#define	BASIC_RATE	390	// 기본요금
#define	KW_RATE		57.3	// KW당 사용요금
#define	MIN_CHARGE	1000	// 월 최저요금: 1,000
#define	VAT		0.1	// 부가가치세: 10%
#define	BASE_FUND	0.037	// 전력산업기반기금: 3.7%
#define	TITLE		"당월 전기요금 청구서"

int main(void)
{
	int		fee, vatTax, fundTax, tot;
	double		kwh;

	printf("전기 사용량(kw): ");
	scanf_s("%lf", &kwh);			// scanf("%lf", &kwh);

	// 사용요금 = 기본료 + KW당 사용요금
	fee = (int)(BASIC_RATE + (kwh * KW_RATE));

	// 월 최저요금 적용: 1,000원
	if (fee < 1000)
		fee = 1000;

	// 각종 세금: 부가가치세(10%), 전력산업기반기금(3.7%)
	vatTax = (int)(fee * VAT);
	fundTax = (int)(fee * BASE_FUND);

	// 전기료: 사용요금 + 부가가치세 + 전력산업기반기금
	tot = fee + vatTax + fundTax;

	printf("\n ### %s ###\n\n", TITLE);
	printf("        기본요금: %8d \n", BASIC_RATE);
	printf("   KW당 사용요금: %8.1f \n", KW_RATE);
	printf("      부가가치세: %8.1f%%\n", VAT * 100);
	printf("전력산업기반기금: %8.1f%%\n", BASE_FUND * 100);

	printf("\n 당월 청구요금: %d원 \n", tot);

	return 0;
}
