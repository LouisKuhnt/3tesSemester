#include <iostream>

//Ist es nötig den Kopierkonstruktor, den Destruktor, den Zuweisungsoperator oder einen Vergleichsoperator zu definieren? 
//Durch die vermehrten Aufrufe und veränderungen an dem Potentiellen Original ist ein Kopierkonstruktor eine gute und nötige eigenschafft des Programmes.
//Einen Destruktor zu haben ist immer ganz gut, aber hier nicht "unbedingt" nötig.
//Der Vergleichsoperator ist sehr nützlich um die speziellen Objekte mit einander zu vergleichen ohne immer einen Workaround zu implementierem.

class Vector3D {
	float x = 0;
	float y = 0;
	float z = 0;
public:
	Vector3D(float x, float y, float z) {
		this->x = x; this->y = y; this->z = z;
	}

	Vector3D(const Vector3D& vector3D) {
		std::cout << "Kopierkonstruktor wurde aufgerufen!" << std::endl;
		x = vector3D.x;
		y = vector3D.y;
		z = vector3D.z;
	}

	Vector3D() = default;

	~Vector3D() {
		std::cout << "Destruktor wurde aufgerufen!" << std::endl;
	}

	Vector3D operator+ (const Vector3D& right){
		Vector3D result(this->x + right.x, this->y + right.y, this->z + right.z);
		return result;
	}

	Vector3D operator+ (int value) {
		Vector3D result(this->x + value, this->y + value, this->z + value);
		return result;
	}

	Vector3D operator- (const Vector3D& right) {
		Vector3D result(this->x - right.x, this->y - right.y, this->z - right.z);
		return result;
	}

	Vector3D operator- (int value) {
		Vector3D result(this->x - value, this->y - value, this->z - value);
		return result;
	}

	friend std::ostream &operator<<(std::ostream &out, const Vector3D& vector) {
		out << "Vector : (" << vector.x << ", " << vector.y << ", " << vector.z << ")";
		return out;
	}

	Vector3D operator* (float x) {
		Vector3D result(this->x*x, this->y*x, this->z*x);
		return result;
	}

	float operator* (const Vector3D& vector2) {
		float result = this->x*vector2.x + this->y*vector2.y + this->z*vector2.z;
		return result;
	}
};

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
	ergebnis = vectorKopie+1;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = vectorKopie-vector1Kopie;
	std::cout << ergebnis << std::endl;
	//------------------------------
	ergebnis = vectorKopie-2;
	std::cout << ergebnis << std::endl;
	//------------------------------
    ergebnis = vectorKopie*5;
    std::cout << ergebnis << std::endl;
    //------------------------------
    ergebnisF = vectorKopie*vector1Kopie;
    std::cout << ergebnisF << std::endl;
    
	return 0;
}