#include "Vector3D.h"
#include <iostream>
#include <cmath>
//defino como van a ser os novos operadores e as funcións
using namespace std;
Vector3D::Vector3D() {
    x1_=0.;
    x2_=0.;
    x3_=0.;
}

Vector3D::Vector3D(double x1_, double x2_, double x3_) {
    x1_=x1;
    x2_=x2;
    x3_=x3;
}

//operators
//interaction vector-vector
Vector3D operator+(const Vector3D& rhs) const {
    //v+u=(v1+u1,v2+u2,v3+u3)
    double x1=x1_+rhs.x1_;
    double x2=x2_+rhs.x2_;
    double x3=x3_+rhs.x3_;

    return Vector3D(x1,x2,x3)

}

Vector3D operator-(const Vector3D& rhs) const {
    double x1=x1_-rhs.x1_;
    double x2=x2_-rhs.x2_;
    double x3=x3_-rhs.x3_;
    return Vector3D(x1,x2,x3)

}

Vector3D operator=(const Vector3D& rhs) const {
  x1_=rhs.x1_;
  x2_=rhs.x2_;
  x3_=rhs.x3_;
  return *this;
}

Vector3D operator*(const Vector3D& rhs) const {
    return x1_*rhs.x1_+x2_*rhs.x2_+x3_*rhs.x3_;
}


//interaction double-vector
Vector3D Vector3D::operator*(const double& rhs) const {
    return Vector3D (x1_*rhs,x2_*rhs,x3_*rhs);
}
Vector3D Vector3D::operator/(const double& rhs) const {
    return Vector3D (x1_/rhs,x2_/rhs,x3_/rhs);
}

//global functions
Vector3D operator*(const double& lhs, const Vector3D& rhs){
    return Vector3D(lhs*rhs.x1_,lhs*rhs.x2_,lhs*rhs.x3_);
}

Vector3D operator/(const double& lhs, const Vector3D& rhs){
    return Vector3D(rhs.x1_/lhs,rhs.x2_/lhs,rhs.x3_/lhs);
}


// functions
double Vector3D:: magnitude() const {
    return sqrt (pow(x1_,2)+pow(x2_,2)+pow(x3_,2));
}

double Vector3D::theta() const {
    return atan ((sqrt(pow(x1_,2)+pow(x2_,2))/x3_,2);
}

double Vector3D::phi() const {
    return atan(x2_/x1_);
}

// double Vector3D::scalarProduct() {
//     return double (x1_*rhs.x1_+x2_*rhs.x2_+x3_*rhs.x3_);
// }

double angle() {
    return double acos((x1_*rhs.x1_+x2_*rhs.x2_+x3_*rhs.x3_)/Vector3D.magnitude()*Vector3D.magnitude())

Vector3D vectorProduct() {
// Vector3D operator^(const Vector3D& rhs) {
    x1=x2_*rhs.x3_-x3_*rhs.x2_;
    x2=x3_*rhs.x1_-x1_*rhs.x3_;
    x3=x1_*rhs.x2_-x2_*rhs.x1_;
    double x1=x2_*rhs.x3_-x3_*rhs.x2_;
    double x2=x3_*rhs.x1_-x1_*rhs.x3_;
    double x3=x1_*rhs.x2_-x2_*rhs.x1_;
    return Vector3D(x1,x2,x3);
}

void Vector3D::print(const string& vector) const {
    cout << vector << "=(" << x1_ << "," << x2_ << "," << x3_ << ")" <<endl;
}
