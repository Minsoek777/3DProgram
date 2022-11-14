#include <iostream>

using namespace std;

 //행렬 구조체
 struct mat3 {
	 
	 //num 행렬 담아줄 그릇
	 float num[3][3];

 public:
	 mat3(float a, float b, float c,
		 float d, float e, float f,
		float g, float h, float i ) {
		 num[0][0] = a; num[0][1] = b; num[0][2] = c;
		 num[1][0] = d; num[1][1] = e; num[1][2] = f;
		 num[2][0] = g; num[2][1] = h; num[2][2] = i;
	 }
 };
 //백터 구조체
 struct vec3
 {
	 //계산할때 사용할 그릇
	 float vec[3][1];
	 float ca[3][1];
 public:
	 vec3(float x, float y, float z) {
		 vec[0][0] = x; vec[1][0] = y; vec[2][0] = z;
	 }
	 vec3 operator*(const mat3 m) {
		 vec[0][0] * m.num[0][0] + vec[1][0] * m.num[1][0] + vec[2][0] * m.num[2][0];
		 vec[0][0] * m.num[0][1] + vec[1][0] * m.num[1][1] + vec[2][0] * m.num[2][1];
		 vec[0][0] * m.num[0][2] + vec[1][0] * m.num[1][2] + vec[2][0] * m.num[2][2];

		 
	 }
 };
