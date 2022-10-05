//#include<iostream>
//using namespace std;
//
//class Smartphone
//{
//public:
//	virtual void TakeAPic() = 0;
//	virtual void MakeACall() = 0;
//	virtual void Message() = 0;
//
//};
//
//class Android :public Smartphone
//{
//public:
//	void TakeAPic()
//	{
//		cout << "Pic has been taken from Android Smartphone.\n";
//	}
//	void MakeACall()
//	{
//		cout << "Android Calling\n";
//	}
//	void Message()
//	{
//		cout << "Message Sent\n";
//	}
//};
//class Iphone :public Smartphone
//{
//public:
//	void TakeAPic()
//	{
//		cout << "Pic has been taken from IOS Smartphone.\n";
//	}
//	void MakeACall()
//	{
//		cout << "IPhone calling\n";
//	}
//	void Message()
//	{
//		cout << "Message Sent\n";
//	}
//};
//
//int main()
//{
//	Smartphone* s1 = new Android();
//	Smartphone* s2 = new Iphone();
//
//	Smartphone* smartphone[2] = { s1,s2 };
//	for (int i = 0; i < 2; i++)
//	{
//		smartphone[i]->TakeAPic();
//
//		smartphone[i]->MakeACall();
//		smartphone[i]->Message();
//	}
//	cout << "\n";
//	
//}