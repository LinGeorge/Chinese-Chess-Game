#include <iostream>
#include <locale>
#include<conio.h>
#include<Windows.h>
#include"ChineseChess.h"
#include"RecordBoard.h"
using namespace std;

int main(void)
{
	locale loc("chs");
	setlocale(LC_ALL, "chs");
	wcout.imbue(loc);


	wcout << L"�� �� �� �� ��" << endl;
	wcout << L"�� �� �� �� ��" << endl;
	wcout << L"�� �� �� �� ��" << endl;


	//wcout << L"��   �x   �x   �x�@ �x   �x   �x   �x   ��" << endl;
	wstring a(L"���@���@���@���@���@���@���@��");
	wstring b(L"���� ���� ���� ���� ���� ���� ���� ���� ��");
	wstring c(L"��   �x   �x   �x �@�x ���x   �x   �x   ��");
	wstring d(L"�� �X�q �X�q �X�q �X�q �X�q �X�q �X�q �X��");
	wstring e(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring f(L"�� �X�q �X���X�q �X�q �X�q �X���X�q �X��");
	wstring g(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring h(L"���X�q �X�q �X�q �X�q �X�q �X�q �X�q �X��");
	wstring i(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring j(L"�� �X�r �X�r �X�r �X�r �X�r �X�r �X�r �X��");
	wstring k(L"��     �� �e            �~ ��    �� ");
	wstring l(L"�� �X�s �X�s �X�s �X�s �X�s �X�s �X�s �X��");
	wstring m(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring n(L"�� �X�q �X�q �X�q �X�q �X�q �X�q �X�q �X��");
	wstring o(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring p(L"�� �X�r �X�r �X�r �X�r �X�r �X�r �X�r �X��");
	wstring q(L"��   �x   �x   �x�@ �x   �x   �x   �x   ��");
	wstring r(L"���� ���� ���� ���� ���� ���� ���� ���� ��");
	wstring s(L"�@�@�G�@�T�@�|�@���@���@�C�@�K");
	wcout << a << endl;
	wcout << b << endl;
	wcout << c << endl;
	wcout << d << endl;
	wcout << e << endl;
	wcout << f << endl;
	wcout << g << endl;
	wcout << h << endl;
	wcout << i << endl;
	wcout << j << endl;
	wcout << k << endl;
	wcout << l << endl;
	wcout << m << endl;
	wcout << n << endl;
	wcout << o << endl;
	wcout << p << endl;
	wcout << q << endl;
	wcout << r << endl;
	wcout << s << endl;
	
	//system("CLS");
	ChineseChess newGame;
	newGame.gameStart();
	
		

	

	return 0;
}