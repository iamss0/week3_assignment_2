// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5


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
            if(i%2==0) cout<<(char)(j+64)<<" ";
            else cout<<j<<" ";
        }
        cout<<endl;
    }
}