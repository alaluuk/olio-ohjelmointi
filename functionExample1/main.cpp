//Tee funktio, joka ottaa vastaan 2 kokonaislukua
//ja palauttaa niiden summan
#include <iostream>

using namespace std;
int calculateSum(int a, int b);

int main()
{
    int x,y,sum;
    cout << "Anna kokonaisluku" << endl;
    cin>>x;
    cout << "Anna toinen kokonaisluku"<<endl;
    cin>>y;
    sum=calculateSum(x,y);
    cout<<"Lukujen summa on "<<sum<<endl;
    return 0;
}

int calculateSum(int a, int b){
    return a+b;
}
