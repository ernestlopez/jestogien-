#include <iostream>
#include <cstdlib>
using namespace std;

long long silnia(int n)
{
  if(n<2)
    return n*silnia(n-1);
}
int main()
{
    int n;
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    cout<<"n!= "<<silnia(n)<<endl;
    return 0;
}
