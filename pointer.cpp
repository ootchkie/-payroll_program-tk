//Mod 4 Intro to C++ Payroll byTimothy Kresock for DrEbrahimi.com Inc. ,homework
#include <iostream>
#include <fstream>  
using namespace std;
int id[9];  //original array for id
int buffer;  //buffer to hold a single instance
 
int main() {
     //int *temp = &buffer; // local pointer declaration and assignment swap 

     ofstream myfile; //declare myfile for streaming
     myfile.open("p3ointer-TK.dat");// open stream for output to FILE and make FILE <-data goes in here
     cout<<"ENTER EMPLOYEE ID:  "; //question at the screen
     cin >> id[0]; //answer goes in here ok, if it is TYPE INT
     buffer = id[0]; //array instance is assigned
     
     //feedback part to help me understand what is happening
     cout << "You entered "<< id[0];  // feedback of input, ok!
     cout << "Buffer is " <<buffer; // feedback of counter, ok!
     //cout << "Pointer is  " << temp;  //  feedback of pointer is address, ok!
     
     
     myfile << endl << "  ";
     myfile << buffer; // <--this is where I put data into the file, ok!
     //myfile << id[0];
     myfile << "   ...it's okay!" << endl ;
     myfile.close();
     return 0;
       
}//MAIN
