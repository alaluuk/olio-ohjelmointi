#ifndef MUUSIKKO_H
#define MUUSIKKO_H

#include <iostream>
using namespace std;


class Muusikko
{
private:
    string fname;
    string lname;
    string instrument;
public:
    Muusikko();
    Muusikko(string fn, string ln, string in);
    string getFname() const;
    void setFname(const string &newFname);
    void setLname(const string &newLname);
    string getLname() const;
    string getInstrument() const;
    void setInstrument(const string &newInstrument);
    void showData();
};

#endif // MUUSIKKO_H
