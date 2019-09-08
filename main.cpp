/*Alexa (Nini) de la Fe
Section B
Project 1
This program will create a matrix and ask the user to try to guess a spot to sink the battleship or spot that is
 selected by a random number generator. */

 #include <iostream>
#include <vector>
#include <time.h>
#include <string>
using namespace std;

int main() {

    int row=3;
    int col=3;
    vector<string> vec (col," "); //declares vectors
    vector<vector<string>> matrix(row,vec);
    int colRandom=0;
    int rowRandom=0;

    cout<<"Think of a location on the matrix below to attempt to sink my battleship."<<endl;


//prints the original matrix for the user to visualize:
for (int i=0;i<matrix.size();i++){
    cout<< "__________________"<<endl;
    for (int j=0; j<matrix.at(i).size();j++){
        cout<<"|  "<<matrix.at(i).at(j)<<" |";
    }
    cout<<endl;
}
    cout<<"__________________"<<endl;

srand(time(0));
colRandom= rand()% 3+1;
rowRandom= rand()% 3+1;

cout<<colRandom<<endl<<rowRandom<<endl;

int userInputCol; // declares variables for the users inputs
int userInputRow;

cout<<"What column did you think of?"<<endl; //asks the user for their inputs
cin>>userInputCol;
cout<<"What row did you think of?"<<endl;
cin>>userInputRow;

cout<<userInputCol<<endl<<userInputRow<<endl; //prints the users inputs for testing; WILL NOT BE USED IN FINAL

matrix.at(userInputRow-1).at(userInputCol-1)="X";

    for (int i=0;i<matrix.size();i++){
        cout<< "__________________"<<endl;
        for (int j=0; j<matrix.at(i).size();j++){
            cout<<"|  "<<matrix.at(i).at(j)<<" |";
        }
        cout<<endl;
    }
    cout<<"__________________"<<endl;

/* while(matrix.at(userInputCol).at(userInputRow) != matrix.at(colRandom).at(rowRandom)){


//}
if(matrix.at(userInputCol-1).at(userInputRow-1) == matrix.at(colRandom-1).at(rowRandom-1)){
    cout<<"You sunk my battleship"<<endl;
}
else{
    cout<<"Try again!"<<endl;
} */



    return 0;
}