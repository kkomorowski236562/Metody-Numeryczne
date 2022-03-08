//
// Created by komor on 08.03.2022.
//

#include "functions.h"
#include <iostream>
#include <cmath>

int choice (double w, int f){
    int x;
    std::cout<<"Wybierz funkcje: \n";
    std::cout<<"1.Sinus \n";
    std::cout<<"2.Cosinus \n";
    std::cout<<"3.Tanges \n";
    std::cout<<"4.Funcja wielomianowa \n";
    std::cout<<"5.Funcja wykladnicza \n\n";
    std::cout<<"Wybor:  ";
    std::cin>>x;
        if(x==1) return sin(w);
        else if(x==1) return cos(w);
        else if(x==2) return tan(w);
        return w;
}

void iterations(int &i){

    system("CLS");
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

double bisection(double a, double b, double E, int &i, int f, int maks){
double acc, fA, x0, fx0;
i=0;
while((i<maks)&&(acc>E)) {
    fA = choice(a, f);
    x0 = (a + b) / 2.0;
    fx0 = choice(x0, f);
    if (fA * fx0 < 0)
        b = x0;
    else
        a = x0;
    i++;
    acc = fabs(fx0);
    std::cout << x0 << "\n";
    std::cout << choice(x0, f) << "\n";
}
return x0;
}

double regulaFalsi(double a, double b, double E, int &i, int f, int maks){
    double acc, fA, fB, x0, fx0;
    i=0;
    while((i<maks)&&(acc>E))
    {
        fA=choice(a,f);
        fB=choice(b,f);
        x0=(a*fB - b*fA)/(fB-fA);
        fx0=choice(x0,f);
        if(fA*fx0<0)
            b=x0;
        else
            a=x0;
        i++;
        acc=fabs(fx0);
    }
}
