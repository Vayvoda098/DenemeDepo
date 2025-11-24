#include <iostream>

using namespace std;

void Arttir(int adet);
void Azalt(int adet);
void SonsuzDongu(int adet);
int main(int argc, char const *argv[])
{
    string star="*";
    int adet;
    cout<<"Kac tane yildiz olsun: ";
    cin >>adet;
 
    // Arttir(adet);
    // Azalt(adet);
    SonsuzDongu(adet);
    cout<<"\n";
        
   
    return 0;
}
void SonsuzDongu(int adet){
    while (true){
        Arttir(adet);
        Azalt(adet);
    }
}

void Arttir(int adet){
     for (int i = 1; i<=adet; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
}

void Azalt(int adet){
     for (int i = adet -1; 0<i; i--)
    {
        for (int j = i; 0<j; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
}
   