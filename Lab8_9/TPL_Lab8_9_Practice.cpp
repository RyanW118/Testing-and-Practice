#include <iostream>
using namespace std;

// This is the question 4b answer section

// This is pass by value
// void swap(int a, int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

//This is pass by reference
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// C++ does not natively support pass by value-result
void question4(){
    int value = 2, list[5] = {1, 3, 5, 7, 9};
    swap(value, list[0]);
    cout << "The result after swap(value, list[0]) are --> value: " << value << " and list[0]: "<< list[0] <<endl;
    swap(list[0], list[1]);
    cout << "The result after swap(list[0], list[1]) are --> list[0]: " << list[0] << " and list[1]: "<< list[1] <<endl;
    swap(value, list[value]);
    cout << "The result after swap(value, list[0]) are --> value: " << value << " and list[value]: "<< list[value] <<endl;
    cout << "SO the final result --> \n value: " << value << " and the list[] are: ";
    for (int i =0; i<5;i++){
        cout << " " << list[i];
    }
    cout << endl;
}

int qlist[2] = {1, 3}; 
void fun_byreference (int &first, int &second) {  
    // we can show the value here
    cout << "After line 1: "<< first << " " << second << endl;
    first += first;  	 	// Line 2  
    cout << "After line 2: "<< first << " " << second << endl;
    second += second; 	 	// Line 3  
    cout << "After line 3: "<< first << " " << second << endl;
    cout << "The list[0]: " << qlist[0] << " and the list[1]: " << qlist[1]<<endl;
} 
void fun_byvalue (int first, int second) {  
    // we can show the value here
    cout << "After line 1: "<< first << " " << second << endl;
    first += first;  	 	// Line 2  
    cout << "After line 2: "<< first << " " << second << endl;
    second += second; 	 	// Line 3  
    cout << "After line 3: "<< first << " " << second << endl;
}   


void question5(){
     
    cout << "The list[2] contain: " << qlist[0] << " and " <<qlist[1] << endl;
    // fun_byvalue(list[0], list[1]); 	 // Line 1  
    // cout << "This is the output in line 4 --> list[2] values: "<< list[0] << " " << list[1]; // Line 4  

    fun_byreference(qlist[0], qlist[1]);
    cout << qlist[0] << qlist[1];
    cout << "This is the output in line 4 --> list[2] values: "<< qlist[0] << " " << qlist[1]; // Line 4 

}  

int main() {
    
    //question4();
    
    question5();

    return 0;
}