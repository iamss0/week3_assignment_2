// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of triangle: ";
    cin>>n;
    
    for(int i =1; i<=n;i++) //for movement to next row
    {
        for(int j =i;j>=1;j--)//for movement within the row
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}