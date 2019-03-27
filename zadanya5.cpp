// zadanya5.cpp: определяет точку входа для консольного приложения.
//СРС

#include "stdafx.h"

#include <iostream>
 
using namespace std;
 
class Fraction {
 
protected:
	long x;
unsigned short y;
 
public:
    Fraction() {
        x=0;
        y=0;
    }
 
    void I(long p,unsigned short v) {
        x=p;
        y=v;
    }
        
    void chtenie() {
        cout << "\nvvedite celuy chast: "; cin >> x;
        cout << "vvedite drobnuy chast: "; cin >> y;
    }
 
    void display(){
        cout << x << "." << y << endl;
    }
 
    static void Summa(Fraction a,Fraction b){
        cout << "\nClozhenie ravno: " << a.x+b.x << "."<< a.y+b.y << endl;
    }
 
    static void Vuchitanie(Fraction a,Fraction b){
        cout << "Vuchitanie ravno: " << a.x-b.x << "." << a.y-b.y << endl;
    }
 
    static void Umnozhenie(Fraction a,Fraction b){
        cout << "Umnozhenie ravno: " << a.x*b.x << "." << a.y*b.y << endl;
    }
 
    static void Sravnenie(Fraction a,Fraction b){
        if(a.x==b.x && a.y==b.y)
            { 
                cout << "Ravnu" << endl;
            }
        else {
            if((a.x-b.x)>0){
                cout << "number1 > number2\n\n";
            }
            else {
                cout << "number1 > number2\n\n";
            }
        }
    };
    };
 
int main()
{
    Fraction A, B, C;
    A.chtenie();
    cout << "number1: ";
    A.display();
    B.chtenie();
    cout << "number2: ";
    B.display();
    C.Summa(A,B);
    C.Vuchitanie(A,B);
    C.Umnozhenie(A,B);
    C.Sravnenie(A,B);
    system ("pause");
    return 0;
}
