#include<iostream>
using namespace std;

class {
    public:

    int calPoints(vector<string> & operations){
        stack<int> st;
        for(int i=0; i<operations.size();i++){
            string op = operations[i];
            //check the type of operation
            // and work accordingly
            if(op == "+"){
                //push sum of two previous numbers
                int A = st.top();
                st.pop();
                int B = st.top();
                st.pop();
                int sum = A + B;
                st.push(sum);
            }else if(op == "D"){
                //puch sum of two previous numbers
                st.push(st.top()*2);
                

            }else if(op == "C"){
                //remove the previous number from stack
                //int num = st.top();
                st.pop();

            }else{
                //add that number into the stack
                int mum = stoi(op);
                st.push(num);

            }
        }
    }
}

int main(){
    int x;

}