void mx_sort_arr_int(int *arr, int size) {
	int isSorted = 0;
	while(!isSorted) {
		isSorted = 1;
		for(int i = 0; i < size - 1; i++) {
			if(arr[i] > arr[i + 1]) {
				isSorted = 0;
				int buff = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buff;
			}
		}
	}
}


