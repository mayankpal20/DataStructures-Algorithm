#include <iostream>
using namespace std;
 
int main() {
  int array[4]={3,5,2,5};
  int i = 2;
  cout << "Address of first location in array : " << &array[0] << endl;
  cout << "value at zeorth location in array : " << *array << endl;
  cout << "value at first location in array : " << *(array + 1) << endl;
  cout << i[array] << endl;
 
  /*Size of */
  int temp[20];
  /*Size of full array*/
  cout << sizeof(temp) << endl;
 
  int *ptr = &temp[0];
  /*Size of that single address*/
  cout << sizeof(ptr) << endl;
  /*size of Value present at that address*/
  cout << sizeof(*ptr) << endl;
 
  /*Address */
  cout << &temp[12] << endl;
 
  int *pt = &temp[0];
  cout << "Address of pointer : " << &pt << endl;
 
  /*Incremeneting from one block to another*/
  int *py = &temp[0];
  cout << py << endl;
  py = py + 1 ;
  cout << "After increment : " << py << endl;

  /*Character Array*/
    /*Implementation of cout will be different for integer array and character array*/
  int arr[4]={4,5,6,7};
  /*Here length of character array is 6 because it ends with null character*/
  char ay[6]="cvbne";

  cout << arr << endl;
  cout << ay << endl;

  char *c = &ay[0];
  cout << c << endl;
 
 
}