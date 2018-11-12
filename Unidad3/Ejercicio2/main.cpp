#include <iostream>

using namespace std;

    struct nodo_2{
        int dato;
        nodo_2 *siguiente;
    };

    void agregarPila (nodo_2 *&, int);
    int sacarPila (nodo_2 *&, int &);

    void agregarPila( nodo_2 *&pila,int n)
{
    nodo_2 *nuevo_Nodo=new nodo_2();
    nuevo_Nodo->dato=n;
    nuevo_Nodo->siguiente = pila;
    pila = nuevo_Nodo;



}

int sacarPila(nodo_2 *&pila, int &n)
{
    nodo_2 *aux=pila;
    n=aux->dato;
    pila =aux->siguiente;
    return n;
}


struct Nodo_1{
	int dato;
	Nodo_1 *siguiente;
};

void insertarCola(Nodo_1 *&,Nodo_1 *&,int);
bool cola_vacia(Nodo_1 *);
void suprimirCola(Nodo_1 *&,Nodo_1 *&,int &);



int main()
{

     nodo_2 *pila=NULL;
    int datoP ;
	int dato,datoss;

	Nodo_1 *frente = NULL;
	Nodo_1 *fin = NULL;
	nodo_2 *aux1 =NULL;



	cout << "Cuantos datos desea ingresar: ";
	cin >> datoss;


	for(int i=0; i < datoss; i++){

        cout<<"Ingresa un numero a pila ";
        cin>>datoP;
        agregarPila(pila,datoP);

	}


    aux1=pila;

    while (pila != NULL)
    {

                int auxju;
                auxju=sacarPila(pila,datoP);//auxiliar de extracion
                insertarCola(frente,fin,auxju);//enviando valore de pila a cola
                }
    pila=aux1;

        cout<<"datos de la pila"<<endl;

        while(pila!=NULL){

    sacarPila(pila,datoP);
    cout <<datoP<<endl;

}


cout<<"datos de la cola"<<endl;
   while (frente!=NULL)
{
    suprimirCola(frente,fin,dato);
    cout<<dato<<",";

}




    return 0;
}



void insertarCola(Nodo_1 *&frente,Nodo_1 *&fin,int n){
	Nodo_1 *nuevo_nodo = new Nodo_1();

	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}

	fin = nuevo_nodo;
}



bool cola_vacia(Nodo_1 *frente){
	return (frente == NULL)? true : false;
}


void suprimirCola(Nodo_1 *&frente,Nodo_1 *&fin,int &n){
	n = frente->dato;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}

}
