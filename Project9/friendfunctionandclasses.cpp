//#include<iostream>
//using namespace std;
//
//class EquilateralTriangle
//{
//private:
//	float a;
//	float perimeter;
//	float area;
//
//public:
//	void setA(float length)
//	{
//		a = length;
//		perimeter = a * 3;
//		area = (1.73 * a * a) / 4;
//
//	}
//	/*friend void PrintResults(EquilateralTriangle);*/
//	friend class Homework;
//};
//
////void PrintResults(EquilateralTriangle et)
////{
////	cout << "Perimeter = " << et.perimeter << endl;
////	cout << "Area = " << et.area << endl;
////}
//
//class Homework
//{
//
//public:
//	void PrintResults(EquilateralTriangle et)
//	{
//		cout << "Perimeter = " << et.perimeter << endl;
//		cout << "Area = " << et.area << endl;
//	}
//};
//
//int main()
//{
//	EquilateralTriangle et;
//	et.setA(3);
//	Homework h;
//
//	h.PrintResults(et);
//}