#include <iostream>

using namespace std;
bool getBit(int n , int pos )
{
   return ((n & ( 1 << pos ))!=0);
}
int setBit(int n , int pos ){
return (n | (1<<pos ));
}
int unique_no(int arr[], int n ){
int result =0;
for(int i =0 ; i< 64 ; i++ ){
    int sum = 0 ;
    for(int j =0 ; j< n ; j++){
        if(getBit(arr[j], i)){
            sum++;
        }
    }
    if(sum % 3 != 0){
        result = setBit(result, i);
    }
}
return result;
}
    int main()
{
   int arr[] = {1 ,1,2,4,4,3,4,1,2,3,2,3,9};
   cout<<unique_no( arr , 13);
    return 0;
}
