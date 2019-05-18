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
									//cambia el valor del primer o del último bit,
									//segun las constantes indicadas arriba
	unsigned char valorASumar; 		//en una SumaBox: valor a sumar
	struct TBox *sig;
};

/* Función necesaria para crear un esquema de cifrado vacío, sin nodos*/
void crearEsquemaDeCifrado (TCifrado *cf);

/* función que pone un nodo al final de un esquema de cifrado, si es posible. Se debe devolver en el último parámetro un valor lógico que sea verdadero si ha sido posible realizar la operación. No se debe suponer que el valor de box.sig es válido.*/
void insertarBox (TCifrado * cf, struct TBox box, unsigned char *ok);


/* función que dado un nodo y un valor, devuelve el resultado de aplicar dicho nodo a dicho valor. Deberás de tener en cuenta si el nodo es una SumaBox o una XORBox. En el último caso, necesitarás usar operadores lógicos a nivel de bit, como &, |, ^ o bien ~, así como probablemente usar constantes  numéricas. */
unsigned char aplicarBox (struct TBox box, unsigned char valor);

/* función que toma un esquema de cifrado y un valor, y devuelve el resultado de aplicar dicho esquema de cifrado a dicho valor, según el método descrito anteriormente.*/
unsigned char aplicarEsquemaDeCifrado(TCifrado cf, unsigned char valor);

/* función que toma un nombre de fichero, en el que se escribirán en modo binario los datos correspondientes al esquema de cifrado que se pasa como parámetro, de modo que el al final el fichero únicamente contenga dichos datos. Si no se puede abrir el fichero, se debe de mostrar un mensaje de error por pantalla.*/
void escribirAFichero(char *nm, TCifrado cf);

/* función que destruye un esquema de cifrado y libera la memoria que ocupa*/
void destruirEsquemaDeCifrado (TCifrado *cf);

#endif /* CIPHER_H_ */
