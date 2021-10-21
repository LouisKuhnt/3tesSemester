#include "Vector3D.h"
#include <iostream>

    Vector3D::Vector3D(float x, float y, float z) {
		this->x = x; this->y = y; this->z = z;
	}

	Vector3D::Vector3D(const Vector3D& vector3D) {
		std::cout << "Kopierkonstruktor wurde aufgerufen!" << std::endl;
		x = vector3D.x;
		y = vector3D.y;
		z = vector3D.z;
	}

	Vector3D::~Vector3D() {
		std::cout << "Destruktor wurde aufgerufen!" << std::endl;
	}

	Vector3D operator+ (const Vector3D& left, const Vector3D& right){
		Vector3D result(left.x + right.x, left.y + right.y, left.z + right.z);
		return result;
	}

	Vector3D operator+ (const Vector3D& left, float value) {
		Vector3D result(left.x + value, left.y + value, left.z + value);
		return result;
	}
	Vector3D operator+ (float value, const Vector3D& right) {
		Vector3D result(value+right.x, value+right.y, value+right.z);
		return result;
	}

	Vector3D operator- (const Vector3D& left, const Vector3D& right) {
		Vector3D result(left.x - right.x, left.y - right.y, left.z - right.z);
		return result;
	}

	Vector3D operator- (const Vector3D& left, float value) {
		Vector3D result(left.x - value, left.y - value, left.z - value);
		return result;
	}
	Vector3D operator- (float value, const Vector3D& right) {
		Vector3D result(value-right.x, value-right.y, value-right.z);
		return result;
	}

	std::ostream &operator<<(std::ostream &out, const Vector3D& vector) {
		out << "Vector : (" << vector.x << ", " << vector.y << ", " << vector.z << ")";
		return out;
	}

	Vector3D operator* (const Vector3D& left, float x) {
		Vector3D result(left.x*x, left.y*x, left.z*x);
		return result;
	}
	
	Vector3D operator* (float value, const Vector3D& right) {
		Vector3D result(value*right.x, value*right.y, value*right.z);
		return result;
	}

	float operator* (const Vector3D& left, const Vector3D& right) {
		float result = left.x*right.x + left.y*right.y + left.z*right.z;
		return result;
	}
	
int main() {
	Vector3D vector = Vector3D(1, 2, 3);
	Vector3D vector1 = Vector3D(4, 5, 6);

	Vector3D vectorKopie = vector;
	Vector3D vector1Kopie = vector1;

	Vector3D ergebnis = Vector3D();
	float ergebnisF;

	ergebnis = vectorKopie+vector1Kopie;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = vectorKopie+1.0;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = 1.0+vectorKopie;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = vectorKopie-vector1Kopie;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = vectorKopie-2.0;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = 2.0+vectorKopie;
	std::cout << ergebnis << std::endl;
	//------------------------------
    ergebnis = vectorKopie*5.0;
    std::cout << ergebnis << std::endl;
    //------------------------------
    ergebnis = 5.0*vectorKopie;
    std::cout << ergebnis << std::endl;
    //------------------------------
    ergebnisF = vectorKopie*vector1Kopie;
    std::cout << ergebnisF << std::endl;
    
	return 0;
}