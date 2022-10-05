//#include<iostream>
//#include<string>
//using namespace std;
//class Printer
//{
//	string name;
//	int papers;
//public:
//	Printer(string n,int p)
//	{
//		name = n;
//		papers = p;
//	}
//	void print(string test)
//	{
//		int reqPaper = test.length();
//		if (reqPaper>papers)
//			throw "No paper";
//		
//		cout << "\nPrinting..." << test << "\n";
//		papers -= reqPaper;
//	}
//}; 
//
//int main()
//{
//	Printer p1("xyz",10);
//	try
//	{
//		p1.print("abc...."); p1.print("abc...."); p1.print("abc....");
//	}
//	//catch handlers for different types
//	/*catch (const char* txtException)
//	{
//		cout << "Exception" << txtException << endl;
//	}
//	catch (int excode)
//	{
//		cout << "Exception" << excode << endl;
//	}*/
//	catch (...) //default catch handler
//	{
//		cout << "Exception occured\n";
//	}
//}