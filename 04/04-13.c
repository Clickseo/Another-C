// 함수 원형 선언: Factorial 함수 -- 비재귀적 용법(반복적인 용법)
int  Factorial(int  num) {
	int	res = 1;

	for (int i = 1; i <= num; i++)
		res  =  res  *  i;

	return  res;
}
