#include <iostream>
#include <cstdio>
void check(int n);
 int n,i;
using namespace std;
void print_o(int m,std::string s[])
{
int i;

for ( i = 0; i < m ; i++,m++)
{
  cout << s[m]<<endl;
}

}

int main() {
    
   int n;
    cin >> n;
    std::string arr[] = { "one","two","three","four","five","six","seven","eight","nine"};
    
    print_o(n, arr);

      check(n%2);
 
 

   
    return 0;
}
 void check(int n)
{
if (n == 0)
{
 cout << "even" << endl;
}
else
{
cout << "odd" << endl;
}
}