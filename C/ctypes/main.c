#include <stdlib.h>
#include <stdio.h>

int main(void){
	printf("TYPE \t\t Description\t\t\t\tSize (bytes)\n");
	printf("------ \t\t ------------ \t\t\t\t-------------\n");
	printf("char \t\t Byte \t\t\t\t\t %d\n", sizeof(char));
	printf("int \t\t Integer \t\t\t\t %d\n", sizeof(int));
	printf("float \t\t Float with single precision \t\t %d\n", sizeof(float));
	printf("double \t\t Float with double precision \t\t %d\n", sizeof(double));
	printf("short/long int \t Short/large integer \t\t\t %d/%d\n", sizeof(short), sizeof(long int));
	printf("signed char \t Signed number [-128, +127] \t\t %d\n", sizeof(signed char));
	printf("unsigned char \t Positive number [0, 255] \t\t %d\n", sizeof(unsigned char));
	printf("signed int \t Signed integer [-32768, 32767] \t %d\n", sizeof(signed int));
	printf("unsigned int \t Positive integer [0, 65535] \t\t %d\n", sizeof(unsigned int));
	printf("long double \t Float with extended precision \t\t %d\n", sizeof(long double));
}
