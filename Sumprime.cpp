/* Certified by Tawiah Godfred and Id number 10950761 */
#include <iostream> 
using namespace std;

int main(){
    int a, b, c, sum = 0;
    cout << "Please any number of choice   " << endl;
    cin >> a;
    cout << " The prime numbers are ";
    for ( b =1; b<= a; b++){
        for (c=2; c<=b ; c++){
            if (b%c==0){
                break;
            }
        }
        if (c==b){
            sum = sum + b;
            cout << b << " , " ;

        }
    }
    cout << " The sum of all prime numbers between 1 and  " << a << " =" << sum;



    return 0;
}
