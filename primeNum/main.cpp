#include <iostream>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
 
    return true;
}

int sortPrime(int arr[], int size) {
    int i = 0;
    while(i < size) {
        if(isPrime(arr[i]) == false) {
            //move all content one cell left
            if(i < size) {
                size -= 1;
                for (int j=i; j<size; j++) {
		            arr[j] = arr[j+1];
                }
            }
        i = 0;
        }
        else
            i++;
    }
    return size;
}

int main() {
    const int arrSize = 10; //enter any size here
    int arr[arrSize]{};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
	size = sortPrime(arr, size);
    std::cout << "Prime here are:\n";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
