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
    int guess=0;//declares the variable for the number of guesses
    int userInputCol=0; // declares variable for the users input for column
    int userInputRow=0;// declares variable for the users input for row

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

//creates and stores the random numbers into the appropriate variables
srand(time(0));
colRandom= rand()% 3+1;
rowRandom= rand()% 3+1;

//asks the user for their column and row inputs and stores them appropriately
cout<<"What column do you want to choose?"<<endl;
cin>>userInputCol;
cout<<"What row do you want to choose?"<<endl;
cin>>userInputRow;

matrix.at(userInputRow-1).at(userInputCol-1)="X";

//while loop- tests to see if the userInput and the random generated number are the same and will continue until they are not
while (matrix.at(userInputRow-1).at(userInputCol-1)!=matrix.at(rowRandom-1).at(colRandom-1)) {
    //if loop-tests to see if the userInput and the random generated number are the same, if they are not then the matrix
    // will print with an 'X' where the user guessed, then tells the user to try again and asks for another
    // column and row until correct
    if (matrix.at(userInputRow - 1).at(userInputCol - 1) != matrix.at(rowRandom - 1).at(colRandom - 1)) {
        //for loop prints the matrix with the userInput
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
    //if loop- checks to make sure the userInput and random generated number are the same and if they are then a
    // '*" will be placed in that spot and it will tell you that you sunk the battleship and on what number attempt it
    // took you to simk the battleship.
    if (matrix.at(userInputRow - 1).at(userInputCol - 1) == matrix.at(rowRandom - 1).at(colRandom - 1)){
        matrix.at(userInputRow-1).at(userInputCol-1)="*";
        guess++;
        cout << "You sunk my battleship! You got it on try #" << guess << "!!"<<endl;
        // for loop-prints the battleship
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