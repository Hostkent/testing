#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
    _setmode(_fileno(stdin),_O_U16TEXT);
    _setmode(_fileno(stdout),_O_U16TEXT);
    wcout<<L"Vui lòng nhập tên: "<<endl;
    wstring name;
    getline(wcin,name);
    wcout<<L"Có phải bạn muốn đặt tên là: "<<endl;
    wcout<<name;
    return 0;
}
