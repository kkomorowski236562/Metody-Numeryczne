//
// Created by komor on 08.03.2022.
//

#include "functions.h"
#include <iostream>
#include <cmath>

int choice (double w) {
    int x,m,i=0;
    std::cout<<"Ile zlozen funcji wykonac: ";
    std::cin>>m;
    while(i<m) {
        std::cout
                << "Wybierz funkcje: \n1.Sinus \n2.Cosinus \n3.Tanges \n4.Funcja wielomianowa \n5.Funcja wykladnicza \n\nWybor:  ";
        std::cin >> x;
        if (x > 4 || x < 1) std::cout << "Podano zly numer, podaj jeszcze raz \n";
        else if (x == 1) {
            i++;
            sin(w);
        } else if (x == 1) {
            i++;
            cos(w);
        } else if (x == 2) {
            i++;
            tan(w);
        }
    }
        return w;
}

void iterations(int &i){

    std::cout<<"Wprowadz ilosc iteracji.\n";
    std::cout<<"\n Wybor: ";
    std::cin>>i;
}



double horner(double x, double T[], int y){
        int w=T[0];
        for(int i=1;i<=y;i++)
        w=w*x+T[i];
        return w;
}

double bisection(double a, double b, double E, int &i, int maks){
double acc, fa, x0, fx0;
i=0;
while((i<maks)&&(acc>E)) {
    fa = choice(a);
    x0 = (a + b) / 2.0;
    fx0 = choice(x0);
    if (fa * fx0 < 0)
        b = x0;
    else
        a = x0;
    i++;
    acc = fabs(fx0);
    std::cout << x0 << "\n";
    std::cout << choice(x0) << "\n";
}
return x0;
}

double regulaFalsi(double a, double b, double E, int &i, int maks){
    double acc, fa, fb, x0, fx0;
    i=0;
    while((i<maks)&&(acc>E))
    {
        fa=choice(a);
        fb=choice(b);
        x0=(a*fb - b*fa)/(fb-fa);
        fx0=choice(x0);
        if(fa*fx0<0)
            b=x0;
        else
            a=x0;
        i++;
        acc=fabs(fx0);
    }
    return x0;
}
