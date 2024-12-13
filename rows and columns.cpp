#include <iostream>

using namespace std;

int main()
{
   int rows=3,columns=3;
   int matrix[rows][columns];
   cout<<"PLS enter "<<rows*columns<<" integer values for 3x3 matrix: "<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<"Enter value for element at row "<<i+1<<",column "<<j+1<<": ";
        cin>>matrix[i][j];//  Take the values of the matrix from the user
    }
   }
   cout<<"The elements of the matrix are: "<<endl;
    //  Print the values of the matrix with
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl; // New line after each row
   }
   cout<<"The summation of each row is: "<<endl; // Calculate and print the summation of each row
   for(int i=0;i<rows;i++){
    int rowsum=0;
    for(int j=0;j<columns;j++){
        rowsum += matrix[i][j];
    }
    cout<<"Row "<<i+1<<": "<<rowsum<<endl;
   }
   cout<<"The product of each row is: "<<endl;//Calculate and print the product of each row
   for(int i=0;i<rows;i++){
    int rowproduct=1;
    for(int j=0;j<columns;j++){
        rowproduct *= matrix[i][j];
    }
    cout<<"Row "<<i+1<<": "<<rowproduct<<endl;
   }
    return 0;
}
