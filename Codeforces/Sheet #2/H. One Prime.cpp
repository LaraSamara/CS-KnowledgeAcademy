
#include <iostream>
using namespace std;
int main()
{
int number;
cin>>number;
for(int i=2;i<number;i++){
    if(number%i==0){
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
    return 0;
}