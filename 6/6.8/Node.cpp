#include <bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};