#ifndef DRAWFUNC_H_
#define DRAWFUNC_H_


typedef struct Punto* TPunto;
struct Punto {
	float x;
	float y;
};


typedef struct Lista *TLista;
struct Lista {
	struct Punto pnt;
	TLista* next;
};




void	crearLista(TLista	*lista);

void	insertarPunto(TLista	*lista,	struct	Punto	punto,	int	*ok);

void	eliminarPunto(TLista	*lista,	float	x,	int	*ok);

void	mostrar_lista(TLista	lista);

void	destruir(TLista	*lista);

void	leePuntos(TLista	*lista,char	*	nFichero);


#endif /* DRAWFUNC_H_ */
