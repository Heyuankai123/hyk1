#include <bits\stdc++.h>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a + b = " << add(a, b) << endl;
	cout << "a - b = " << sub(a, b) << endl;
	return 0;
}