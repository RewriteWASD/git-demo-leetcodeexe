#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
class   CQueue{
public:
CQueue(){
    while(!appendst.empty()){
        appendst.pop();
    }
    while(!deletst.empty()){
        deletst.pop();
    }
}
void appendTail(int value){
    if(!deletst.empty()){
        while(!deletst.empty()){
            appendst.push(deletst.top());
            deletst.pop();
        }
        appendst.push(value);
    }
    else{
        appendst.push(value);
    }
}
int deleteHead(){
    if(appendst.empty()){
        if(deletst.empty()){
            return -1;
        }else{
            int j=deletst.top();
            deletst.pop();
            return j;
        }
    }else{
        while(!appendst.empty()){
            deletst.push(appendst.top());
            appendst.pop();
        }
        int j=deletst.top();
        deletst.pop();
        return j;
    }    
}
private:
stack<int> appendst;
stack<int> deletst;

};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
int main()
{
   CQueue* obj=new CQueue();
   //obj->appendTail();
   system("pause");
   return 0;
}
