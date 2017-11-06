#include <iostream>
#include <cmath>
using namespace std;

long double ladder(int n)
{
    long double nn=1;
    for (int i=1;i<=n;i++)
    {
        nn *= i;
    }
    return nn;
}

int main()
{
	long double n,m,sum=0;
	cout << "Enter Average rate: "; cin >> n;
	cout << "Enter number: "; cin >> m;

	for (int i=0;i<m;i++)
	{
		sum += (pow(2.71828182846,-n)*pow(n,i))/ladder(i);
	}
	cout << "P(X < n) = " << sum << endl;
    cout << "P(X <=n) = " << sum + (pow(2.71828182846,-n)*pow(n,m))/ladder(m) << endl;
    cout << "P(X = n) = " << (pow(2.71828182846,-n)*pow(n,m))/ladder(m) << endl;
    cout << "P(X > n) = " << 1 - (sum + (pow(2.71828182846,-n)*pow(n,m))/ladder(m)) << endl;
    cout << "P(X >=n) = " << 1 - sum << endl;
    return 0;
}