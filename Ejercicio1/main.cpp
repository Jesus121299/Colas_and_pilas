#include <iostream>
#include <string>
#include <stdlib.h>
//jsonosnvonfgodnfh


using namespace std;




  struct nod{
            char dato;
            struct nod *siguiente;
        };


        typedef struct nod *Pila;

        Pila creacionNodo(char x)
        {
            Pila nuevo_nodo = new(struct nod);
            nuevo_nodo->dato = x;
            return nuevo_nodo;
        }

        void insertar(Pila &avanzar, char x)
        {
            Pila auxiliar = creacionNodo(x);
            auxiliar->siguiente = avanzar;
            avanzar = auxiliar;
        }


        char extraccion(Pila &avanzar)
        {
            int c ;
            Pila auxiliar;

            auxiliar = avanzar ;
            c = auxiliar->dato;
            avanzar = auxiliar->siguiente ;
            delete(auxiliar);
            return c;
            }




void invertirCadena( Pila &p, string &cadena )
{

     for(int i=0; i<cadena.size(); i++)
          insertar(p, cadena[i]);


     for(int i=0; i<cadena.size(); i++)
          cadena[i] = extraccion( p );

}
//nkjfnsokdngoksngd7
//nlvlksngkdngkdngpkndhpnrh)
///spfnspdgndfpnhpfnghprj

typedef struct nod *Pila;

int main()
{

    Pila pila = NULL;


    string cadena;

    cout<<"Ejercicio 1- Invertir una Cadena";

    cout <<endl<< " Ingrese la cadena: ";
    getline(cin, cadena);

    invertirCadena(pila, cadena);

    cout << endl<<"\tNueva cadena; " << cadena;



}
