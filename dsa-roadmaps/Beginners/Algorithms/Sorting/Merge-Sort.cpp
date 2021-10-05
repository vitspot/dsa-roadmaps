#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct patient{
    int hn;
    char name[200];
    int age;
    int tn;
    float height;
    float weight;
    char dis[200];
};
void quickSort(struct patient s[], int first, int last){
    int i, j, pivot;
    patient temp;
    if (first < last){
        pivot = first;
        i = first;
        j = last;
        while (i < j){
            while (s[i].tn <= s[pivot].tn && i < last)
                i++;
            while (s[j].tn > s[pivot].tn)
                j--;
            if (i < j){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        temp = s[pivot];
        s[pivot] = s[j];
        s[j] = temp;
        quickSort(s, first, j - 1);
        quickSort(s, j + 1, last);
    }
}
int main(){
    patient s[10];
    int choice, n, i;
    cout << "::: =>Quick Sort Application<= :::" << endl;
    cout << "Number of patients"<<endl;
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "Hospital Number: ";
        cin>>s[i].hn;
        cout << "Patient Name: ";
        cin>>s[i].name;
        cout << "Age: ";
        cin>>s[i].age;
        cout << "Token Number: ";
        cin>>s[i].tn;
        cout << "Height: ";
        cin>>s[i].height;
        cout << "Weight: ";
        cin>>s[i].weight;
        cout << "Disease: ";
        cin>>s[i].dis;
    }
    quickSort(s, 0, n - 1);
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Hospital Number: " <<s[i].hn << endl;
        cout << "Patient Name: " << s[i].name << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "Token Number: " <<s[i].tn << endl;
        cout << "Height: " << s[i].height << endl;
        cout << "Weight: " << s[i].weight << endl;
        cout << "Disease: " <<s[i].dis << endl;
        cout << endl;
    }
    return 1;
}