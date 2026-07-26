class test : public student {
    // Add set_marks() method here.
     public: 
    float  m[5];
    void set_marks(float marks[]){
        for(int i=0;i<5;i++){
            m[i] = marks[i];
        }
    }
};

class result : public test {
    // Add display() method here.
       public :
    float total = 0, avg;
    
    void display(){
        int total = 0;
        for(int i=0;i<5;i++){
            total += m[i];
        }
        avg = total/5;
        cout << roll_number << " " << total << " " << avg << endl;
    }
};