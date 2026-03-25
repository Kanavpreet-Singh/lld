class User{


    string name;
    int id;

    vector<Question*> questions;
    vector<Answer*> answers;
    int reputation;

    public:

    User(string n, int i):name(n),id(i),reputation(0){}


};

class Votable {
    public:
        int voteCount = 0;

        void upvote()   { voteCount += 1; }
        void downvote() { voteCount -= 1; }
};

class Question:public Votable{

    User* owner;

    string title;

    string content;

    vector<Answer*> answers;

    public:

    Question(User* u, string t, string c):owner(u),title(t),content(c){}


};

class Answer:public Votable{


     User* owner;

     Question* ques;

     string content;

    public: 

    Answer(User* u, Question* q, string c):owner(u),ques(q),content(c){}


};