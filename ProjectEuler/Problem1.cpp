


int OneResult(int num) {
	int sum = 0;
	for (int i = 0; i < num; i++) {
		if (i % 3 == 0) sum += i;
		else if (i % 5 == 0) sum += i;
	}
	return sum;
}