// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of triangle: ";
    cin>>n;
    for(int i =1; i<=n;i++) //for movement to next row
    {
        for(int j =1;j<=n-i+1;j++)//for movement within the row
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}