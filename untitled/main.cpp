#include <iostream>
using namespace std;
int wlasciciel;
int przebieg;
void zapisz(istream & os) {
    os  >>wlasciciel;
    os >>przebieg;
}


int main() {
    zapisz();

    return 0;
}