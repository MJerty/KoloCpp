#include <iostream>
using namespace std;

int a,b,c;

int main() {
	cin >> a >> b;
	if (a < b) {
		c = a - b;
		cout << c; }
	else {
		c = b - a;
		cout << c; }
return 0;	
}