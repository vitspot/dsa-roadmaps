//header files
#include <iostream>
#include <algorithm>
using namespace std;
//preprocessing phase
#define MAX 100

//user-defined function
int removeItem(int W, int weights[], int total, int l,int temp[])
{
    /*finding the most significant item number
    till the allowed capacity is reached.*/
    for (int i = 0; i < l; i++)
    {
        if (weights[i] == W)
        {
            cout << "Item Number to Include : " << i + 1 << endl;
            return -1;
        }
    }
    int tot = 0, j = 0, k = 0;
    int p = 0;
    int indices1[100], indices2[100];
    sort(temp, temp + l + 1, greater<int>());
    while (j <= l)
    {
        tot += temp[j];
        if (tot == W)
        {
            indices1[p] = j;
            p++;j++;
            break;
        }
        else if (tot > W)
        {
            tot -= temp[j];
            j++;
        }
        else
        {
            indices1[p] = j;
            j++;
            p++;
        }
    }
    while (total >= W)
    {
        int min = (total - weights[0]) - W;
        int item = 0;
        for (int i = 0; i < l; i++)
        {
            int diff = (total - weights[i]) - W;
            if (abs(min) > abs(diff))
            {
                min = diff;
                item = i;
            }
        }
        total = total - weights[item];
        indices2[k] = item;
        k++;
        //displaying the item number to remove.
    }

    if (tot > total)
    {
        for (int m = 0; m < p; m++)
        {
            cout << "ITEM WITH WEIGHT " <<"\t"<<temp[indices1[m]] << " " << endl;
        }
    }
    else if (tot < total)
    {
        for (int m = 0; m < k; m++)
        {
            cout << "ITEM NUMBER " << weights[indices2[m]] << endl;
        }
    }
    else
    {
        cout << "EITHER" << endl;
        for (int m = 0; m < p; m++)
        {
            cout << "ITEM WITH WEIGHT " << temp[indices1[m]] << endl;
        }
        cout << "OR " << endl;
        for (int m = 0; m < k; m++)
        {
            cout << "ITEM WITH WEIGHT " << weights[indices2[m]] << endl;
        }
    }
    return 0;
}

//main function of the program
int main()
{
    //getting required inputs from the user.
    int W = 0, n = 0, weights[MAX], total = 0,temp[MAX];
    cout << "ENTER THE TOTAL NUMBER OF ITEMS : ";
    cin >> n;
    cout << "ENTER THE WEIGHTS OF ITEMS(in Kgs) : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
        temp[i] = weights[i];
        total += weights[i];
    }
    cout << "ENTER ALLOWED CAPACITY : ";
    cin >> W;

    //calling the user defined function.
    int index = removeItem(W, weights, total, n,temp);
    return 0;
}