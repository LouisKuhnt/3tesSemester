#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>

class Vector3D {
	float x = 0;
	float y = 0;
	float z = 0;
public:
    Vector3D(float x, float y, float z);
    Vector3D(const Vector3D& vector3D);
    Vector3D() = default;
    ~Vector3D();
    friend Vector3D operator+ (const Vector3D& left, const Vector3D& right);
    friend Vector3D operator+ (const Vector3D& left, float value);
    friend Vector3D operator+ (float value, const Vector3D& right);
    friend Vector3D operator- (const Vector3D& left, const Vector3D& right);
    friend Vector3D operator- (const Vector3D& left, float value);
    friend Vector3D operator- (float value, const Vector3D& right);
    friend std::ostream &operator<<(std::ostream &out, const Vector3D& vector);
    friend Vector3D operator* (const Vector3D& left, float x);
    friend Vector3D operator* (float value, const Vector3D& right);
    friend float operator* (const Vector3D& left, const Vector3D& vector2);
    
};

#endif