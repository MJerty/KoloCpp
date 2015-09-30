#include <iostream>
using namespace std;

int a,b,c;

int main() {
	cin >> a >> b >> c;
	if ( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) ) cout << "TAK";
		else cout << "NIE";
return 0;	
}