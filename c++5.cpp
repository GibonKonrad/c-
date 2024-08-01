#include<iostream>
using namespace std;
template<typename T>
auto pobierzTab(T* tab)->decltype(tab[0]);
int main()
{
    int tab[5]{1,2,3,4,5};
    double tab2[5]{1,23,3.4,5,2};
    cout<<"Najwieksza"<<pobierzTab(tab2);
    cin.get();
    cin.get();
    return 0;
}
template<typename T>
auto pobierzTab(T* tab)->decltype(tab[0])
{
    T &max=tab[0];
    for(int i=0; i<5; i++)
    {
        if(tab[i]>max)
        {
            max=tab[i];
        }
    }
    return max;
}