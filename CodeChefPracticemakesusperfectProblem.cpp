//Using Array
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//Taking the Input
	int *numberofProblems = new int[4];
	//setting count value to 0; 
	int count = 0;
	for(int i = 0 ; i < 4; i++){
	    cin >> numberofProblems[i];
	    if(numberofProblems[i] >= 10){
	        count++;
	    }
	}
	cout<<count;
	
	return 0;
}




//Using Vector
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int count = 0;
	int a;
	vector<int>numberofProblems;
	for(int i=0; i<4; i++)
    {
      cin>>a;
      numberofProblems.push_back(a);
      if(numberofProblems[i] >= 10){
          count++;
      }
    }
    cout<<count;
	return 0;
}

// Code: PRACTICEPERF 
// Contest Code: 
// MAY222 Difficulty Rating:467
