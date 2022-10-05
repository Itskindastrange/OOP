//#include<iostream>
//using namespace std;
//class Data
//{
//private:
//	int* temp;
//	int size;
//public:
//	Data(int s)
//	{
//		size = s;
//		temp = new int[size];
//		temp[0] = 0;
//		
//	}
//
//	int& operator[](int index)
//	{
//		if (index >= 0 && index < size)
//		{
//			return temp[index];
//		}
//		if (index<0 || index>size)
//		{
//			while (index < 0 || index >= size)
//			{
//				cout << "\n Index out of bound. Enter again\n\n";
//				cin >> index;
//			}
//			return temp[index];
//		}
//	}
//		
//};
//
//
//
//int main()
//{
//	Data d1(3);
//	
//	d1[2] = 701;
//	cout << d1[2];
//	
//	/*for (int i = 0; i < 3; i++)
//	{
//		d1[i] = i + 1;
//	}*/
//	
//	/*for (int i = 0; i < 3; i++)
//	{
//		cout << d1[i] << endl;
//	}*/
//	system("pause");
//}