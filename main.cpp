#include <iostream>

using namespace std;
bool power_of_2(int n){
    return (n && !(n & (n-1)));
}
int main()
{
   cout << power_of_2(1) << endl;
    return 0;
}
