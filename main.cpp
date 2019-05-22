#include <iostream>
#include <ctime>
#include<cstdlib>


using namespace std;

int main()
{
    /*
    Sprawdzenie prawdopodobieñstwa tego, i¿ suma trzech liczb ze zbioru
    {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}
    jest parzysta pod warunkiem takim, ¿e liczby siê nie powtarzaj¹
    a jedn¹ z wylosowanych jest liczba 5


    */

    int a,b,c;

    double ile=10000000; // Iloœæ losowañ

    srand(time(0));
    int suma=0;
    double  parzyste=0;

    int arr[]={1,2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};



    for(int x=0;x<ile;x++){
        a=5;
        b=arr[rand()%21];
        do{
        c=arr[rand()%21];
        }while(c==b);

        suma=a+b+c;
        if(suma%2==0){
            parzyste++;
        };
    };

    cout<< "Ilosc parzystych wynikow: \n" << parzyste << " z " << ile << " lacznych losowan \n czyli " << (parzyste/ile)*100 << "%";
    return 0;
}
