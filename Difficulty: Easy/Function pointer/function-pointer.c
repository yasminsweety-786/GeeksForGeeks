int sub(int a, int b) {
    // code here
    return a-b;
}

int add(int a, int b) {
    
    // code here
     return a+b;
}

void compute(int a, int b,int(*funP)(int,int) /*write your function pointer*/) {

    printf("%d\n",funP(a,b));
    // print result as per function pointer
    // code here
}
