
#include <iostream>

#include "Vector2D.h"
#include "Vector3D.h"

using namespace std;

void testVector2D();
void testVector3D();

int main()
{
	testVector3D();

	system("pause");
	return 0;
}


void testVector2D()
{

}

void print3D(char *strDesc, const Vector3D& v)
{
	cout<<strDesc<<" X:"<<v.X<<",Y:"<<v.Y<<",Z:"<<v.Z<<endl;
}


void testVector3D()
{
	Vector3D u(1.0, 2.0, 3.0);
	Vector3D v(1.0, 2.0, 3.0);
	Vector3D w(3.0, 0.0, -2.0);

	int k = 10;

	print3D("u+w", u+w);
	print3D("v=u", u = v);
	print3D("v-u", u - v);
	print3D("kw", float(k)*w);
}





