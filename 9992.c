void bubbleSort(double list[], int size) {
	int i, j;
	double tem;
	for (i = 0; i < size; i++) {
		for (j = size - 1; j > i; j--) {
			if (list[j] < list[j - 1]) {
				tem = list[j];
				list[j] = list[j - 1];
				list[j - 1] = tem;
			}
		}
	}
}
