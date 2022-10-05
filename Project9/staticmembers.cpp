//#include<iostream>
//using namespace std;
//
//class process
//{
//private:
//	static int count;
//	int p_id;
//public:
//	process()
//	{
//		p_id = 0;
//		count++;
//		
//	}
//	static int getcount()
//	{
//		return count;
//	}
//	void setId(int id)
//	{
//		p_id = id;
//	}
//	process* obj()
//	{
//		process* p = new process();
//		return p;
//	}
//	void display()
//	{
//		cout << "\nProcess count= " << count << " \n";
//		cout << p_id << "\n";
//	}
//};
//
//int process::count = 0;
//int main()
//{
//	////process p1;
//	////p1.setId(7040);
//	/////*p1.obj();*/
//	////p1.display();
//	////p1.setId(9060);
//	////p1.display();
//	////process p2;
//	////p2.setId(5253);
//	////p2.display();
//	////process p3;
//	////p3.setId(1856);
//	//////p3.display();
//	////cout << process::count;
//	//process* ptr = process::obj();
//	//ptr->setId(7898);
//	process p1, p2, p3;
//	cout << process::getcount();
//}