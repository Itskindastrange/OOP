//#include <iostream>
//#include <list>
//using namespace std;
//
//class YouTubeChannel
//{
//private:
//	string Name;
//	
//	int SubscribersCount;
//	list<string> PublishedVideoTitles;
//protected:
//	string OwnerName;
//	int Quality;
//public:
//	YouTubeChannel(string name, string ownerName) 
//	{
//		Name = name;
//		OwnerName = ownerName;
//		SubscribersCount = 0;
//		Quality = 0;
//	}
//	void GetInfo() 
//	{
//		cout << "Name: " << Name << endl;
//		cout << "OwnerName: " << OwnerName << endl;
//		cout << "SubscribersCount: " << SubscribersCount << endl;
//		
//		cout << "Videos: " << endl;
//		for (string videoTitle : PublishedVideoTitles)
//		{
//			
//			cout << videoTitle << endl;
//		}
//	}
//	void subscribe()
//	{
//		SubscribersCount++;
//	}
//	void Unsubscribe()
//	{
//		if(SubscribersCount>0)
//		  SubscribersCount--;
//	}
//	void PublishVideo(string title)
//	{
//		PublishedVideoTitles.push_back(title);
//	}
//	void ChannelAnalytics()
//	{
//		if (Quality > 5)
//			cout << "This channel has good content";
//		else
//			cout << "This channel dosen't have good content";
//	}
//
//};
//
//
//class newYtChannel:public YouTubeChannel
//{
//public:
//	newYtChannel(string name, string ownerName):YouTubeChannel(name,ownerName)
//	{
//
//	}
//	void info()
//	{
//		cout <<OwnerName<< "Hello WORLD!!!\n";
//		Quality++;
//	}
//};
//class anotherYtChannel :public YouTubeChannel
//{
//public:
//	anotherYtChannel(string name, string ownerName) :YouTubeChannel(name, ownerName)
//	{
//
//	}
//	void info()
//	{
//		cout << OwnerName << "Hello WORLD!!!\n";
//		Quality++;
//	}
//};
//
//int main()
//{
//	YouTubeChannel ytChannel("Code", "ME");
//	ytChannel.PublishVideo("C++ for beginners");
//	ytChannel.PublishVideo("HTML & CSS for beginners");
//	ytChannel.PublishVideo("C++ OOP");
//	
//	ytChannel.Unsubscribe();
//	ytChannel.GetInfo();
//
//	cout << "\t\t\n\n";
//
//	newYtChannel newytChannel("Halodasbinich", "Abdullah");
//	
//	newytChannel.PublishVideo("Welcome");
//	newytChannel.PublishVideo("Gaming");
//	newytChannel.subscribe();
//	newytChannel.subscribe();
//	newytChannel.GetInfo();
//	newytChannel.info();
//	newytChannel.info();
//	newytChannel.info();
//	newytChannel.info();
//	newytChannel.info();
//	newytChannel.info();
//	cout << "\n";
//	anotherYtChannel anotherytChannel("Halo", "Dk");
//	anotherytChannel.PublishVideo("Welcome");
//	anotherytChannel.subscribe();
//	anotherytChannel.GetInfo();
//	anotherytChannel.info();
//
//	YouTubeChannel* yt1 = &newytChannel;
//	YouTubeChannel* yt2 = &anotherytChannel;
//
//	yt1->ChannelAnalytics();
//	yt2->ChannelAnalytics();
//
//
//	system("pause>0");
//}