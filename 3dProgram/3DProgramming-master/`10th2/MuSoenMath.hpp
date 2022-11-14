#include <iostream>

using namespace std;

 //��� ����ü
 struct mat3 {
	 
	 //num ��� ����� �׸�
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
 //���� ����ü
 struct vec3
 {
	 //����Ҷ� ����� �׸�
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
