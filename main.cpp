#include <iostream>

using namespace std;
void Br();
void MainOut(int karakterS, int satirS, char karakter);
int main()
{
    Br();
    int karakterS, satirS;
    char karakter,exit;
    cout << "Kac adet karakter olsun      :";
    cin >> karakterS;

    cout << "Satir sayisi                 :";
    cin >> satirS;

    cout << "Karakter Ne olsun            :";
    cin >> karakter;

    Br();
    MainOut(karakterS, satirS, karakter);

    cin>>exit;
    return 0;
}
void Br()
{
    for (int i = 0; i < 25; i++)
        cout << "-*";
    cout << "\n";
}
void MainOut(int karakterS, int satirS, char karakter)
{
    if (karakterS < 40 && satirS <= 10)
    {

        for (size_t j = 0; j < satirS; j++)
        {
            for (int i = 0; i < karakterS; i++)
            {
                cout<<karakter;
            }
            cout<<"\n";

        }
        
    }
    else cout<<"40'tan fazla karakter ve 10'dan fazla satir yapamam";
}