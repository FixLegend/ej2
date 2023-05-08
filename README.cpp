#include <iostream>
#include <string>

using namespace std;
class ParOrd {
public:
   double a , b;
   static int contaObj;

   ParOrd(const double a,const double b)
   {
    this->a = a;
    this->b = b;

   }
};

ParOrd & operator + (const ParOrd &p1, const ParOrd &p2)
{
    return *( new ParOrd (p1.a + p2.a,p1.b + p2.b));

}

ostream& operator << (ostream &o,const ParOrd &p)

{
    o << "(" << p.a << ", " << p.b << ")";

}

int ParOrd::contaObj=0;

int main()
{
    ParOrd A(50, 75);
    A.contaObj++;
    ParOrd B(150, 175);
    A.contaObj++;
    ParOrd C = A + B;
    A.contaObj++; 

    cout<<"A="<<A<<"\n";
    cout<<"B="<<B<<"\n";
    cout<<"C="<<C<<"\n";
    
    cout<<"c ="<<C.a<<","<<C.b<<"\n";
    cout<<"Contar Cuantos Obejetos totales"<< B.contaObj<<endl;
    return 0;
}
