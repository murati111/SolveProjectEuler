#include<iostream>
int num_reversed(int num) {
	int reverse=0;

	while (num > 0) {
		reverse = num % 10 + reverse * 10;
		num = num / 10;

	}
	return reverse;
}

int FourResult() {
	int max = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			int tmp = i * j;
			if (tmp == num_reversed(tmp)) {
				if(max < tmp) 	max=tmp;
				
			}
		}
	}

	return max;
}