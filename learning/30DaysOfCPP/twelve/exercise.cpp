#include <iostream>
#include <vector>

using namespace std;


class Student: public Person {
  private:
    vector<int> testScores;
  public:
    Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName, lastName, id) {
      this->testScores = testScores;
    }

  string calculate() {
    double a = 1.0 * accumulate(testScores.begin(), testScores.end(), 0.0)/ testScores.size();
    int average = int(a);
    string letter = "";
    if (average >= 90 && average <= 100) {
        letter = "O";
    } else if (average >= 80 && average < 90) {
        letter =  "E";
    } else if (average >= 70 && average < 80){
        letter =  "A";
    } else if (average >= 55 && average < 70) {
        letter =  "P";
    } else if (average >= 40 && average < 55) {
        letter =  "D";
    } else {
        letter = "T";
    }
      return letter;
    }
};

class Student: public Person {
  private:
    vector<int> testScores;
  public:
    Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName, lastName, id) {
      this->testScores = testScores;
    }

    string calculate() {
      int average = accumulate(testScores.begin(), testScores.end(), 0)/testScores.size();
      switch (average) {
        case (average >= 90 && average <= 100): return "O"; break;
        case (average >= 80 && average < 90): return "E"; break;
        case (average >= 70 && average < 80): return "A"; break;
        case (average >= 55 && average < 70): return "P"; break;
        case (average >= 40 && average < 55): return "D"; break;
        case (average < 40): return "T"; break;
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
