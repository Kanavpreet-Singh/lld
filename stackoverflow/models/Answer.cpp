#include<bits/stdc++.h>
#include "Question.cpp"
#include "User.cpp"
using namespace std;



class Answer:public Votable{

    private:

    User owner;
    string content;
    
    Question* question;



};