#include <iostream>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

// Authors: Bryson Bisuna and Parsa Bidram
// Description: Hello World in C++

int main()
{
	string name1 = "your name1";
	hello1Function(name1);
	string name2 = "your name2";
	hello2Function(name2);
	return 0;
}

void hello1Function(string name1)
{
	cout << "hello World" << name1 << endl;
}

void hello2Function(string name2)
{
	cout << "hello World" << name2 << endl;
}
