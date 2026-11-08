#include<iostream>
using namespace std;


void readinfo(string& name)
{
	cout << "please enter your name :" << endl;
	cin >> name;
}
void printinfo(string name)
{
	cout << "name is : " << name <<  endl;
}
int main()
{
	string name;
	readinfo(name);
	printinfo(name);
}