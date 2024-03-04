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

int index_of_max_elements(int* vector, int size) {
	int index = 0;
	
	for (int i = 1; i < size; i++) {
	
		int el = *(vector + i);
		//int el = vector[i];

		if (el > *(vector + index)) {
			index = i;
		}
		//if (el > vector[index]) {
		//	index = i;
		//}
	}
	
	return index;
}

int index_of_min_elements(int* vector, int size) {
	int index = 0;
	for (int i = 1; i < size; i++) {

		int el = *(vector - i);


		if (el < * (vector - index)) {
			index = i;
		}
	
	}
	return index;
}

int proizvidenie_of_max_and_min_elements(int* vector, int size) {
	int proiz = 1;
	int max_index = index_of_max_elements(vector,size);
	int min_index= index_of_min_elements(vector, size);

	if (min_index > max_index) {
		int t = min_index;
		min_index = max_index;
		max_index = t;
	}


	for (int i = min_index; i < max_index; i++) {
		proiz *= *(vector + i);
	}

	return proiz;
}