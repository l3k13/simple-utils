#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printf("Too few arguments\n");
		printf("Usage: %s <NVME status code>\n", argv[0]);
		return -1;
	}

	long code = strtol(argv[1], NULL, 16);

	if (code == 0) {
		printf("Invalid input.\n");
		printf("Usage: %s <NVME status code>\n", argv[0]);
		return -1;
	}

	int nophase = code >> 1;
	printf("Code with phase removed: %x\n", nophase);
	printf("masked status: %x\n", nophase & 0x7ff);


	return 0;
}
