/*Alexa (Nini) de la Fe
Section B
Project 1
This program will create a matrix and ask the user to try to guess a spot to sink the battleship or spot that is
 selected by a random number generator. */

 #include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {

    int row=3;
    int col=3;
    vector<int> vec (col,0); //declares vectors
    vector<vector<int>> matrix(row,vec);

    cout<<"Think of a location on the matrix to attempt to sink my battleship. The matrix is the one bellow."<<endl;

//prints the original matrix for the user to visualize:
for (int i=0;i<matrix.size();i++){
    for (int j=0; j<matrix.at(i).size();j++){
        cout<<matrix.at(i).at(j)<<" ";
    }
    cout<<endl;
}

int userInputCol; // declares variables for the users inputs
int userInputRow;

cout<<"What column did you think of?"<<endl; //asks the user for their inputs
cin>>userInputCol;
cout<<"What row did you think of?"<<endl;
cin>>userInputRow;

cout<<userInputCol<<endl<<userInputRow; //prints the users inputs for testing; WILL NOT BE USED IN FINAL




    return 0;
}