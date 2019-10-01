#include <iostream>
#include<string>
using namespace std;
//This is an example of a simple do while statement. it will continue to re run the 
//code while the calue entered is less then five. as soon as a value of five or higher is entered
// the program will end.
int main()
{
    
    
        /* code */
    
    
    //sets up the integers
    int i, a, b, c;
    do{
    //console out followed by text
    cout << "Please enter a numerical value between 1/10";
    //console in, followed by where its stored
    cin >> i;
    //simple if statement
    if (i <= 5)
    {
        a = 10;
        b = 10;
        c = 10;
        i = a + b + c + 5;
        cout << "your number is example: " << i;
    }
    }
    while(i < 5);
  

    
  
    
    
}