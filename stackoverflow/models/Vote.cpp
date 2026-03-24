class Vote{

    private:

    User* user;

    Votable* target;

    int vote_count;

    public:

    Vote(User* u, int c):user(u),vote_count(c){}


    

   

};