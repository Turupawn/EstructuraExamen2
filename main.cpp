#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;

//////////////////////////////////////
////////////ARBOL TRINARIO////////////
//////////////////////////////////////
class NodoTrinario
{
public:
    NodoTrinario* hijo_izq;
    NodoTrinario* hijo_der;
    NodoTrinario* hijo_medio;
    int num;
    NodoTrinario(int num)
    {
        this->num=num;
        hijo_der=NULL;
        hijo_izq=NULL;
        hijo_medio=NULL;
    }
};

//////////////////////////////////////
////////////GRAFO PONDERADO///////////
//////////////////////////////////////

class NodoGrafo;
class AristaGrafo
{
public:
    int distancia;//peso
    NodoGrafo* destino;

    AristaGrafo(int distancia, NodoGrafo* destino)
    {
        this->distancia=distancia;
        this->destino=destino;
    }
};

class NodoGrafo
{
public:
    list<AristaGrafo*> aristas;
    int num;

    NodoGrafo(int num)
    {
        this->num=num;
    }
};

int main ()
{
//////////////////////////////////////
////////////ARBOL TRINARIO////////////
//////////////////////////////////////

    NodoTrinario *nt1 = new NodoTrinario(1);
    NodoTrinario *nt2 = new NodoTrinario(2);
    NodoTrinario *nt3 = new NodoTrinario(3);
    NodoTrinario *nt4 = new NodoTrinario(4);
    NodoTrinario *nt5 = new NodoTrinario(5);
    NodoTrinario *nt6 = new NodoTrinario(6);
    NodoTrinario *nt7 = new NodoTrinario(7);
    NodoTrinario *nt8 = new NodoTrinario(8);
    NodoTrinario *nt9 = new NodoTrinario(9);

    nt1->hijo_der = nt2;
    nt1->hijo_izq = nt3;
    nt1->hijo_medio = nt4;

    nt2->hijo_der = nt5;
    nt2->hijo_medio = nt6;

    nt4->hijo_izq = nt7;

    nt7->hijo_medio = nt8;
    nt7->hijo_izq = nt9;


//////////////////////////////////////
////////////GRAFO PONDERADO///////////
//////////////////////////////////////

    NodoGrafo *ng1 = new NodoGrafo(1);
    NodoGrafo *ng2 = new NodoGrafo(2);
    NodoGrafo *ng3 = new NodoGrafo(3);
    NodoGrafo *ng4 = new NodoGrafo(4);
    NodoGrafo *ng5 = new NodoGrafo(5);
    NodoGrafo *ng6 = new NodoGrafo(6);

    ng1->aristas.push_back(new AristaGrafo(5,ng2));
    ng1->aristas.push_back(new AristaGrafo(3,ng3));
    ng2->aristas.push_back(new AristaGrafo(2,ng4));
    ng4->aristas.push_back(new AristaGrafo(6,ng5));

    return 1;
}
