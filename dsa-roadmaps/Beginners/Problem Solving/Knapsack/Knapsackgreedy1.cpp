//KNAPSACK PROBLEM USING GREEDY TECHNIQUE
#include<iostream>
using namespace std;

//PRE-PROCESSING PHASE DECLARATIONS
#define MAX 100

//DECLARING STRUCTURE FOR ITEM
struct item
{
    int weight;
    int profit;
}items[MAX];

//DRIVER PROGRAM
int main(){
    cout<<"20BCE2946 - GREEDY METHOD 1"<<endl;
    cout<<"MAX CAPACITY: 100"<<endl;
    int n,W;            //number of items and max capacity
    struct item s[MAX];   //item array
    n=5;W=100;
    //getting input
    cout<<"Enter Weights and Profit ( Weight <space> Profit ): "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i].weight;
        cin>>s[i].profit;
    }

    //sorting based on profit
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].profit<s[j].profit)
            {
                swap(s[i],s[j]);
            }
        }
    }

    int weights[MAX];
    int count=0,sum=0;
    //main-logic of function
    for(int i=0;i<n;i++){
        sum+=s[i].weight;
        if(sum<=W){
            weights[count]=s[i].weight;
            count++;
        }
        else if(sum>W){
            sum-=s[i].weight;
        }
    }
    cout<<"Items to include : ";
    for(int i=0;i<count;i++){
        cout<<weights[i]<<" ";
    }
    cout<<endl;
    return 0;
}