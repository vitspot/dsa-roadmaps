/*
The given problem is a knapsack problem.
It can be solved using many ways, for example :
'THE TABLE METHOD'(which has been used below) 
or 'THE SET THEORY METHOD’.
This is an optimisation problem.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //declaring variables for user input 
    int n,m,P[n+1],wt[m+1];
    P[0]=0;wt[0]=0;

    //getting user input
    cout<<"ENTER THE NUMBER OF ITEMS : ";
    cin>>n;
    cout<<"ENTER THE WEIGHTS OF ITEMS : ";
    for(int i=1;i<n+1;i++){
        cin>>wt[i];
    }
    cout<<"ENTER THE PRIORITIES OF ITEMS : ";
    for(int i=1;i<n+1;i++){
        cin>>P[i];
        // P[i] = (n+1-P[i]);
    }
    cout<<"ENTER THE MAXIMUM ALLOWED CAPACITY: ";
    cin>>m;
    int k[n+1][m+1];

    //main logic of the program, creating the table.
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=m;w++){
            if(i==0||w==0){
            k[i][w]=0;}

            else if(wt[i]<=w){
            k[i][w] = max(P[i]+ k[i-1][(w-wt[i])],k[i-1]						   [w]);}

            else{
                k[i][w]=k[i-1][w];
            }
        }
    }
    int i=n,j =m;

    //printing the required output.
    while(i>0&&j>=0)
    {
        if(k[i][j]==k[i-1][j]){
        cout<<"item "<<i<<" is excluded"<<endl;i--;}
        else{
            cout<<"item "<<i<<" is included"<<endl;
		   j=j-wt[i];i--;
        }
    }

    return 0;
}
