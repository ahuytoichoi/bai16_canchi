#include <iostream>
using namespace std;
int main()
{ 
	int socan, sochi, nam;
	cout << "nhap nam:"; cin >> nam;
	string can[] = { "canh","tan","nham","quy","giap","at","binh","dinh","mau","ky" };
	string chi[] = {"than","dau","tuat","hoi","ty","suu","dan","mao","thin","ti","ngo","mui"};
	socan = nam % 10;
	sochi = nam % 12;
		cout << can[socan] << "\n";
		cout << chi[sochi] << "\n";
	return 0;
}