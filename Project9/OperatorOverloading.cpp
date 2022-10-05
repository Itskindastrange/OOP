//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//
//struct YouTubeChannel
//{
//	string Name;
//	int SubCount;
//
//	YouTubeChannel(string name, int subcount)
//	{
//		Name = name;
//		SubCount = subcount;
//	}
//	bool operator==(const YouTubeChannel&channel)const
//	{
//		return this->Name == channel.Name;
//	}
//};
//ostream& operator<<(ostream& COUT, YouTubeChannel& ytchannel)
//{
//	COUT << "Name:        " << ytchannel.Name << endl;
//	COUT << "Subscribers: " << ytchannel.SubCount << endl;
//	return COUT;
//}
//struct MyCollection
//{
//	list<YouTubeChannel>MyChannels;
//	void operator+=(YouTubeChannel& channels)
//	{
//		this->MyChannels.push_back(channels);
//	}
//	void operator-=(YouTubeChannel& channels)
//	{
//		this->MyChannels.remove(channels);
//	}
//
//};
//ostream& operator<<(ostream& COUT, MyCollection& mycoll)
//{
//	for (YouTubeChannel ytchannel : mycoll.MyChannels)
//		COUT << ytchannel << endl;
//
//	return COUT;
//}
// 
//
//int main()
//{
//	YouTubeChannel yt1 = YouTubeChannel("First Channel", 1000000);
//	YouTubeChannel yt2 = YouTubeChannel("Second Channel", 35000);
//	cout << yt1;    //preferred way
//	operator<<(cout, yt2);
//
//	MyCollection mycollection;
//	mycollection += yt1;
//	mycollection += yt2;
//	mycollection -= yt1;
//
//	cout << mycollection;
//
//
//}
