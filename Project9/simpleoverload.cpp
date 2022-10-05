//#include<iostream>
//using namespace std;
//class test
//{
//private:
//	int result;
//	int* id;
//	int size;
//	string* subjects;
//	static int students;
//public:
//	test()
//	{
//		result = 0;
//		subjects = NULL;
//		students++;
//	}
//	//test(int r)
//	//{
//	//	result = r;
//	///*
//	//	subjects = new string[5];
//	//	subjects = sub;*/
//	//	students++;
//	//}
//	void setRes(int r)
//	{
//		result = r;
//	}
//	int getRes()
//	{
//		return result;
//	}
//	static int getstd()
//	{
//		return students;
//	}
//	test operator+(test t)
//	{
//		test res;
//		res.result = result + t.result;
//		return res;
//	}
//	test operator-(test t)
//	{
//		test res;
//		/*if(result-t.result>0)*/
//		res.result = result - t.result;
//
//		return res;
//	} 
//	test operator*(test t)
//	{
//		test res;
//		res.result = result * t.result;
//		return res;
//	}
//	test operator/(test t)
//	{
//		test res;
//		res.result = result / t.result;
//		return res;
//	}
//	bool operator==(test t)
//	{
//		if (result == t.result)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator!=(test t)
//	{
//		if (result == t.result)
//		{
//			return false;
//		}
//		else return true;
//	}
//	bool operator<(test t)
//	{
//		if (result< t.result)
//		{
//			return false;
//		}
//		else return true;
//	}
//	bool operator>(test t)
//	{
//		if (result> t.result)
//		{
//			return true;
//		}
//		else return false;
//	}
//	void operator++()
//	{
//		++result;
//	}
//	void operator++(int)
//	{
//		result++;
//	}
//	void operator--()
//	{
//		--result;
//	}
//	void operator--(int)
//	{
//		result--;
//	}
//	int& operator[](int index)
//	{
//		if (index >= 0 && index < size)
//		{
//			return id[index];
//		}
//		else
//		{
//			cout << "Out of bound\n";
//		}
//	}
//	friend ostream& operator<<(ostream& COUT, test& t);
//	friend istream& operator>>(istream& CIN, test& t);
//};
//int test::students = 0;
//ostream& operator<<(ostream& COUT, test& t)
//{
//	COUT <<"The result: " << t.getRes();
//	COUT << "\n";
//	return COUT;
//}
//istream& operator>>(istream& CIN, test& t)
//{
//	CIN >> t.result;
//	return CIN;
//}
//int main()
//{
//	test t1, t2;
//	cin >> t1;
//	cout << "\n";
//	cout << t1;
//	/*cout << "The num of students who took the test: "
//		<< test::getstd() << " .\n";*/
//	/*t1.setRes(5);
//	t2.setRes(6);
//	cout << "The total of results: " << t1.getRes() + t2.getRes() << "\n";
//	cout << "The difference of results: " << t1.getRes() - t2.getRes()<<"\n";
//	cout << t1;
//	cout << "\n";
//	cout << t2;
//	t1++;
//	cout << "\n";
//	cout << t1;
//	t2--;
//	cout << "\n";
//	cout << t2;*/
//
//}