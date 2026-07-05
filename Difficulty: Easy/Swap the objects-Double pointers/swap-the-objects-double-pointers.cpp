// Function to swap two objects **obj1 and **obj2
void swapper(Person **obj1, Person **obj2) {
    // Your code here
    Person *temp = *obj1;   // store the address of obj1
    *obj1 = *obj2;          // assign obj2's address to obj1
    *obj2 = temp; 
    
}
