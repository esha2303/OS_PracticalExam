#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<bits/stdc++.h>
using namespace std;
void forkexample()
{
    if(fork()==0)
    cout<<"Hello from child!\n";
    else
    cout<<"Hello from Parent!\n";
}
int main()
{
    forkexample();
    return 0;
}