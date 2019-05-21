int TwoResult(int num) {
	int a = 0;
	int b = 1;
	int value = a+2*b;
	int sum = 0;
	while(value <= num) {
		sum += value;
		b = 2 * a + 3 * b;
		a = value;
		value = a + 2 * b;
	}
	return sum;
}