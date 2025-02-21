// Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20

#include <iostream>
using namespace std;

int main() {
      
    int x = 11; 

    
    for (int i = 0; i < 4; i++) {
       
        for (int j = 0; j <= i; j++) {
            cout << x++ << " ";  
        }
        cout << endl;  
    }

   
}
