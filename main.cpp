/**
 * This program print all prime numbers within a selected range(1-100)
 */

#include <iostream>
#include <cmath>

using namespace std;

//main function starts
int main() {

    bool basket[100]; //creates an boolean array of size 100

    //initialize elements of basket[] from index 2 to upper bounds of array to true
    for (int i = 2; i < 100; i++){

        basket[i] = true;
    }

    //loop through array starting form index 2 to the square root of the size of the array
    for (int j = 2; j < sqrt(100); j++){

        //determines weather current array position is true
        if(basket[j] == true){

            //if current array position equals true then the loop goes through
            //the rest of the array setting the multiple of the current array
            //position to false
            for (int k = j+1; k < 100; k++){

                //determines if current array position is multiple of 'j'
                if((k % j) == 0){

                    basket[k] = false;//set array position to false
                }
            }
        }
    }

    //loops through basket[] print array index which is now the prime number if the position is still true
    for (int m = 2; m < 100; m++){

        //determines if position equals true
        if(basket[m] == true)

            cout << " " << m; //print of position
    }



    return 0;
} // main function ends