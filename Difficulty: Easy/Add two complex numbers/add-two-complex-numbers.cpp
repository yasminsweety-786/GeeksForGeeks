/*Structure of a Complex Number
class Complex {
  public:
    int real;
    int img;
};
*/

class Solution {
  public:
    Complex add(Complex c1, Complex c2) {
        // code here
        return {c1.real+c2.real,c1.img+c2.img};   
    }
};
