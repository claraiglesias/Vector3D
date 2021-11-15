#include "Vector3D.h"
#include <iostream>
using namespace std;

int main() {
    Vector3D u(2,3,4);
    Vector3D v(5,6,7);
    cout << "Coordenada x de u = " << u.x1() << endl;
    cout << "Coordenada y de u = " << u.x2() << endl;
    cout << "Coordenada z de u = " << u.x3() << endl;
    cout << "Módulo de u = " << u.magnitude() << endl; //error
    cout << "Phi(v) = " << v.phi() << endl; //error
//  Vector3D q = u*3;
//  cout << "3*u = " << q << endl;
    return 0;
}
