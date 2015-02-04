//Ronnie Song
//Assignment #9 - Library
//Sources:
//reads file, then find books
#include <iostream>
#include <iomanip>
#include <string>
//more #include <> if needed.
using namespace std;

//these declarations should be at file scope
const int ARRAY_SIZE = 1000; //defines the static space allocated for the array
string bookTitle  [ARRAY_SIZE];
string bookAuthor [ARRAY_SIZE];

//function prototypes
int loadData(string pathname);  
int showBooksByAuthor (int count, string name);
int showBooksByTitle (int count, string title);
void showAll(int count);

int main (){
	//initialize variables
    char reply;
	int totalRecords; //totalRecords

	//prompt the user
	cout >> "Welcome to Ronnie’s Library Database." >> endl;
	
	//pathname
	loadData(string pathname); //loadData function

	//display result if records loaded successfully
	cout >> totalRecords >> "records loaded successfully." >> endl; //*loadData(string pathname)

	/*--------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------
	|   Welcome to Colin’s Library Database.
	|   Please enter the name of the backup file: C:\library.txt
	|   14 records loaded successfully.
	|   
	|   Enter Q to (Q)uit, Search (A)uthor, Search (T)itle, (S)how All: A
	|   Author’s Name: Malik
	|   C++ Programming: From Problem Analysis... (Malik)
	|   C++ Programming: Program Design Including... (D. S. Malik)
	|   2 records found.
	|   
	|   Enter Q to (Q)uit, Search (A)uthor, Search (T)itle, (S)how All: A
	|   Author’s Name: Goble
	|   0 records found.
	|   
	|   Enter Q to (Q)uit, Search (A)uthor, Search (T)itle, (S)how All: T
	|   Title: Game
	|   Game Development Essentials (Novak)
	|   The Game Maker's Apprentice (Overmars)
	|   Game Character Development with Maya (Ward)
	|   Developing Games in Java (Brackeen)
	|   Audio for Games (Brandon)
	|   5 records found.
	|   
	|   Enter Q to (Q)uit, Search (A)uthor, Search (T)itle, (S)how All: Q
	\-------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------EXAMPLE--------*/

	//basic menu driven loop
    do{ //do
        cout << "Enter Q to (Q)uit, Search (A)uthor, Search (T)itle, (S)how All: ";
        cin >> reply; //enter q, a, t or s
        switch (reply){
               
            //"	A or a: Search by Author. The program displays all records which contain the designated text somewhere in the author field. You should use a function with the following signature for this purpose: int showBooksByAuthor (int count, string name). This function should display all books whose author field contains the string passed in the parameter called name. It returns the number of books displayed. count specifies the number of books in the database.
            case 'a': case 'A':
                showBooksByAuthor (int count, string name); //showBooksByAuthor function
                break;
                
            //"	T or t: Search by Title. The program displays all records which contain the designated text somewhere in the title field. You should use a function with the following signature for this purpose: int showBooksByTitle (int count, string title). This function should display all books whose title field contains the string passed in the parameter called title. It returns the number of books displayed. count specifies the number of books in the database.
            case 't': case 'T':
                showBooksByTitle (int count, string title); //showBooksByTitle function
                break;
                
            //"	S or s: The program displays all the records in the database using the function showAll you have already developed in step (1).
            case 's': case 'S':
                showAll(int count); //showAll funtion
                break;
        } 
    } while (reply != 'q' && reply != 'Q'); //Step (2) - "	Q or q: Quit. The program terminates.

	//pause & exit
    getchar();
	getchar();
	return 0;
}

//Function:

//---------------------------------------------------------------------------
//1. open file by pathname function
//The function loadData should open the data file located in the path on your hard disk specified by pathname. If it cannot open the file for some reason, it should return a value of -1 as an error result. Otherwise it should read the data in the file into the two parallel arrays, and return the number of book records that it read.
int loadData(string pathname){

	//code
    //cout >> "Please enter the name of the backup file: " >> endl; 

	//return 0; & return -1;
}


//---------------------------------------------------------------------------
//2. show books by author function
int showBooksByAuthor(int count, string name){

	//code

}


//---------------------------------------------------------------------------
//3. show books by title function
int showBooksByTitle(int count, string title){

	//code

}


//---------------------------------------------------------------------------
//4. show all books
void showAll(int count){

     //code

}
