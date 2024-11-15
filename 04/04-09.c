// 함수 정의 : MAX 함수 -- 전달(입력)받은 4개의 정수 중에서 최대값 반환
int	MAX(int a, int b, int c, int d) {
	int	max;

	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;

	return max;
}
