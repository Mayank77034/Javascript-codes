#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *nxt;
    Node (int value){
    data = value;
    nxt = nullptr;

}
};
class singlylinkedlist{
    private:
    Node *head;
    public:
    singlylinkedlist(){
        head = nullptr;
    }

};