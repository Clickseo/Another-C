// 버블 정렬 알고리즘
void  bubbleSort(int *pArr, int num) {
	for(int i=0; i<num; i++) {
		for(int j=num-1; j>i; j --)
			if(*(pArr+j) < *(pArr+j-1))
				SWAP(pArr+j, pArr+j-1);
	}
	return;
}
