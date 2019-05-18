/*
 * File.c
 *	Copy a monochrome bitmap in negative (0 -> 1 and viceversa)
 *  Created on: 14 mar. 2019
 *      Author: memoriasIT
 */

#include <stdlib.h>
#include <stdio.h>
#define SIZE 1024

int main(void){
	int ok=1, taken, written;
	char buffer[SIZE];
	FILE *fin,*fout;

	fin= fopen("D:\\Escritorio\\Projects\\Programming\\C\\Files\\input.bmp","rb");/* Control of errors not shown*/

	if (fin == NULL){
		printf("Some error opening the file");
		return -1;
	}

	fout= fopen("D:\\Escritorio\\Projects\\Programming\\C\\Files\\output.bmp","wb");

	// Skip bmp header
	fread(buffer, 1, 14, fin);
	fwrite(buffer, 1, 14, fout);

	// Skin info header
	fread(buffer, 1, 40, fin);
	fwrite (buffer, 1, 40, fout);

	// Skip color table (4 bits per color, 2 colors)
	fread(buffer, 1, 8, fin);
	fwrite(buffer, 1, 8, fout);

	while (ok && (taken = fread(buffer, 1, sizeof(buffer), fin))>0) {
		// Changes 0 to 1 and viceversa
		written = fwrite(buffer, 1, taken, fout);
		ok = written == taken;
	}
	fclose(fin);
	fclose(fout);

}

