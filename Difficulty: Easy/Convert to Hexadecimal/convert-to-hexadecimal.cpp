#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    vector<char> ans;

    // printing hexadecimal value of a.
    
    char arr[] = "0123456789abcdef";
    
    while(a > 0){
        
        ans.push_back(arr[a % 16]);
        
        
        a = a / 16;
    }
    
    reverse(ans.begin(), ans.end());
    
    for(char c : ans){
        
        cout << c;
        
    }
    
    cout << endl;
    
    
    return 0;
}

