#include <iostream>
#include <Windows.h>
#include <processthreadsapi.h>
#include <stdio.h>

int main()
{
	LPCWSTR UserName = L"test";
	LPCWSTR UserDomain = L"testdomain";
	LPCWSTR Password = L"123456@qQ";
	LPCWSTR AgentPath = L"C:\\agent.exe";
	LPCWSTR CurrentDirectory = L"C:\\";

	STARTUPINFO si;
	si.dwFlags = 0x00000001;
	si.wShowWindow = 0;
	PROCESS_INFORMATION pi;


	CreateProcessWithLogonW(UserName , UserDomain , Password , 0x00000002 , AgentPath , NULL , 0x04000000 , NULL , CurrentDirectory , &si , &pi );

	return 0;

}