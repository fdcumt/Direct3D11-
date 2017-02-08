
#include <iostream>
#include "Vector2D.h"
#include "utility/common.h"


using namespace std;


int32 main()
{
	FVector2D v1(3.0, 3.0);
	FVector2D v2(2.0, 2.0);
	FVector2D vv = FVector2D::DotProduct(v1, v2);

	cout << vv.X <<"   "<< vv.Y << endl;
	system("pause");
	return 0;

}





