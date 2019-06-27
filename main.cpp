#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {

    queue<int> mQueue;
    int input[1001]={};
    int flag[1001]={};
    int m, n;
    int count=0;
    cin >> m >> n;
    int i=0;

    while(i<n){
        cin>>input[i];
        i++;
    }

    for(int i=0;i<1001;i++){
        flag[i]=0;
    }

    for(int i=0; i<n;i++){
        if(flag[input[i]]==0){
            if(mQueue.size()<m){
                mQueue.push(input[i]);
                flag[input[i]]=1;
                count++;
            }
            else{
                flag[mQueue.front()]=0;
                mQueue.pop();
                flag[input[i]]=1;
                mQueue.push(input[i]);
                count ++;
            }
        }
    }


    cout<<count;
    return 0;
}