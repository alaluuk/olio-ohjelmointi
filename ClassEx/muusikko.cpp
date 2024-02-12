#include "muusikko.h"

string Muusikko::getFname() const
{
    return fname;
}

void Muusikko::setFname(const string &newFname)
{
    fname = newFname;
}

void Muusikko::setLname(const string &newLname)
{
    lname = newLname;
}

string Muusikko::getLname() const
{
    return lname;
}

string Muusikko::getInstrument() const
{
    return instrument;
}

void Muusikko::setInstrument(const string &newInstrument)
{
    instrument = newInstrument;
}

void Muusikko::showData()
{
    cout<<fname<<" "<<lname<<" "<<instrument<<endl;
}

Muusikko::Muusikko()
{

}

Muusikko::Muusikko(string fn, string ln, string in)
{
    fname=fn;
    lname=ln;
    instrument=in;
}
