#ifndef FUNCTIONS_LAB_3_H_INCLUDED
#define FUNCTIONS_LAB_3_H_INCLUDED



#endif // FUNCTIONS_LAB_3_H_INCLUDED


void labinfo()
{

// Task 1
// Create a function called LabInfo and call it from Main

cout << "\n\nPat Loftus\n";
cout <<"Lab 3" << endl;


}


void PrintArray(int arr[], int len)
{

    int i;


    for (i = 0; i < len; i++)
    {
        cout << "The memory address of : " <<  arr[i] << " is  " << &arr[i] << "\n";
    }

}

// Alias of a int[6]
using SixIntArray = int[6];

//'arr' is an int(&)[6]
void PrintArrayByRef(SixIntArray& arr, int scalar)
{

    for(int value : arr)

    {   cout << "array value x scaler = ";
        cout << value * scalar << "\n";
    }
}

void PrintTree(char arr[7][9]){
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << arr[i][j];
        }

        // Newline for new row
          cout << endl;
    }
}
