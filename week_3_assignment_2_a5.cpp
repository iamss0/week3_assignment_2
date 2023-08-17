// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i =1; i<=n;i++) //for movement to next row// loop till row n
    {
        for(int j =1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i1 = 1;i1<=n-1;i1++)//loop after n
    {
        for(int k =1;k<=n-i1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}