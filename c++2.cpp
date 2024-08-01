#include<iostream>
void function(char* wyraz, int & licznik, int i=0);
int main()
{
    using namespace std;
    int licznik=0;
    char wyraz[6]="mazur";
    char* wskaznik=wyraz;
    function(wskaznik,licznik);
    function(wskaznik,licznik,1);
    cin.get();
    cin.get();
    return 0;
}
void function(char* wyraz, int & licznik, int i)
{
    licznik++;
    if(i!=0)
    {
        for(int i=0; i<licznik; i++)
        {
            std::cout<<wyraz<<std::endl;
        }
    }
    
}