//Vector3D
//Neste documento defino os membros da clase, os setters, os getters e os operadores
//que vou a sobrecargar.
#ifndef Vector3D_h
#define Vector3D_h

#include <iostream>

using namespace std;
class Vector3D{
private:
    // data members
    double x1_;
    double x2_;
    double x3_;
public:
    //Constructor
    Vector3D(double x1,double x2,double x3) {
        x1_=x1;
        x2_=x2;
        x3_=x3;
    }

    //getters
    double x1() {return x1_;}
    double x2() {return x2_;}
    double x3() {return x3_;}

    //functions
    double magnitude() const;
    double theta() const;
    double phi() const;
    double scalarProduct() const;
    double vectorProduct() const;
    double angle() const;

    void print(const string& vector) const;

    //setters
    void setx1(double x1) {x1_=x1;}
    void setx2(double x2) {x2_=x2;}
    void setx3(double x3) {x3_=x3;}

    //overloading operators +,-,= between two vectors
    Vector3D operator+(const Vector3D& rhs) const;
    Vector3D operator-(const Vector3D& rhs) const;
    Vector3D operator=(const Vector3D& rhs) const;

    //overloading operators *,/ between vector and double object
    Vector3D operator*(const double& rhs) const;
    Vector3D operator/(const double& rhs) const;

    //global functions
    friend Vector3D operator*(const double& lhs, const Vector3D& rhs);
    friend Vector3D operator/(const double& lhs, const Vector3D& rhs);

};
