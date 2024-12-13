#include <iostream>

using namespace std;

int main()
{
  cout<<"Question 1: "<<endl;
  cout<<"------------\n";
  int length=10;
  int arr[length];
  cout<<"PLS enter 10 integer values for the array: "<<endl;
  for(int i=0;i<length;i++){
    cout<<"Enter the value of element "<<i+1<<": ";
    cin>>arr[i];// take the values from the user
  }
  cout<<"The elements of the array are: "<<endl;
  for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";//print the values of the array
  }
  cout<<endl;
  cout<<"The elements in reverse order are: "<<endl;
  for(int i=length-1;i>=0;i--){
    cout<<arr[i]<<" ";//print the values of the array in reverse order
  }
  cout<<endl;
  int summation=0;
  for(int i=0;i<length;i++){
    summation += arr[i];//adding the values of the array
  }
   cout<<"The summation of the array is: "<<summation<<endl;
   cout<<endl;
   long long product=1;
   for(int i=0;i<length;i++){
    product *= arr[i];//multiply the values of the array
   }
   cout<<"The product of the array is: "<<product<<endl;


    return 0;
}
