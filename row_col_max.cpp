#include <iostream>
using namespace std;

int main() {
    cout << "Input your 2d array values!" << "\n";

    // an array with 3 rows and 3 columns.
    int x[3][3] = {{2, 10, 9},
                   {1, 3, 6},
                    {2, 4, 7}};



    int rowMax = 0, colMax = 0, sumR=0,sumC=0, row[3], col[3], z=0;
    // output each array element's value
    cout << "Your 2d array will look like ..\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cout << x[i][j] << " ";
            sumR = sumR + x[i][j];
        }

        row[i] = sumR;
        sumR = 0;
        cout << "\n";
    }

    cout << row[0] << "\n"<< row[1] <<"\n"<< row[2] << "\n";

    rowMax = row[0];
    for (int i=0 ; i<3 ; i++)
    {
        if (rowMax < row[i+1])
            rowMax = row[i+1];
    }
    cout << "\n rowMax is = " << rowMax;


    for (int j = 0 ; j<3 ; j++)
    {

        for (int i=0 ; i<3 ; i++)
        {
            sumC = sumC + x[i][j];
        }
        col[j] = sumC;
        sumC = 0;
        cout << "\n";
    }

    cout << col[0] << "\n"<< col[1] <<"\n"<< col[2] << "\n";

    colMax = col[0];
    for (int i=0 ; i<3 ; i++)
    {
        if (colMax < col[i+1])
            colMax = col[i+1];
    }
    cout << "\n colMax is = " << colMax;

    if (rowMax > colMax)
    {
        cout << "\n\nrowMax is greater = "<< rowMax << "\n";
    }
    else
    {

        cout << "\n\ncolMax is greater = "<< colMax << "\n";
    }





    return 0;
}
