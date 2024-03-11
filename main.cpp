#include <iostream>

void reverArray (int arr[], int size) {
    if (size <= 1){
            //Array with 0 or 1 element is already reversed
            return;
    }
//Lterate ftom the first element up to (but excluding) the middle element

    for (int i = 0; i < size / 2; ++i) {
            //Compute indices of the current pair of elements to be swapped
            int index1 = i;
            int index2 = size - i - 1;

            //swap the elements at these indices
            std::swap(arr[index1], arr[index2]);
    }

}
  int main() {
      int arr[] = {1, 2, 3, 4, 5};
      int size = sizeof(arr) /sizeof(arr[0]);

      reverArray(arr, size);
      //print reversed array
      for (int i = 0; i < size; i++){
            std::cout << arr[i] <<" ";
      }

      return 0;

  }













































































































































