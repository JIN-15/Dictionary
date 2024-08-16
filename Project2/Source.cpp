#include "DICTIONARY.h"
#include <vector>
#include <queue>
NODE* trietree::search(NODE *root, string key, string &search, int &indx)
{
	NODE *TEMP = root;//CURRENT

	int index;
	for (int i = 0; i < key.length(); i++)
	{
		if (key[i] <= 'Z' &&key[i] >= 'A')
		{
			//IF CHARACTER BETWEEN A -Z THEN THIS
			index = key[i] - 'A';//INDEX CALCULATION FOR CAPITAL
			if (TEMP->WORD[index] == NULL)
			{
				//IF NOT EXIST WORd
				search = "!";
				indx = i;
				return TEMP;
			}
		}
		else if (key[i] <= 'z' &&key[i] >= 'a')
		{
			//IF CHARACTER BETWEEN a -z THEN THIS
			index = key[i] - 'a';//INDEX CALCULATION FOR SMALL
			if (TEMP->WORD[index] == NULL)
			{
				//IF NOT EXIST WORd
				search = "!";
				indx = i;
				return TEMP;
			}
		}
		else
		{
			continue;
		}
		
		//IF SOMETHI NG ELSE COME IN KEY SKIP 
	TEMP = TEMP->WORD[index];
	//MOVING TO NEXT PRESENT CALCULATED INDEX
	}


	
	if (TEMP->isfound)
	{
		//IF WORD FOUNG
		search = *TEMP->meaning;
		return TEMP;
	}
	else
	{//WORD PRESENT BUT AS WORD BUT AS PREFIX OF SOMEOTHER WORD
		search = "!";
		return TEMP;
	}
}

void trietree::find_all_words(NODE* root, string key, vector<string>&all_words)
{
//FUNCTION TO FIND ALL POSIBLE WORD FROM THE KEY
	if (root == NULL) return;
	NODE* temp = root;
	int ind;

	for (int i = 0; i < key.size(); i++)
	{
		if (key[i] >= 'A' &&key[i] <= 'Z')
		{
			ind = key[i] - 'A';

			if (temp->WORD[ind] == NULL) return;

		}
		else if (key[i] >= 'a' &&key[i] <= 'z')
		{
			ind = key[i] - 'a';

			if (temp->WORD[ind] == NULL) return;
		}
		else
		{
			continue;
		}

		temp = temp->WORD[ind];
	}


	queue<pair<NODE*, string> > q;// BUILT IN QUEUE TO ENQUQE NODE AND STRING TO STORE
	q.push(make_pair(temp, key));
	string this_word;
	while (!q.empty())
	{
		temp = q.front().first;
		this_word = q.front().second;

		if (temp->isfound) { all_words.push_back(this_word); //IF WORD FOUND THEN PUSH INTO VECTOR STRING
		}
		q.pop();//POPING EVERY PAIR TO CLEAR
		for (int i = 0; i < 26; i++)
		
		{
			//FINDING THE POSSIBLE WORD THAT CAN BE FORMED
			if (temp->WORD[i] != NULL)
			{
				q.push(make_pair(temp->WORD[i], this_word + char(i + int('A'))));
				//PUSHING THE WORD AND TEMP AS WHOLE IN QUEUQ 
			}
		}
	}

}

vector<string>  trietree::suggestions(NODE* root, string key)
{
	//CREATING VECTOR STRING TO STRORE AS MUCH AS WORD FOUND
	vector<string> all_words;
	find_all_words(root, key, all_words);
	return all_words;
}
string  trietree::UPDATE(NODE *root, string key, string Meaning)
{
	//UPADTE WORD FUNCTION
	NODE *TEMP = root;
	int index;
	for (int i = 0; i < key.length(); i++) //LOOP FOR CHECKING WORD EXIST
	{
		if (key[i] <= 'Z' &&key[i] >= 'A')
		{
			index = key[i] - 'A';
			if (TEMP->WORD[index] == NULL)
				return "WORD NOT FOUND TO UPDATE";
		}
		else if (key[i] <= 'z' &&key[i] >= 'a')
		{
			index = key[i] - 'a';
			if (TEMP->WORD[index] == NULL)
				return "WORD NOT FOUND TO UPDATE";
		}
		else
		{
			continue;
		}


		TEMP = TEMP->WORD[index];
	}
	if (TEMP->isfound)

	{
		//FOR CHECKING WORD FOUNDED
		*TEMP->meaning = Meaning;//CHANGING MEANING
		return "WORD UDATED";
	}
	else
	{
		return "WORD NOT FOUND TO UPDATE";
	}
}
string  trietree::DELETEWORD(NODE *root, string key)
{
	//DELETING WORD
	NODE *TEMP = root;
	int index;
	for (int i = 0; i < key.length(); i++) //LOOP FOR CHECKING WORD EXIST
	{
		if (key[i] <= 'Z' &&key[i] >= 'A')
		{
			index = key[i] - 'A';
			if (TEMP->WORD[index] == NULL)
				return "WORD NOT FOUND TO DELETE";
		}
		else if (key[i] <= 'z' &&key[i] >= 'a')
		{
			index = key[i] - 'a';
			if (TEMP->WORD[index] == NULL)
				return "WORD NOT FOUND TO DELETE";
		}
		else
		{
			continue;
		}


		TEMP = TEMP->WORD[index];
	}
	if (TEMP->isfound)
	{
		//WORD FOUNDED
		TEMP->isfound = false;//SETTING FALSE SO THAT OTHER WORD DONT GET DISTURN
		return "WORD DELETED";
	}
	else
	{
		//WORD NOT FOUNDED
		return "WORD NOT FOUND TO DELETE";
	}
}

NODE * trietree::getNode(void)
{
	//FUNCTION FOR CREATING NODE
	NODE *pNode = new NODE;

	pNode->isfound = false;

	for (int i = 0; i < ALPHABET; i++)
		pNode->WORD[i] = NULL;

	return pNode;
}
string  trietree::insert(NODE *root, string input, string meaning)
{
	//INSERTING A NEW WORD IN TREE
	NODE *TEMP = root;
	int index;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] <= 'Z' &&input[i] >= 'A')
		{
			index = input[i] - 'A';
			if (!TEMP->WORD[index])
				TEMP->WORD[index] = getNode();
		}
		else if (input[i] <= 'z' &&input[i] >= 'a')
		{
			index = input[i] - 'a';
			if (!TEMP->WORD[index])
				TEMP->WORD[index] = getNode();
		}
		else
		{
			continue;
		}


		TEMP = TEMP->WORD[index];
	}
	if (TEMP->isfound == true)
	{
		return "WORD ALREADY EXIST";
	}
	else
		TEMP->isfound = true;

	TEMP->meaning = new string;
	*TEMP->meaning = meaning;
	return "WORD ADDED";
}


void  trietree::Loading(NODE *root)
{
//LOADING FUNCTION 
	ifstream file("Dictionary.txt");
	string input;
	file >> input;//REMOVING UPER LINE
	file >> input;
	int index;
	NODE *TEMP;
	while (!file.eof())
	{
		//READING FROM FILE TO THE END 
		TEMP = root;
		file >> input;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] <= 'Z' &&input[i] >= 'A')
			{
				index = input[i] - 'A';
				if (!TEMP->WORD[index])
					TEMP->WORD[index] = getNode();
			}
			else if (input[i] <= 'z' &&input[i] >= 'a')
			{
				index = input[i] - 'a';
				if (!TEMP->WORD[index])
					TEMP->WORD[index] = getNode();
			}
			else
			{
				continue;
			}


			TEMP = TEMP->WORD[index];
		}
		TEMP->isfound = true;
		file >> input;
		TEMP->meaning = new string;
		*TEMP->meaning = input;

	}
}