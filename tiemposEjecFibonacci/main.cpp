//ITERATIVO: Usar siempre que se pueda, por encima de la recursividad
/*
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
unsigned long iterativo (unsigned int n)
{
    int i = 0;
    int j = 1;

    for (int k = 1; k < n; k++){
        int t;
        t = i + j;
        i = j;
        j = t;
    }
    return j;
}

int main()
{
    int num = 10;
    auto start = high_resolution_clock::now();
    cout << "Fibonacci iterativo de " << num << " es " << iterativo(num) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo: "<< duration.count()<< " microseconds" << endl;
    return 0;
}*/

//RECURSIVO
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

unsigned int recursivo(unsigned long n)
{

    if (n>2)
        return recursivo(n-1) + recursivo(n-2);
    else if (n==2)
        return 1;
    else if (n==1)
        return 1;
    else if (n==0)
        return 0;
}

int main()
{
    long num = 10;
    auto start = high_resolution_clock::now();
    cout << "Fibonacci recursivo de " << num << " es " << recursivo(num) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo "<< duration.count()<< " microseconds" << endl;
    return 0;
}