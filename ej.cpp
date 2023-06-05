//███╗░░░███╗░█████╗░██╗░░░██╗
//████╗░████║██╔══██╗██║░░░██║
//██╔████╔██║███████║██║░░░██║
//██║╚██╔╝██║██╔══██║██║░░░██║
//██║░╚═╝░██║██║░░██║╚██████╔╝
//╚═╝░░░░░╚═╝╚═╝░░╚═╝░╚═════╝░
#include <iostream>
#include <string>
using namespace std;

template <typename T>

T minimo(T _a,T _b)
{
if
    return _a < _b ? _a : _b;
else
    return _a > _b ? _b : _a;
}

int main() {
  int a,b,i,c;

  cin >> a;
  cin >> b;
  i =minimo<int>(a,b);
  c =minimo<int>(a,b);
  
  cout << "el minimo es" <<i<<endl;
  cout << "el maximo es" <<c<<endl;
  float fa,fb,fi;
  cin >> fa;
  cin >> fb;
  fi = minimo<float>(fa,fb);
  cout << "el minimo es" <<fi <<endl;
  return 0;
}
