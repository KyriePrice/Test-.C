#include <stdio.h>

int main()
{
	printf("Characters: %c %c \n", 98, 60);
	printf("Decimals: %d %ld\n", 1977, 650000L);
	printf("Preceding with blanks: %10d \n", 1977);
	printf("Preceding with zeros: %010d \n", 1977);
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %8.5f %+.5E %E \n", 314159.26, 314159.26, 3.1416);
	printf("Width trick: %*d \n",8, 666);
	printf("%s \n", "A string");

	return 0;
}