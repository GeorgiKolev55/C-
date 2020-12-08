
#include <string>

class Student
{
    private:
    std::string name;
	double exma;
	double quizzes;
public:
	Student();
	
	std::string getName() ;
	void setName(const std::string) ;
	double getExam() ;
	void setExam(const double examm);
	double getQuizzers();
	void setQuizzers(const double quizz);
	double getFinalGrade();
	char displayGrade();
};
Student::Student() {};
std::string Student::getName() { return this->name; }
void Student::setName(const std::string namee) {this->name = namee; return; };

double Student::getExam() { return this->exma; }
void Student::setExam(const double examm) { this->exma = examm; return; }

double Student::getQuizzers() { return this->quizzes; }
void Student::setQuizzers(const double quizz) { this->quizzes = quizz; return; }

double Student::getFinalGrade() {
	double examGrade = this->exma * 0.4;
	double quizzGrade = this->quizzes * 0.6;
	double finalGrade = examGrade + quizzGrade;
	return finalGrade;
}

char Student::displayGrade() {
	double grade = Student::getFinalGrade();
	if (grade >= 0 && grade <= 60) { return 'F'; }
	else if (grade >= 61 && grade <= 70) { return 'E'; }
	else if (grade >= 71 && grade <= 80) { return 'D'; }
	else if (grade >= 81 && grade <= 90) { return 'B'; }
	else if (grade >= 91 && grade <= 100) { return 'A'; }
	return;
}

void main() {

	Student student ;
	student.setExam(80);
	student.setQuizzers(90);
	student.displayGrade();

	
}



