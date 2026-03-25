
class QuestionService{

    map<int,Question*> registry;

    int id;

    public:

    QuestionService(){
        id=0;
    }

    void add_ques(string title, string content, User* user){

        id++;

        Question* q=new Question(user,title,content);

        user->questions.push_back(q);

        registry[id]=q;

    }

    void add_answer(string content, User* user, Question* ques){

        id++;

        Anwer* a=new Answer(user,ques,content);

        user->answers.push_back(a);

        ques->answers.push_back(a);

        registry[id]=q;

    }

    void upvote_ques(Question* q){

        q->upvote();

        q->owner->reputation++;


    }

    void downvote_ques(Question* q){

        q->downvote();

        q->owner->reputation--;


    }

    //similarly upvote answers (pass Answer*)



};