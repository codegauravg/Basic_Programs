/* Author : Gaurav Gunjan
 * Created By: Dexter's Lab
 * Timestamp [16/01/2016 17:19]
 * */
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    long int x=0,i=0,fact=1;
    cout<<"Enter a number x to find the factorial of: ";
    cin>>x;
    if(x==0){
        cout<<"The Factorial of "<<x<<" is: "<<1;
    }
    else{
        for(i=x;i>=1;i--){
            fact=fact*i;
        }
        cout<<"The Factorial of "<<x<<" is: "<<fact;
    }

    return 0;
}