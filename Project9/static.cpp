////#include <iostream>
////using namespace std;
////
////class A
////{ 
////public:
////	A() { cout << "A's Constructor Called " << endl; }
////};
////
////class B
////{
////	static A a;
////public:
////	B() { cout << "B's Constructor Called " << endl; }
////};
////
////int main()
////{
////	B b;
////	system("PAUSE");
////	return 0;
////}
//
//
////If we try to access static member ‘a’ without an explicit definition of it, we will get a compilation error. For example, the following program fails in the compilation.
////#include <iostream>
////using namespace std;
////
////class A
////{
////	int x;
////public:
////	A() { cout << "A's constructor called " << endl; }
////};
////
////class B
////{
////	static A a;
////public:
////	B() { cout << "B's constructor called " << endl; }
////	static A getA() { return a; }
////};
////
////int main()
////{
////	B b;
////	A a = b.getA();
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//class A
//{
//	int x;
//public:
//	A() { cout << "A's constructor called " << endl; }
//};
//
//class B
//{
//	static A a;
//public:
//	B() { cout << "B's constructor called " << endl; }
//	static A getA() { return a; }
//};
//
//A B::a; // definition of a
//
//int main()
//{
//	B b1, b2, b3;
//	A a = b1.getA();
//
//	return 0;
//}


