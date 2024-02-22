#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc < 3) {
		printf("Too few arguments\n");
		printf("Usage: %s <power in Watts> <time in hours>\n", argv[0]);
		return -1;
	}

	double load = atof(argv[1]);
	double hours = atof(argv[2]);

	if (load == 0 || hours == 0) {
		printf("Invalid input.\n");
		printf("Usage: %s <power in Watts> <time in hours>\n", argv[0]);
		return -1;
	}

	double energy = (load / 1000) * hours;
	printf("Energy consumed in %.1fh: %.2fkWh\n", hours, energy);

	return 0;
}
