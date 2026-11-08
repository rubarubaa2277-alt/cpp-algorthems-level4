#include <iostream>
using namespace std;

int readnumber()
{
	int number;
	cout << "please enter the number" << endl;
	cin >> number;
}
enum ennumbertype { odd =1, even =2,};
ennumbertype checknumbertype(int num)
{
	int result = num % 2;
	if (result == 0)
		return ennumbertype::even;
	else
		return ennumbertype::odd;
}
void printnumbertype(ennumbertype numbertype)
{
	if (numbertype == ennumbertype::even)
		cout << "\nnumber is even\n" << endl;
	else
		cout << "\n number is odd\n" << endl;
}
int main()
{
	printnumbertype(checknumbertype(readnumber()));

}