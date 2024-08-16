#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
#define ALPHABET 26 //GLOBAL LABEL SETTING VALUE 26 A-Z or a-z
//NODE STRUCT 
struct NODE
{
	NODE *WORD[ALPHABET];
	bool isfound;
	string *meaning;
};
class trietree//TRIE TREE CLASSS
{
public:
	NODE *tree; //ROOT
	NODE* search(NODE *root, string key, string &search, int &indx); //SEARCH FUNCTION

	
	string UPDATE(NODE *root, string key, string Meaning);//UPDATE FUNCTION
	
	string DELETEWORD(NODE *root, string key);//DELATE WORD FUNCTION
	
	NODE *getNode(void);//CREATING NODE FUNCTION
	string insert(NODE *root, string input, string meaning);//ADD WORD  FUNCTION
	
	void Loading(NODE *root);//LOADING DICTIONARY FUNCTION
	void find_all_words(NODE* root, string key, vector<string>&all_words);//FIND ALL NEARBY WORD FUNCTION
	

	vector<string> suggestions(NODE* root, string key);//SUGGESTION FUNCTIONS FUNCTION
	
	
};

