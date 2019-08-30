#include <iostream>

using namespace std;

int main()
{
    int sizeM = 0;

    cout << "ID: 11917550   \nROLL No: 74A" << endl << "Name: Banuka Vidusanka Paniyan Duwage\n";
    cout << "Enter Size of Matrix: ";
    cin >> sizeM ;

    int matrix1[sizeM][sizeM];
    int matrix2[sizeM][sizeM];
    int tota11=0;
    int total2=0;

    // enter values to matrix 1 & 2 by user
    for (int x = 1; x<=sizeM; x++)
    {
        for (int y = 1; y<=sizeM; y++)
        {
            cout << "\nEnter Value for position " << x << ", " << y << " in Matrix 1: " ;
            cin >> matrix1[x][y];
        }
    }

    for (int x = 1; x<=sizeM; x++)
    {
        for (int y = 1; y<=sizeM; y++)
        {
            cout << "\nNow enter Value for position " << x << ", " << y << " in Matrix 2: " ;
            cin >> matrix2[x][y];
        }
    }

    //print & display matrix.
    cout << "\nMatrix 1 you entered is: ";
    for (int x = 1; x<=sizeM; x++)
    {
        cout << endl;
        for (int y = 1; y<=sizeM; y++)
        {
            cout << matrix1[x][y] << "\t";
        }
    }

    cout << "\n\nMatrix 2 is: ";
    for (int x = 1; x<=sizeM; x++)
    {
        cout << endl;
        for (int y = 1; y<=sizeM; y++)
        {
            cout << matrix2[x][y] << "\t";
        }
    }

    // sum of matrix 1 & 2 left cross & right cross

    for (int x = 1; x<=sizeM; x++)
    {
        cout << endl;
        for (int y = 1; y<=sizeM; y++)
        {
            if(x==y)
            {
                total1 += matrix1[x][y];
            }
        }
    }

    for (int x = 1; x<=sizeM; x++)
    {
        cout << endl;
        for (int y = 1; y<=sizeM; y++)
        {
            if(x == sizeM - y + 1)
            {
                total2 += matrix1[x][y];
            }
        }
    }

}
