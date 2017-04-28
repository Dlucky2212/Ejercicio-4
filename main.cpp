#include <iostream>

using namespace std;

//4 Un numero y elevado a un x
long long exponente(int a , int b){
	long long c= 1l;
	if (b == 0)
		return 1l;
	for ( int i = 0; i<b ;i++){
		c = c * a;
	}
	return c;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << exponente(a,b);
}
