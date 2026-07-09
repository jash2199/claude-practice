/*
 *Pseudo Code
1. Ask user for numbers to fill lo shu square
2. Make function called fill aaray which is responsible for filling square using array
3. Create for loop that cycles through arrays to fill column and nested if staments to fill rows
4. Next make a function called showArray which is resposible for showing entered valuse in specific order simply done by cout staments.
5. Next make a function that teest if values entered make magic square or not. Name function isMagicSquare and call other functions to check if it is magic squre.
6. Next make function called check range which is responsible for making sure values enterd are between 1-9, cycles through array using for loop and test using nested if staments, function returns true or false.
7. Next make another function called checkUnique which is responsible for making sure that entered values are not all the same.
8. Next make another function called checkRowSum wich is responsible for adding up all the rows and checking if the  sums are equal to one another, this is done by in if stament. This function returns true or false.
9. Next make another function called checkColSum wich is responsible for adding up all the coulmns and checking if the  sums are equal to one another, this is done by in if stament. This function returns true or false.
10. Next make another function called checkDiag wich is responsible for adding up all the diagnols and checking if the  sums are equal to one another, this is done by in if stament. This function returns true or false.
11. In main creat do whil loop inside call for fillArray, then call for showArray create nested if stament with condtion that calls magicsqure and test if it is not magicsqure, it will print out it is or it is not a lo shu squre.
12. While should ask if user wants to try agian.
13. End
*/


#include<iostream>
using namespace std;

// Global constants
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int array1[3];
int array2[3];
int array3[3];


// this is the main function which is where the program is assembled
int main()
{
    char c='n';
    do {
        
        // calling function
        fillArray(array1, array2, array3, 9);
        // calling function
        showArray(array1, array2, array3, 9);
        // this will only be called if it is a magic square
        if (!isMagicSquare(array1, array2, array3, 9))
        {
            
            cout << "This is not a Lo Shu magic square." << endl ;
            cout << "Do you want to try again? ";
            cin >> c;
            
        }else {
            cout << "This is a Lo Shu magic square." << endl ;
            cout << "Do you want to try again? ";
            cin >> c;
        }
    }
    while(c == 'y');
    return 0;
}

// This functions job is to take numbers and correctly store them in the right location.
void fillArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)

{
    int num;// this is going to be for the number entered by user
    for( int i = 0; i < 3; i++)// this for loop and nested if stament is to fill array
    {
        for( int j = 0; j < 3; j++)
        {
            cout << "Enter the number for row " << i << " and column " << j << ": ";
            cin >> num;
            if ( i == 0)
            {
                arrayrow1[j] = num;
            }
            if ( i == 1)
            {
                arrayrow2[j] = num;
            }

            if ( i == 2)
            {
                arrayrow3[j] = num;
            }
        }
    }
}

// this functions resposniblity is to show the numbers to user
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    // these staments show numbers in array in specific order
    cout << arrayRow1[0] <<" "<< arrayRow1[1] <<" "<< arrayRow1[2] << endl;
    cout << arrayRow2[0] <<" "<< arrayRow2[1] <<" "<< arrayRow2[2] << endl;
    cout << arrayRow3[0] <<" "<< arrayRow3[1] <<" "<< arrayRow3[2] << endl;
}

// this is responsible for checking if numbers entered make magic square
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)

{
    // this is simillar to main because it passes functiont into it in order to check magic square
    if (checkRange( arrayRow1,  arrayRow2,  arrayRow3,  9,  1,  9) &&  checkUnique(arrayRow1,  arrayRow2,  arrayRow3,  9)
        && checkRowSum(arrayRow1,  arrayRow2,  arrayRow3,  9)
        && checkColSum(arrayRow1,  arrayRow2,  arrayRow3,  9)
        && checkDiagSum(arrayRow1,  arrayRow2,  arrayRow3,  9)){
        return true;
    }
    // this returns false if it is not a magic square
    return false;
}
       
 // this function is responsible for making sure only numbers 1-9 are accepted
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
    // here i created an array and fillefed it with the values from other arrays in order to checl if those values are accepteble
    int arr [9] = {arrayRow1[0], arrayRow1[1],arrayRow1[2], arrayRow2[0], arrayRow2[1],  arrayRow2[2], arrayRow3[0], arrayRow3[1], arrayRow3[2]};
    // cycles through array using for loop
    for ( int i =0; i < size; i++)
    {
        // test if value in array is less then or more then min and max
        if (arr[i] < min || arr[i] > max)
        {
            
            return false;
        }
    }
// this will either retuen true or false letting me know if values are acceptble
    return true;
}

// This functions job is to make sure that the value entred are uniqur for example not (1,1,1,1,1,1,1,1...).
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    
    int arr2 [9] = {0,0,0,0,0,0,0,0,0};
    int arr1 [9] = {arrayRow1[0], arrayRow1[1],arrayRow1[2], arrayRow2[0], arrayRow2[1],  arrayRow2[2], arrayRow3[0], arrayRow3[1], arrayRow3[2]};
    // i used a for loop to cycle through the array
    for ( int i =0; i < size; i++)
    {
        // i used nested if staments to test for the condtions
        if (arr2[0] == 0)
      {
            arr2[0] = arr1[0];
            
        }
        else {
            for ( int j =0; j < i; j++)
            {
                if (arr2[j] == arr1[i])
                {
                   
                    return false;
                }
                
            }
            arr2[i] = arr1[i];
        }
    }
    // this function also returns true or false
    return true;
}

bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    // i made varibles and made them equal the sum of the values in my arrays that were filled by the numbers entered
    int c1 = arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
    int c2 = arrayRow2[0] + arrayRow2[1] + arrayRow2[2];
    int c3 = arrayRow3[0] + arrayRow3[1] + arrayRow3[2];
    // this if stament if all three rows equal each other and if not it returns false.
    if (c1 == c2 && c2 == c3)
        return true;
    else
    {
        
        return false;
    }
}

// this function adds up the columns and compares the values in order to see if they are equal.
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    int c1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
    int c2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
    int c3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];
    if (c1 == c2 && c2 == c3)
        return true;
    else
    {
        return false;
    }
}
// this function adds up the numbers in a diagnol pattern and checks if the values are equal.
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    
    int c1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];
    int c2 = arrayrow3[0] + arrayrow2[1] + arrayrow1[2];
    // this if stament test if the diagnols equal each other and if not it retuens false
    if (c1 == c2)
        return true;
    else
    {
        // if test dosent pass this returns false
        return false;
    }
}
