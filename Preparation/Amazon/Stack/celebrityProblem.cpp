#include<bits/stdc++.h>
using namespace std;
bool doesAKnowB(vector<vector<int>> &arr, int A, int B){
    if(arr[A][B]){
        return true;
    }else{
        return false;
    }
}

int celebrityProblem(vector<vector<int>> &arr){
    stack<int> st;
    for(int i=0; i<arr.size(); i++){
        st.push(i);
    }

    while(st.size()>=2){
        int A = st.top();
        st.pop();
        int B = st.top();
        st.pop();
        // check does A know B
        if(doesAKnowB(arr, A, B)){
            // if A knows B then A is not a celebrity
            st.push(B);
        }else{
            // if A does not know B then B is not a celebrity
            st.push(A);
        }
    }

    int C = st.top(); // Potential -> most likely possible
    st.pop();
    for(int i=0; i<arr.size(); i++){
        if(i!=C){
            if(doesAKnowB(arr, i, C)== false || doesAKnowB(arr, C, i) == true){
                return -1;
            }
        }
    }
    return C;
}

int main(){
    vector<vector<int>> matrix;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    int id = celebrityProblem(matrix);
    if(id==-1){
        cout<<"\nNo Celebrity"<<endl;
    }else{
        cout<<"\nCelebrity ID: "<<id<<endl;
    }
    return 0;
}