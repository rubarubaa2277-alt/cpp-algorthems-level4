#include <iostream>
using namespace std;

struct stinfo
{
	int age;
	bool hasdriverlicense;
	bool hasrecommandation;
};
stinfo readinfo()
{
	stinfo info;
	cout << "please enter your age?" << endl;
	cin >>info. age;
	cout << "do you have driver license?" << endl;
	cin >> info.hasdriverlicense;
	cout << "do you have a recommandation?" << endl;
	cin >> info.hasrecommandation;
	return info;

}
bool isaccepted(stinfo info)
{
	if (info.hasrecommandation)
	{
		return true;
	}
	else
	{
		return (info.age > 21 && info.hasdriverlicense);
	}
}
void printresult(stinfo info)
{
	if (isaccepted(info))
		cout << "heard" << endl;
	else
		cout << "rejected" << endl;
}
int main()
{
	printresult(readinfo());
}