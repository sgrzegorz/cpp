#include <iostream>
#include "Figura.h"
#include "Punkt.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Kolo.h"


int main() {
    //Figura *F[10];
    Figura * F[10];
    F[0] = new Kolo("kolo", Punkt(1,2),4);
    F[1] = new Prostokat("prost",Punkt(2,4),1 ,5);
    F[2] = new Kwadrat("kwa",Punkt(5,6),7);


    //std::cout << F[0]->opis();
    return 0;
}