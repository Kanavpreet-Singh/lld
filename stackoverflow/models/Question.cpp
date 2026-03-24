#include<bits/stdc++.h>
using namespace std;

#include "User.cpp"
#include "Answer.cpp"

class Question{

    private:

    string title;
    string content;

    User owner;
    
    vector<Answer> answers;

};