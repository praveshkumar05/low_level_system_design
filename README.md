# Funtional Requirements



# Users can post questions, answer questions, and comment on questions and answers.

Users can vote on questions and answers.

Questions should have tags associated with them.

Users can search for questions based on keywords, tags, or user profiles.

The system should assign reputation score to users based on their activity and the quality of their contributions.


# 3.1 Define classes and relationships
Translate entities into classes and come up with a list of attributes you want to have in those classes.

If your design consists of multiple classes, figure out how would they would relate with each other.

In our Stack Overflow example, here are some of the relationships between classes:

A User can ask many Questions, provide many Answers and add many Comments.

A Question can have many Answers, Comments, Tags and Votes.

An Answer can have many Comments and Votes.

A Comment is composed within a Question or an Answer.

A Tag is composed within a Question.
#   l o w - l e v e l - s y s t e m - d e s i g n -  
 