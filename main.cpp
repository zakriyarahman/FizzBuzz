#include <iostream>

using namespace std;

int main()
{
   for( int i = 1; i <= 100 ; i++ ) {
       bool a = i%3 == 0;
       bool b = i%5 == 0;
       if(a && b) {
           cout << "FizzBuzz" << endl;
       }
       else if(a) {
           cout <<  "Fizz" << endl;
       }
       else if(b)  {
           cout << "Buzz" <<  endl;
       } else {
        cout << i << endl;
       }
   }
   return 0;
}
