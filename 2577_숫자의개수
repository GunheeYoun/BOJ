#include <iostream>
using namespace std;

int arr[10];
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mulnum=a*b*c;
    do
    {
        arr[mulnum%10]++;
        
    }while(mulnum/=10);
    for(int i=0; i<10;i++)
        cout<<arr[i]<<"\n";
    return 0;
    
}
