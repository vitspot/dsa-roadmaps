#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
    int n = arr.size();
    int type = 0;
    vector<int> types (5,0);
    for(int i = 0; i < n; i++){
        if(arr[i] == 1) { types[0]++; continue; }
        else if(arr[i] == 2) {types[1]++; continue;}
        else if(arr[i] == 3) {types[2]++; continue;}
        else if(arr[i] == 4) {types[3]++; continue;}
        else if(arr[i] == 5) {types[4]++; continue;}
    }
    cout << " " << types[0] << " " << types[1] << " " << types[2] << " " << types[3] <<         " " << types[4] <<endl;
     int temp = 0;
    for(int i = 1; i < 5; i++){
        if(types[i] > types[temp]) {
            temp = i;
    }
    }
//     Max=0
// For I=1; I<n ;I++
// {
// If arr[I]>arr[max]
// Max=i
// }
    
    
    return temp + 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
