int sum_of_negative_elements(int* vector, int size) {
	int summa = 0;
	for (int i = 0; i < size; i++) {
		int el = vector[i];
		if (el < 0) {
			summa = summa + el;
		}
	}
	return summa;
}