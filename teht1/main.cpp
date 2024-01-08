#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    float avg;
    cout<<"Anna 1.luku"<<endl;
    cin>>a;
    cout<<"Anna 2.luku"<<endl;
    cin>>b;
    cout<<"Anna 3.luku"<<endl;
    cin>>c;
    avg=(a+b+c)/3;
    std::cout << std::setprecision(2) << std::fixed;
    cout<<"keskiarvo on "<<avg<<endl;
    return 0;
}
