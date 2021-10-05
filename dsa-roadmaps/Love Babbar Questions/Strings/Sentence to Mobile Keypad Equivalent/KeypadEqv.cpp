#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string position[] = {"2","22","222","3","33","333","4","44","444","5","55","555",
                    "6","66","666","7","77","777","7777","8","88","888",
                    "9","99","999","9999"};
    
    string initial_str = "Welcome to Hacktoberfest", final_str = "";
    
    //Transforms the entire string to uppercase
    transform(initial_str.begin(), initial_str.end(), initial_str.begin(), ::toupper);
    for (int i = 0; i < initial_str.length(); i++) {
        if (initial_str[i] == ' ')
            final_str += "0";
        else
            final_str += position[int(initial_str[i]-'A')];
    }
    
    cout<<"The mobile keypad equivalent of the given string is: "<<final_str;
}
