#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct com_number{
    float re;
    float im;
}z3;

void input(com_number *temp){
    cout << "Insert real part ";
    cin >> temp->re;
    cout << "And imaginary part ";
    cin >> temp->im;
}

void calc(com_number *a, com_number *b, com_number *c){
    c->im= a->im+b->im;
    c->re=(a->re)+(b->re);
}

void print(com_number *d){
    cout<< "Result z3 = " << d->re << " + i*" << d->im << endl;
}

int main(){
    int i;
    com_number z[2];
    for (i=0; i<2; i++){
        input(&z[i]);
        cout << "z[" << i << "] = " << z[i].re << " + i*" << z[i].im << endl;
    };
    calc(&z[0],&z[1], &z3);
    print(&z3);
return 0;
}
