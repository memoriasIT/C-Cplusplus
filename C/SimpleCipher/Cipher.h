/*
 * Cipher.h
 *
 *  Created on: 9 abr. 2019
 *      Author: memoriasIT
 */

#ifndef CIPHER_H_
#define CIPHER_H_

typedef struct TBox *TCifrado;
#define CAMBIA_BIT_POS_0 0
#define CAMBIA_BIT_POS_7 1

struct TBox {
	unsigned char esSBox; 			//verdadero si es una SumaBox, falso si es una XORBox
	unsigned char bitACambiar;		//valor para indicar si en una XORBox se
									//cambia el valor del primer o del �ltimo bit,
									//segun las constantes indicadas arriba
	unsigned char valorASumar; 		//en una SumaBox: valor a sumar
	struct TBox *sig;
};

/* Funci�n necesaria para crear un esquema de cifrado vac�o, sin nodos*/
void crearEsquemaDeCifrado (TCifrado *cf);

/* funci�n que pone un nodo al final de un esquema de cifrado, si es posible. Se debe devolver en el �ltimo par�metro un valor l�gico que sea verdadero si ha sido posible realizar la operaci�n. No se debe suponer que el valor de box.sig es v�lido.*/
void insertarBox (TCifrado * cf, struct TBox box, unsigned char *ok);


/* funci�n que dado un nodo y un valor, devuelve el resultado de aplicar dicho nodo a dicho valor. Deber�s de tener en cuenta si el nodo es una SumaBox o una XORBox. En el �ltimo caso, necesitar�s usar operadores l�gicos a nivel de bit, como &, |, ^ o bien ~, as� como probablemente usar constantes  num�ricas. */
unsigned char aplicarBox (struct TBox box, unsigned char valor);

/* funci�n que toma un esquema de cifrado y un valor, y devuelve el resultado de aplicar dicho esquema de cifrado a dicho valor, seg�n el m�todo descrito anteriormente.*/
unsigned char aplicarEsquemaDeCifrado(TCifrado cf, unsigned char valor);

/* funci�n que toma un nombre de fichero, en el que se escribir�n en modo binario los datos correspondientes al esquema de cifrado que se pasa como par�metro, de modo que el al final el fichero �nicamente contenga dichos datos. Si no se puede abrir el fichero, se debe de mostrar un mensaje de error por pantalla.*/
void escribirAFichero(char *nm, TCifrado cf);

/* funci�n que destruye un esquema de cifrado y libera la memoria que ocupa*/
void destruirEsquemaDeCifrado (TCifrado *cf);

#endif /* CIPHER_H_ */
