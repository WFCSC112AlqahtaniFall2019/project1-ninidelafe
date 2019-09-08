/*Alexa (Nini) de la Fe
Section B
Project 1
This program will create a matrix and ask the user to try to guess a location to attempt to sink the "battleship" or spot
 that is selected by a random number generator. */

#include <iostream>
#include <vector>
#include <time.h>
#include <string>
using namespace std;

int main() {

    int row=3;//declares the number of rows
    int col=3;//declares the number of columns
    vector<string> vec (col," "); //declares vectors
    vector<vector<string>> matrix(row,vec);
    int colRandom=0;//declares the variable to save the random generated number for column
    int rowRandom=0;//declares the variable to save the random generated number for row
    int guess=0;//declares the variable for 
    int userInputCol=0; // declares variables for the users inputs
    int userInputRow=0;

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


cout<<"What column do you want to choose?"<<endl; //asks the user for their inputs
cin>>userInputCol;
cout<<"What row do you want to choose?"<<endl;
cin>>userInputRow;


matrix.at(userInputRow-1).at(userInputCol-1)="X";

while (matrix.at(userInputRow-1).at(userInputCol-1)!=matrix.at(rowRandom-1).at(colRandom-1)) {

    if (matrix.at(userInputRow - 1).at(userInputCol - 1) != matrix.at(rowRandom - 1).at(colRandom - 1)) {

        for (int i = 0; i < matrix.size(); i++) {
            cout << "__________________" << endl;
            for (int j = 0; j < matrix.at(i).size(); j++) {
                cout << "|  " << matrix.at(i).at(j) << " |";
            }
            cout << endl;
        }
        cout << "__________________" << endl;
        cout << "You missed!:( Try again!"<<endl;
        guess++;

        cout << "What column do you want to choose?"<<endl;
        cin >> userInputCol;
        cout << "What row do you want to choose?"<<endl;
        cin >> userInputRow;

        matrix.at(userInputRow-1).at(userInputCol-1)="X";
    }
    if (matrix.at(userInputRow - 1).at(userInputCol - 1) == matrix.at(rowRandom - 1).at(colRandom - 1)){
        matrix.at(userInputRow-1).at(userInputCol-1)="*";
        guess++;
        cout << "You sunk my battleship! You got it on try #" << guess << "!!"<<endl;
        for (int i = 0; i < matrix.size(); i++) {
            cout << "__________________" << endl;
            for (int j = 0; j < matrix.at(i).size(); j++) {
                cout << "|  " << matrix.at(i).at(j) << " |";
            }
            cout << endl;
        }
        cout << "__________________" << endl;
    }

}




    return 0;
}