#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc < 3) {
		printf("Too few arguments\n");
		printf("Usage: %s <power in Watts> <time in hours>\n", argv[0]);
		return -1;
	}

	int load = atoi(argv[1]);
	int hours = atoi(argv[2]);

	if (load == 0 || hours == 0) {
		printf("Invalid input.\n");
		printf("Usage: %s <power in Watts> <time in hours>\n", argv[0]);
		return -1;
	}

	float energy = ((float)load / 1000) * (float)hours;
	printf("Energy consumed in %dh: %.2fkWh\n", hours, energy);

	return 0;
}
