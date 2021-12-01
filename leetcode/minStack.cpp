#include <iostream>
#include <cmath>
#include <deque>
using namespace std;
class Minstack{
private:
    deque<int> minst;
    int Min;
    bool select;
public:
    Minstack(){
    select=false;
    Min=0;
    while(!minst.empty()){
        minst.erase(minst.begin(),minst.end());
    }
    }
    int min(){
    if(select){
        for(int i=0;i<minst.size();i++){
            if(minst[i]<Min){
                Min=minst[i];
            }
        }
    }
    select=false;
    return Min;
    }
    void push(int value){
        if(value<Min){
            Min=value;
        }
        minst.push_back(value);
    }
    void pop(){
        if(minst.back()==Min){
            select=true;
        }
        minst.pop_back();
    }
    int top(){
        return minst.back();
    }
};
int main()
{
   
   system("pause");
   return 0;
}
#include <iostream>
#include <cmath>
#include <deque>
#include <stack>
using namespace std;
class MinStack{
private:
    stack<int> st,minst;
    int Min;
    int n=0;
public:
    MinStack(){
    }
    int min(){
        return st.top();
    }

    void push(int value){
        if(n==0){
            Min=value;
            n++;
            st.push(Min);
        }
        if(value<Min){
            Min=value;
            st.push(Min);
        }
        minst.push(value);
    }
    void pop(){
                
        if(minst.top()==Min){
            minst.pop();
            st.pop();
        }
        else{
            minst.pop();
        }

    }
    int top(){
        return minst.top();
    }
};
