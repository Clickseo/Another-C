#include <stdio.h>
int main(void)
{
	enum TV {AFN = 2, SBS = 6, KBS2 = 7,
	         KBS1 = 9, MBC  = 11, EBS = 13,
	         YTN = 60, MBN = 61, CNN  = 51};

	printf("��ܺ��� TV ä�� ���... \n\n");
	printf("  AFN : %d\n", AFN);
	printf("  SBS : %d\n", SBS);
	printf("  KBS2: %d\n", KBS2);
	printf("  KBS1: %d\n", KBS1);
	printf("  MBC : %d\n", MBC);
	printf("  EBS : %d\n", EBS);
	printf("  YTN : %d\n", YTN);
	printf("  MBN : %d\n", MBN);
	printf("  CNN : %d\n", CNN);

	return 0;
}
