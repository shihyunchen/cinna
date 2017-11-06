#include <cstdlib> 
#include <cmath> 
#include <iostream> 
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
 
long double c(int n, int m) 
{
    return ladder(n)/(ladder(m)*ladder(n-m));
} 

int main () 
{ 
    long double p,p1,p2,n,k,sum=0; 
    char temp;
    cout << "Enter p: ";cin >> p1 >> temp >> p2;
    p = p1/p2;
    cout << "Enter total times: "; cin >> n;
    cout << "Enter times: "; cin >> k;
    for (int i=0;i<k;i++)
    {
        sum+= c(n,i)*pow(p,i)*pow(1-p, n-i);
    }
    cout << "P(X < n) = " << sum << endl;
    cout << "P(X <=n) = " << sum + c(n,k)*pow(p, k)*pow(1-p, n-k) << endl;
    cout << "P(X = n) = " << c(n,k)*pow(p, k)*pow(1-p, n-k) << endl;
    cout << "P(X > n) = " << 1 - (sum + c(n,k)*pow(p, k)*pow(1-p, n-k)) << endl;
    cout << "P(X >=n) = " << 1 - sum << endl;
    return 0;
}