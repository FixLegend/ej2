#include <iostream>
using namespace std;
// ¯\_(ツ)_/¯

class Vehiculo {
   protected:
      int ruedas;
      int ano;
   public:
     Vehiculo(int n_ano,int n_ruedas){
       ano = n_ano;
       ruedas = n_ruedas;
     }
     void info() {
        cout << "este vehiculo tiene " << ruedas << " ruedas"<< endl;
     }
 };
 class Automovil : public Vehiculo {
   private:
       int puertas;
   public:
        Automovil (int n_ruedas, int n_puertas , int n_ano) : Vehiculo (n_ruedas , n_ano){
        puertas = n_puertas;
       }
       void info() {
          Vehiculo::info();
          cout << "el automovil tiene " << puertas << " puertas"<< endl;
          cout << "este vehiculo es del ano " << ano << endl;
    }
 };

int main() {
    Automovil a(2009, 2, 4);
    a.info();
    return 0;
}
