// Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of triangle: ";
    cin>>n;
    for(int i =1; i<=n;i++) //for movement to next row
    {
        for(int j =1;j<=i;j++)//for movement within the row
        {
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}