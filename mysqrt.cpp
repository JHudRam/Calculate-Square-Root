#include<string>
#include<iostream>
using namespace std;

//Function to find square root of a number with a given tolerance (TOL).
void mysquare( int n, double TOL)
{
   double left = 0;
   double middle = n;
   double right = n;
    
    //Loop until the difference between right and left is smaller than the given tolerance.
   while(right - left > TOL){
        
       //If the middle square is larger than the number, update the right endpoint.
       if(middle * middle - n > 0){
            right = middle;
        }
        
       else{
            left = middle;
        
       }
        
       //Update the middle to be the midpoint of the updated interval.
        middle = (left + right) / 2;
        
       //Current interval.
       cout << "The square root of " << n << " is located in the interval [" << left << ", " << right << "]" << endl;
        
   }
    
    //Final interval length.
    cout << "The interval length is " << right - left << endl;
 
}

int main()
{
    int n;
    double TOL;
    cout << "Please enter a positive integer and tolerance: ";
    cin >> n >> TOL; // assume that the users always enter valid inputs
    mysquare(n, TOL);
    
    return 0;
}

