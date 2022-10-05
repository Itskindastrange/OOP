//#include<iostream>
//using namespace std;
//
//class Instrument
//{
//public:
//	virtual void MakeSound() = 0;
//};
//class Accordian :public Instrument
//{
//	void MakeSound()
//	{
//		cout << "Accordian playing ....\n";
//	}
//};
//class Piano :public Instrument
//{
//	void MakeSound()
//	{
//		cout << "Piano playing .....\n";
//	}
//};
//
//
//
//
//
//
//
//
//int main()
//{
//	Instrument* i1 = new Accordian();
//	/*i1->MakeSound();*/
//	Instrument* i2 = new Piano();
//	/*i2->MakeSound();*/
//
//	Instrument* instrument[2] = { i1,i2 };
//	for (int i = 0; i < 2; i++)
//	{
//		instrument[i]->MakeSound();
//
//	}
//}