//-- ARRAY --//

const unsigned MAX = 10; //Define
typedef int TArray[MAX];

TArray Datos;            //Declare
TArray Datos = {0};      //Start them all with value 0

FuncA(const TArray& a);  //Calling - Not going to change array
FuncB(TArray& b);        //Calling - Changin array


//-- STRUCT --//

struct TDatos{            //Define
    TArray Array;
    unsigned index;
};
TDatos Datos;             //Declare
Datos.Array;              //Call
FuncA(TDatos& A);

//-- ITERATE ARRAY --//
for (int i = 0; i < MAX; i++){
    //Code here
}

//-- CIRCULAR ARRAY --//
Noob:
    if (index == MAX) {
        index = 0;
    } else {
        ind++;
    }

Pro:
    index = (index + 1) % MAX;
