#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#define ilosc_ludzi 100

using namespace std;

static string imiona[] = {"Ola","Kasia","Beata","Franek","Arnold"};
static string nazwiska[] = {"Schwartzenegger","Miroslawsi","Wcisło","Poski","Niemiecki"};
int liczba_imion = (int) sizeof(imiona)/sizeof(string);
int liczba_nazwisk = (int) sizeof(nazwiska)/sizeof(string);

class Osoba {
    std::string imie;
    std::string nazwisko;
    int rok_urodzenia;

public:
    Osoba(){
        imie = imiona[rand()%liczba_imion];
        nazwisko = nazwiska[rand()%liczba_nazwisk];
        rok_urodzenia = rand()%61 + 1950;
    }

    string getImie() const{
        return this->imie;
    }
    string getNazwisko() const{
        return this->nazwisko;
    }

    int getRokUrodzenia() const{
        return this->rok_urodzenia;
    }

    friend ostream& operator<< (ostream& stream, const Osoba& obj);
    friend bool operator<(Osoba const &os1, Osoba const&os2);

};

bool operator<(Osoba const &os1, Osoba const&os2){
    string key1=os1.getImie()+os1.getNazwisko();
    string key2=os2.getImie()+os2.getNazwisko();
    return key1<key2;
}

ostream& operator<<(ostream& stream, const Osoba& osoba) {
    stream <<osoba.imie<<" "<<osoba.nazwisko<<" "<<osoba.rok_urodzenia<<endl;
    return stream;

}

void generate(vector <Osoba> &vec,int number_of_elements){
    vec.reserve(number_of_elements);
    for(int i=0;i<number_of_elements;i++){
        vec.push_back(Osoba());
    }
}
void find(vector <Osoba> &vec){
    cout<<"\nOsoby urodzone w roku 2000:\n";
    for (auto & i : vec) {
        if(i.getRokUrodzenia()==2000) cout<< i;

    }
}

void count_if(vector <Osoba> &vec){
    int val;
    bool flag=true;
    while(flag){
        cout<<"\nPodaj rok w zakresie 1950-2010: ";
        cin>>val;
        if(val >=1950 and val <= 2010) flag = false;
    }

    int N=0;
    for(auto &i : vec){
        if(i.getRokUrodzenia() == val) N++;
    }
    cout<<"Liczba osób urodzonych w roku: "<<val<<" wynosi: "<<N<<endl;
}

void sortuj(vector <Osoba> &vec){
    cout<<"\nSortowanie po rok, nazwisko:\n";
    sort(vec.begin(),vec.end(),[](const Osoba &os1,const Osoba &os2){
        if(os1.getRokUrodzenia()!=os2.getRokUrodzenia()){
            return os1.getRokUrodzenia()<os2.getRokUrodzenia();
        }
        return os1.getNazwisko() < os2.getNazwisko();
    });

    for(auto i : vec){
        cout<<i.getRokUrodzenia()<<" "<<i.getNazwisko()<<" "<<i.getImie() <<endl;
    }
}

void unique(vector <Osoba> &vec){
    sort(vec.begin(),vec.end(),[](const Osoba &os1,const Osoba &os2){
        return os1.getNazwisko() < os2.getNazwisko();
    });

    std::vector<Osoba>::iterator it;
    it = unique(vec.begin(),vec.end(),[](const Osoba&os1,const Osoba &os2){

        return os1.getNazwisko()==os2.getNazwisko();
    });
    vec.resize(distance(vec.begin(),it) );
    cout<<"\nUnique surnames:\n";
    for(auto i : vec){ cout<<i; }
}


int main() {
    srand(time(NULL));


//--------------------------------------------------------------------------------------------------------//
 cout<<"\n[4pkt] stwórz kolekcję (vector) wygenerowanych losowo obiektów tej klasy i wypisz zawartość listy korzystając z iteratora:\n";
    vector <Osoba> vec;
    generate(vec,ilosc_ludzi);
    vector <Osoba>::iterator it;

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it;
    }


//--------------------------------------------------------------------------------------------------------//
cout<<"\n[4pkt] stwórz zbiór (set) obiektów z wcześniejszej kolekcji, wypisując obiekty, które się powtórzyły:\n";
    set<Osoba> people;
    int oldsize = people.size();
    for(auto i : vec){
        people.insert(i);
        int newsize =people.size();
        if(oldsize==newsize) cout<<i;
        oldsize =newsize;
    }

//    --------------------------------------------------------------------------------------------------------//
cout<<"\n[4pkt] stwórz mapę (map) wygenerowanych losowo obiektów tej klasy, z zadanym kluczem i wypisz jej zawartość:\n";
    map<string,Osoba> mapa;
    for(int i=0;i<ilosc_ludzi;i++){
        Osoba os = Osoba();
        mapa[os.getImie()+os.getNazwisko()] = os;
    }
    map<string,Osoba>::iterator it1;
    for(it1=mapa.begin();it1!=mapa.end();++it1){
        cout<<it1->first << " => "<<it1->second;
    }

//    --------------------------------------------------------------------------------------------------------//
// wykonaj operacje na kolekcji
    vector <Osoba> vec1;
    generate(vec1,20);
    find(vec1);
    count_if(vec1);
    sortuj(vec1);
    unique(vec1);

    return 0;
}