/**
 *   @file: lab1main.cc
 * @author: Owen Godwin
 *   @date: June 13, 2021
 *  @brief: This is the main for Lab Assignment 1.
        You will be creating the Numbers class that it uses.
        Follow the instructions on the lab sheet.

 */

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

#include "numbers.h"

using namespace std;

int main() {
    Numbers n1, n2;

    for (size_t i = 2; i < 16; i += 2) {
		n1.add(i);
	}

    n1.display(cout);

    cout << endl;

    n2 = n1;

    for (int i = 0; i < 4; ++i){
		n2.remove_last();
	}

    for (size_t i = 5; i < 20; i += 5) {
		n2.add(i);
	}
    n1.display(cout);
	cout << endl;


	// Uncomment the following to do Part 2
	
    unsigned long start, stop, running;

    start = time(NULL);

    
     unsigned long item = 0;

         try{

            while(item<5){ // Five containers will be created

                Numbers n3;

                for(int i = 0; i < 100; i++){

                    n3.add(item);
                }
            ++item;
            cout << n3.reveal_address()<<endl;
            }

         }

    catch(bad_alloc){  // this probably won't be needed

            cout<<"Memory failure after adding " << item <<endl;

    }

    stop = time(NULL);

    running = (stop - start)/60;

    cout<<endl<<"Running took "<<running<<" minutes.\n";
    
    cout << "\nTotal bytes allocated = " << byte_count << endl;
	
    return 0;
}
