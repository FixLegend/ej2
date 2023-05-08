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

ParOrd & operator * (const ParOrd &p1, const ParOrd &p2)
{
    return *( new ParOrd (p1.a * p2.a,p1.b * p2.b));

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
    ParOrd D = A * B;
    A.contaObj++;  

    cout<<"c ="<<C.a<<","<<C.b<<"\n";
    cout<<"Contar Cuantos Obejetos totales: "<< B.contaObj<<endl;

    
    cout<<"c ="<<D.a<<","<<D.b<<"\n";
    cout<<"Contar Cuantos Obejetos totales: "<< C.contaObj<<endl;

    return 0;

}
