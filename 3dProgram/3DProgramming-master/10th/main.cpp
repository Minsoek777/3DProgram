#include <iostream>
#include <math.h>
#include "MuSoenMath.hpp"

using namespace std;

void main() {
	
	//���� �ʱ갪 ����
	float r = 30;
	float s;
	
	
	//(3,5)��ŭ �̵�
	mat3 Translate = mat3(1, 0, 0,
		0, 1, 0,
		3, 5, 1);
	//30�� ȸ��
	mat3 Rotate = mat3(cos(r), -sin(r), 0,
		sin(r), cos(r), 0,
		0, 0, 1);
	//2�� ��ŭ Ŀ���� ���
	mat3 Scale = mat3(2, 0, 0,
		0, 2, 0,
		0, 0, 1);\

	//vec3 k = v * Translate * Rotate * Scale;


}
