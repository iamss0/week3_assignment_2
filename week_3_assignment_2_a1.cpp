// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square: ";
    cin>>n;
    for(int i =1; i<=n;i++) //for movement to next row
    {
        for(int j =1;j<=n;j++)//for movement within the row
        {
            cout<<i<<" "; //row number will be printed each time
        }
        cout<<endl;
    }
}