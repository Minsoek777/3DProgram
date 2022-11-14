#include <iostream>
#include <math.h>
#include "MuSoenMath.hpp"

using namespace std;

void main() {
	
	//선언 초깃값 설정
	float r = 30;
	float s;
	
	
	//(3,5)만큼 이동
	mat3 Translate = mat3(1, 0, 0,
		0, 1, 0,
		3, 5, 1);
	//30도 회전
	mat3 Rotate = mat3(cos(r), -sin(r), 0,
		sin(r), cos(r), 0,
		0, 0, 1);
	//2배 만큼 커지는 행렬
	mat3 Scale = mat3(2, 0, 0,
		0, 2, 0,
		0, 0, 1);\

	//vec3 k = v * Translate * Rotate * Scale;


}
