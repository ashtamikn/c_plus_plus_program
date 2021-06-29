// hackerank 12
// You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

// Complete the Student class by writing the following:

// A Student class constructor, which has  parameters:
// A string, .
// A string, .
// An integer, .
// An integer array (or vector) of test scores, .
// A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
class Student :  public Person{
    private:
        vector<int> testScores;  //stores array in contiguous manner and chages size
    public:
        Student(string firstName, string lastName, int id, std::vector<int>& scores)
            : Person(firstName,lastName,id), testScores(scores) {}
        
        char calculate() {
            int average=0;
            for(auto score : testScores) {
                average += score;
            }
            average=average/testScores.size();
            switch (average) {
                case 90 ... 100 : return 'O';// same as saying range
                case 80 ... 89 : return 'E';
                case 70 ... 79 : return 'A';
                case 55 ... 69 : return 'P';
                case 40 ... 54 : return 'D';
                default: return 'T';
            }
        }
};

int main() {
    string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}