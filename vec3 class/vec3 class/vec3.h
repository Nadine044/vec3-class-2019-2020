#ifndef _VEC3_H_
#define _VEC3_H_

//template <class tvec>
	
class vec3 {

private:
	float		x, y, z;

public:

	//constructors
	vec3() :x(0), y(0), z(0) {}
	vec3(const float x, const float y, const float z):x(x), y(y), z(z) {}
	
	//destructors
	~vec3() {}

	//functions
	float getX() const { return x; }
	float getY() const { return y; }
	float getZ() const { return z; }

	//operators
	vec3 const operator+(vec3 vec) {
		vec3 result;
		result.x = x + vec.x;
		result.y = y + vec.y;
		result.z = z + vec.z;
		return result;
	}

	vec3 const operator-(vec3 vec) {
		vec3 result;
		result.x = x - vec.x;
		result.y = y - vec.y;
		result.z = z - vec.z;
		return result;
	}

	vec3 const operator=(vec3 vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
		return vec;
	}

	vec3 const operator+=(vec3 vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return vec;
	}

	vec3 const operator-=(vec3 vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return vec;
	}

	bool const operator==(vec3 vec) {
		if (x == vec.x && y == vec.y && z == vec.z) {
			return true; 
		}
		else {
			return false; 
		}
	}

	//methods
	void normalize() {
		float mod = sqrt((x * x) + (y * y) + (z * z));
		x = x / mod;
		y = y / mod;
		z = z / mod;
	}

	void zero() {
		x = y = z = 0;
	}

	float distance_to(vec3 vec1, vec3 vec2) {
		return sqrt((vec2.x - vec1.x)*(vec2.x - vec1.x) + (vec2.y - vec1.y)*(vec2.y - vec1.y) + (vec2.z - vec1.z)*(vec2.z - vec1.z));
	}

};




#endif // !_VEC3_H_
