#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"size of stack "<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<< endl <<"size of stack "<<st.size()<<endl;
}
