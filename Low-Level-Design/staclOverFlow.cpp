#include <bits/stdc++.h>
using namespace std;


class Vote{
    int id;
    User author;
    bool isUpvote;

    public: 
    Vote(int id, User author, bool isUpvote){
        this->id  = id;
        this->author = author;
        this->isUpvote = isUpvote;
    }
};
class Tag{
    int id ;
    string tagName;
    public:
    Tag(int id, string tagName){
        this->id = id;
        this->tagName = tagName;
    } 
};

class Reputation{

    int score;
    public:

    Reputation(){
        this->score = 0;
    }
    void increaseReputation(){
        score++;
    }
    void decreaseReputation(){
        score--;
    }
    int getReputaion() {
        return score;
    }

};

class Comment{
    int id; 
    string content;
    int id ;
    User author; 
    string content;
    vector<Vote*> Votes;

    public:

    Comment(int id, string content, User author){
          this->id = id;
          this->content = content;
          this->author = author;
    }

     void addVote(Vote *vote){
        Votes.push_back(vote);
    }
};

class Answer{
    private: 
     int id ;
     User author; 
     string content;
     vector<Comment*>Comments;
     vector<Vote*> Votes;
    public:

    Answer(int id, string content, User author){
          this->id = id;
          this->content = content;
          this->author = author;
    }

    void addComment(Comment *comment){
        Comments.push_back(comment);
    }

    void addVote(Vote *vote){
        Votes.push_back(vote);
    }


};

class Question{
     private: 
     int id ;
     string Title;
     User author; 
     string content;
     vector<Answer*> Answers;
     vector<Comment*> Comments;
     vector<Tag*> Tags;
    

     public:

    Question(int id, string Title, User author, string content){

    }
     void addAnswer(Answer *answer){
        Answers.push_back(answer);
    }

     void addComment(Comment *comment){
        Comments.push_back(comment);
    }

     void addTags(Tag *tag){
        Tags.push_back(tag);
     }

};




class User{
    private: 
    int id;
    string name;
    Reputation reputation;
    //...
    vector< Question *> Questions;
    vector< Answer *> Answers;
    vector < Comment *> Comments; 

    public: 
    void addQuestion(Question *question){

         Questions.push_back(question);
         return;
    }

    void addAnswer(Answer *answer){
        Answers.push_back(answer);
    }

    void addComment(Comment *comment){
        Comments.push_back(comment);
    }

    void updateReputation(){}
   

};








int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // const data = req.data;

    // if(data is for question) questionService();
    // if(data is for )

    
    return 0;
}