#include<iostream>
#include<cctype>
using namespace std;
void Toupper(string& fraza);
int main()
{
    string fraza="";
    cout<<"Podaj fraze(q-zakoncz)"<<endl;
    cin>>fraza;
    while(fraza!="q")
    {   
        Toupper(fraza);
        cout<<"Twoja fraza: "<<fraza<<endl;
        cout<<"Podaj fraze(q-zakoncz)";
        cin>>fraza;
    }
    if(fraza=="q")
    {
        cout<<"koniec";
    }
    cin.get();
    cin.get();
    return 0;
}
void Toupper(string& fraza)
{
    string wyraz="";
    for(int i=0; i<fraza.size(); i++)
    {
        wyraz+=toupper(fraza[i]);
    }
    fraza=wyraz;
}