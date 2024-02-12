#include "muusikko.h"

#include <iostream>

using namespace std;

int main()
{
    Muusikko objectMuusikko1;
    objectMuusikko1.setFname("Teppo");
    objectMuusikko1.setLname("Testi");
    objectMuusikko1.setInstrument("Piano");

    cout<<objectMuusikko1.getFname()<<endl;
    cout<<objectMuusikko1.getLname()<<endl;
    cout<<objectMuusikko1.getInstrument()<<endl;

    Muusikko objectMuusikko2("Viljo","Joki","Rummut");
    objectMuusikko2.showData();

    Muusikko *objectMuusikko3;
    objectMuusikko3=new Muusikko("Aino","Virta","Kitara");

    Muusikko *objectMuusikko4=new Muusikko("Liisa","Meri","Basso");
    objectMuusikko3->showData();
    objectMuusikko4->showData();
    delete objectMuusikko3;
    objectMuusikko3=nullptr;
    delete objectMuusikko4;
    objectMuusikko4=nullptr;

    return 0;
}
