#include <stdio.h>
#include <string.h>

//These are called function declarations. They allow me to write my functions
//after the main function. You can just ignore them for now.
void printArray(int rowCount, int colCount, char array[][colCount]);
void initArray(int rowCount, int colCount, char array[][colCount]);


int writeToArray(int row, int col, char input) {
	//Jacob's stuff
	int chosenRow;
	int chosenCol;

	printf("In which row would you like to place your value?\n");
	scanf("%d\n", chosenRow);
	printf("You have chosen row number %d\n", chosenRow);
	chosenRow = row;
	
	printf("In which column would you like to place your value?\n");
	scanf("%d\n", chosenCol);
	printf("You have chosen column number %d\n", chosenCol);
	chosenCol = col;
	
}
int readFromArray(int row, int col) {
	//seth's stuff
	printf ("What row would you like to read from?\n");
	scanf("%d", row);
	printf("What column would you like to read from?\n"):
	scanf("%d", col);
}

int main(void) {
	//JJ's stuff
	
}

/*
 * This is a function that will allow you to print out the array. It doesn't
 * have to be used anywhere, but it might help you guys understand what is
 * going on in your arrays.
 * 
 * The parameters here are used in the following ways:
 * rowCount - Sometimes it can be hard to know how long a row is in c, so
 *            this tells my function how many rows there are.
 * colCount - Same as for rowCount, but for columns.
 * array    - this is the actual array that will be printed
 *
 * So if you declared an array like this in your code:
 * char myArray[5][7];
 * then to print this array using my function you would call it like:
 * printArray(5, 7, myArray);  
 */
void printArray(int rowCount, int colCount, char array[][colCount]) {
	//Here I am declaring the variables I will use in my for loops
	int i, j;
	
	// This outside for loop runs once for each row in you array
	for(i = 0; i < rowCount; i++) {
		// For each row, we want to print the value of each column, and then
		// go to a new line. So the next for loop steps through each column,
		// and prints the value found there.
		for(j = 0; j < colCount; j++) {
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}
}

/*
 * This function should be called before you try to use the array. It basically
 * just puts a letter (I use z here, but it could be whatever) in each place in
 * our array.
 *
 * The parameters here are used in the following ways:
 * rowCount - Sometimes it can be hard to know how long a row is in c, so
 *            this tells my function how many rows there are.
 * colCount - Same as for rowCount, but for columns.
 * array    - this is the actual array that will be printed
 *
 * So a proper call would look something like this:
 * initArray(5, 7, myArray)
 */
void initArray(int rowCount, int colCount, char array[][colCount]) {
	//Here I am declaring the variables I will use in my for loops
	int i, j;
	
	// This outside for loop runs once for each row in you array
	for(i = 0; i < rowCount; i++) {
		// For each row, we want to store the value in each column. So
		// the next for loop steps through each column, and adds the 
		// character to that column on that row.
		for(j = 0; j < colCount; j++) {
			array[i][j] = 'z';
		}
	}
}