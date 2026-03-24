#include<bits/stdc++.h>
using namespace std;

#include "Question.cpp"
#include "Answer.cpp"

class User{

    private:

    string name;
    string email;
    int age;

    vector<Question*> questions;
    vector<Answer*> answers;

};