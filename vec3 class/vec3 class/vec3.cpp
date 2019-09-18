#include <stdio.h>
#include <iostream>
#include "vec3.h"

using namespace std;

void main() {

	vec3 vector(1, 2, 3);
	vec3 vectorZero;

	vec3 suma(1, 0, 0);
	vec3 vector1(3, 4, 5);
	vec3 vector2(2, 3, 4);
	vec3 resta;
	vec3 vector3(8, 5, 8);
	vec3 vector4(2, 1, 5);
	vec3 igual(100, 100, 100);
	vec3 vector5(8, 8, 8);

	vec3 vectorNormalize(1, 1, 1);
	vec3 vectorToZero(3, 2, 1);
	vec3 vectorDistance;
	vec3 vectorDist1(2, 2, 2);
	vec3 vectorDist2(3, 3, 3);

	suma = vector1 + vector2;

	cout << "SUMA: " << suma.getX() << ", " << suma.getY() << ", " << suma.getZ() << endl;

	resta = vector3 - vector4;

	cout << "RESTA: " << resta.getX() << ", " << resta.getY() << ", " << resta.getZ() << endl;

	igual = vector5;

	cout << "IGUAL: " << igual.getX() << ", " << igual.getY() << ", " << igual.getZ() << endl;


	cout << "FIRST CONSTRUCTOR: " << vector.getX() << ", " << vector.getY() << ", " << vector.getZ() << endl;
	cout << "SECOND CONSTRUCTOR: " << vectorZero.getX() << ", " << vectorZero.getY() << ", " << vectorZero.getZ() << endl;
	
	vectorNormalize.normalize();

	cout << "NORMALIZE VECTOR: " << vectorNormalize.getX() << ", " << vectorNormalize.getY() << ", " << vectorNormalize.getZ() << endl;
	
	vectorToZero.zero();

	cout << "ZERO VECTOR: " << vectorToZero.getX() << ", " << vectorToZero.getY() << ", " << vectorToZero.getZ() << endl;
		
	cout << "DISTANCE TO: " << vectorDistance.distance_to(vectorDist1, vectorDist2) << endl;


	system("pause");
}