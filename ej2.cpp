#include <iostream>
#include <string>

using namespace std;

template<class T> T multi(T &x, T &y)
{
    return x*y;
}
class Vector 
{
public : float x , y;
bool operator>(Vector v)
 {
    return Vector(x.x*y.x,x.y*y.y);
 }
};

int main() {
   
Vector v1 = {2, 3};
Vector v2 = {1, 5};
Vector result = v1*v2;

    cout << "el resultado es : "<< result <<endl;

    return 0;
}
