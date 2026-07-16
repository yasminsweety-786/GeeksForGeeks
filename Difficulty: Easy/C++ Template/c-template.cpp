template <class T>

class minElement

{

    private:

    T comp_a;

    

    public:

    // constructor

    minElement(T obj_input){

        comp_a = obj_input;

    }

    

    // method:

    void check(T comp_b){

        T result = (comp_a < comp_b)? comp_a:comp_b;

        cout << result << endl;

    }

};