#include<stdio.h>
 int move(int fr, int to);
 int towers(int n,int fr, int to,int spare);
 int main()
 {
     towers(4,1,2,3);
 }
 int move(int fr,int to)
 {
     printf("move from tower %d to tower %d\n",fr,to);
 }
int towers(int n,int fr, int to,int spare)
{
    if(n==1)
    {
        move(fr,to);
    }
    else{
        towers(n-1,fr,spare,to);
        towers(1,fr,to,spare);
        towers(n-1,spare,to,fr);
    }
}