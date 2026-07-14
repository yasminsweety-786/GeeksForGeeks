class Cuboid {
    // Add your code here.
protected:
    int length;
    int width;
    int height;
public:
    void display(){
        cout<<length<<" "<<width<<" "<<height<<endl;
    }
};

class CuboidVol : public Cuboid {
    // Add your code here.
public:
    void read_input(int length,int width,int height){
        this->length= length;
        this->width= width;
        this->height= height;
    }
    void display(){
        cout<<(length*width*height)<<endl;
    }
};