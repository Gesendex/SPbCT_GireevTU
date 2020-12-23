#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

int main(int argc, wchar_t* argv[])
{
	STARTUPINFO sti = { 0 };
	PROCESS_INFORMATION pi = { 0 };
	DWORD excode;

	wstring ApplicationName(L"C:\\SP\\1\\Parent\\Debug\\Child.exe ");
	LPWSTR lpwAppName = &ApplicationName[0];
	
	

	wstring CommandLine(L"file.txt file2.txt");
	LPWSTR lpwCmdLine = &CommandLine[0];
	cout << "Parent process start" << endl;
	if (!CreateProcess
	(
		lpwAppName,
		lpwCmdLine,
		NULL,
		NULL,
		TRUE,
		NULL,
		NULL,
		NULL,
		&sti,
		&pi
	))
	{
		cout << "Unable to generate process" << endl;
		return -1;
	}

	_getch();

	GetExitCodeProcess(pi.hProcess, &excode);
	cout << excode << endl;

	if (excode != STILL_ACTIVE)
	{
		cout << "Done" << endl;
	}
	else
	{
		cout << "Process still running" << endl;
	}
	cout << "Parent process end" << endl;

	_getch();
}