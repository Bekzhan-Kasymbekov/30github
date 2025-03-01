#include <vector>
#include <iostream>

void reverseArray(int* arr, int size){
  for(int i = 0; i < size/2; i++){
  int* ptr1 = arr + i;
  int* ptr2 = arr + size - 1 - i;

  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  }
}

int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  for(int i = 0; i < arrSize; i++){
    std::cout << arr[i] << std::endl;
  }

  reverseArray(arr, arrSize);

  for(int i = 0; i < arrSize; i++){
    std::cout << arr[i] << std::endl;
  }
}

