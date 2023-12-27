#include <stdio.h>

void process(unsigned ele, unsigned ls, unsigned range) {
	unsigned i, j, pos;
	char dark[ele];
	for (i = 0; i < ele; i++) dark[i] = 1;

	for (i = 0; i < ls; i++) {
		scanf("%u", &pos);
		unsigned start = pos > range ? pos - range - 1 : 0;
		unsigned end = pos + range - 1 < ele ? pos + range - 1 : ele - 1;
		for (j = start; j <= end; j++) dark[j] = 0;
	}

	unsigned result = 0;
	for (i = 0; i < ele; i++)
		if (dark[i]) {
			result++;
			unsigned end = i + range * 2 < ele ? i + range * 2 : ele - 1;
			for (j = i; j <= end; j++) dark[j] = 0;
		}
	printf("%u\n", result);
}

int main() {
	unsigned ele, ls, range;
	scanf("%u", &ele);
	scanf("%u%*c%u", &ls, &range);
	process(ele, ls, range);
	return 0;
}

