//Carmen Mayhualida Murguia Felipe
//22030200059
//Practica 4. Producto Escalar Triple
#include <iostream>
using namespace std;
int main()
{
	float vector1[2], vector2[2], vector3[2];
	float producto_escalar, vectorI, vectorJ , vectorK;
	int i;
	for  (i = 0; i < 3; i++)
	{
	cout << "valor  del primer vector  "<<endl;
	cin >> vector1[i];
	cout << "valor del segundo vector  " << endl;
	cin  >> vector2[i];
	cout << "valor del tercer vector " << endl;
	cin  >> vector3[i];
	}	
	vectorI = (vector2[1] * vector3[2]) - (vector3[1] * vector2[2]);
	vectorJ = (vector1[1] * vector3[2]) - (vector3[1] * vector1[2]);
	vectorK = (vector1[1] * vector2[2]) - (vector2[1] * vector1[2]);	
	producto_escalar = vectorI - vectorJ + vectorK;
	cout << "El producto escalar es: " << producto_escalar;
}
