#include<iostream>
using namespace std;
struct Batonik{
    string marka_prod;
    float waga;
    int kalorie;
};
void Change(Batonik &wsk1, const char*wsk2="Millennium Munch", double a=2.85, int b=350);
void Show(Batonik &wsk1);
int main()
{
    Batonik a;
    Change(a,"Kinder",2.90);
    Show(a);
    cin.get();
    cin.get();
    return 0;
}
void Change(Batonik &wsk1, const char*wsk2, double a, int b)
{
    wsk1.kalorie=b;
    wsk1.marka_prod=wsk2;
    wsk1.waga=a;
}
void Show(Batonik &wsk1)
{
    cout<<"Producent: "<<wsk1.marka_prod<<endl<<"Kalorie: "<<wsk1.kalorie<<endl<<"Waga: "<<wsk1.waga<<endl;
}
