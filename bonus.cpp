#include <iostream>

using namespace std;

int main()
{
    int rows=3,columns=4;
    int matrix[rows][columns];
    int transpose[columns][rows];
    cout<<"PLS enter "<<rows*columns<<"integer values for 3x4 matrix: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"The value of the element at row "<<i+1<<",column "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }

    cout<<"The elements of the matrix are: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
        for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    cout<<"The transpose of the matrix is :"<<endl;
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
