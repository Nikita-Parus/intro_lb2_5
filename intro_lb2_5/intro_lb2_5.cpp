#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	printf("a: %p, b: %p",&a, &b);
	for (int i = a; i <= b; i++) {
		cout << i * -1 << endl;
	}
}