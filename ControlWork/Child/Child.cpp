#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Child process start" << endl;
	cout << "Number aguments " << argc << endl;
	cout << "Arguments:" << endl;
	
	for (int i = 0; i < argc; i++)
	{
		cout << "argv["<< i <<"] = " << argv[i] << endl;
	}
	cout << "Child process end" << endl;
	exit(0);
}