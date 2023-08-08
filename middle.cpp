#include<iostream>
using namespace std;
#include<stack>
void middle(stack<int> &st,int n){
    if(st.size()==n/2+1){
        cout<<st.top();
    return;
    }
    int temp = st.top();
    st.pop();
    middle(st,n);
    st.push(temp);

}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int n = st.size();
    middle(st,n);
}