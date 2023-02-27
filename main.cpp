#include <iostream>

using namespace std;

class nodo{

public:
    int contenido; //valor
    nodo *next; //apuntador

} ;

class Lista {
private:
    nodo *first; //apuntador inicio
    bool empty();

public:
    Lista(); //lista
    void findEnd(int valor);
    void showContent();
};


Lista::Lista(){
    first = NULL;
}


bool Lista::empty(){ //ver si esta vacia la lista
    return first == NULL;
}


void Lista::findEnd(int valor){
    nodo *nuevo = new nodo();
    nuevo->contenido = valor;
    nuevo->next = NULL;

    if (empty()){
        first = nuevo;
    } else{
        nodo *act = first;

        while (act->next != NULL){
            act = act->next; //busca hasta que
        }

        act->next = nuevo;
    }

    }

void Lista::showContent() {
    nodo *act = first;

    cout << " La lista es: "<< endl ;
    while(act != NULL){
        cout << act->contenido << endl ;
        act = act->next;
    }

    cout << "\n"<< endl ;
}


int main() {
    int a;
    int nodoValor;

    Lista listaE;

    do{
        cout << "1. Insertar nuevo \n"<< endl ;
        cout << "2. Imprimir lista \n"<< endl ;
        cout << "3. Salir \n"<< endl ;

        cin >> a;

        switch (a) {
            case 1:
                cout << "Ingresa nuevo"<< endl ;
                cin >> nodoValor;
                listaE.findEnd(nodoValor);
                listaE.showContent();
                break;

            case 2:
                listaE.showContent(); //muestra lista
                break;


        }
    } while(a !=3);

}