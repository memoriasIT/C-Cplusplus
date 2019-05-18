/*
 * main.c
 *
 *  Created on: 15 mar. 2019
 *      Author: memoriasIT
 */


#include <stdio.h>
#include <stdlib.h>

int DELTA = 0x9e3779b9;

// v is an array of 2 unsigned long to be deciphered and k (the key) is an array of 4 unsigned long with the values: {128, 129, 130, 131}.
void decrypt(unsigned long* v, unsigned long* k){
	int sum = 0xC6EF3720;

	// Repeat mechanism for 32 times
	for (int counter = 0; counter < 32; counter++){
		v[1] -= ( (v[0] <<4) + k[2] ) ^ ( v[0] + sum ) ^ ( (v[0] >>5) + k[3]);
		v[0] -= ( (v[1] <<4) + k[0] ) ^ ( v[1] + sum ) ^ ( (v[1] >>5) + k[1]);

		sum -= DELTA;

	}




}


int main(void){
	setbuf(stdout, NULL);
	printf("test");
	char filename[] = "D:\\Descargas\\image01.png";

	// Open the file
	FILE * fin = fopen(filename, "rb");
	if (fin == NULL){
		printf("%s cannot be opened.", filename);
		return -1;
	}

	// Original length is shown in the first 4 bytes
	int originallength;
	fread(&originallength, 4, 1, fin);



	printf("%d", originallength);
	// Length for decryption must be multiple of 8
	int encryptedlength = (originallength+7)/8*8;
	char * memory = (char * ) malloc(encryptedlength);

	// Read file into memory
	fread(memory, encryptedlength, 1, fin);

	printf("test1\n");
	// File must be closed
	fclose(fin);

	printf("fclose\n");
//	exit(-1);
	// Decrypt the memory in blocks of 64 bits
	// v is an array of 2 unsigned long to be deciphered and k (the key) is an array of 4 unsigned long with the values: {128, 129, 130, 131}.
	unsigned long k[] = {128, 129, 130, 131};
	int numblocks = encryptedlength/8;
	unsigned long  *v = (unsigned long*) memory;

	for (int i = 0; i < numblocks; i++){
		decrypt(v, k);
		v += 2;
	}


	printf("teslñjda");

	// Save the memory into the output file
	char outfilename[] = "D:\\Descargas\\output.png";
	FILE * fout = fopen(outfilename, "wb");
	fwrite(memory, originallength, 1, fout);
	fclose(fout);

	printf("antes de free");
	free(memory);
	memory = NULL;

	printf("terminado");
	fflush(stdout);
	return EXIT_SUCCESS;
}
