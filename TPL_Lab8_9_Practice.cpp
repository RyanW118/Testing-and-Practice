#include <iostream>
using namespace std;

//This is the question 4b answer section
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int value = 2, list[5] = {1, 3, 5, 7, 9};
    swap(value, list[0]);
    cout << "The result after swap(value, list[0]) are --> value: " << value << " and list[0]: "<< list[0] <<endl;
    swap(list[0], list[1]);
    cout << "The result after swap(list[0], list[1]) are --> list[0]: " << list[0] << " and list[1]: "<< list[1] <<endl;
    swap(value, list[value]);
    cout << "The result after swap(value, list[0]) are --> value: " << value << " and list[value]: "<< list[value] <<endl;
    cout << "SO in Pass by Value, the final result of the value: " << value << " and the list[] are: ";
    for (int i =0; i<5;i++){
        cout << " " << list[i];
    }
    cout << endl;
    return 0;
}