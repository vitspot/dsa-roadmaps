#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct phone{
    string model;
    int year;
    float camera;
    int ram;
    int memory;
    string os;
} s[10];
void insertionSort(struct phone p[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = p[i].ram;
        j = i - 1;
        while (j >= 0 && p[j].ram > key) {
            p[j + 1].ram = p[j].ram;
            j--;
        }
        p[j + 1].ram = key;
    }
}
int main(){
    int i, n;
    cout << "Enter Number of Mobile Phones" << endl;
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "Enter Model of Phone : "<< i + 1 << endl;
        cin >> s[i].model;
        cout << "Enter Year of Phone : "<< i + 1 << endl;
        cin >> s[i].year;
        cout << "Enter Camera Resoluton of Phone : "<< i + 1 << endl;
        cin >> s[i].camera;
        cout << "Enter RAM of Phone : "<< i + 1 << endl;
        cin >> s[i].ram;
        cout << "Enter Memory of Phone : "<< i + 1 << endl;
        cin >> s[i].memory;
        cout << "Enter OS of Phone : "<< i + 1 << endl;
        cin >> s[i].os;
    }
    insertionSort(s, n);
    cout << endl;
    for (i = 0; i < n; i++){
        cout << s[i].year << endl;
        cout << s[i].model << endl;
        cout << s[i].camera << endl;
        cout << s[i].ram << endl;
        cout << s[i].memory << endl;
        cout << s[i].os << endl;
        cout<<endl;
    }
    return 0;
}