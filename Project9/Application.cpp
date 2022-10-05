//#include<iostream>
//#include <string>
//#include <sstream>
//
//
//using namespace std;
//
//
//
//struct Option {
//	string text;
//};
//
//
//
//struct Question {
//	string text;
//	Option options[3];
//	string correctAns;
//};
//
//
//
//// Creating a function
//int answerCorrect(Question question, int numOfOptions) { // returns the correct answer in terms of number, making a match between the correct answer and one of the options provided
//	int correct;
//
//
//	for (int j = 0; j < numOfOptions; j++) {
//		if (question.options[j].text == question.correctAns) {
//			correct = j + 1;
//			break;
//
//		}
//		else {
//			correct = -1;
//		}
//	}
//
//	return correct;// can return 1,2,3 or -1
//
//}
//
//
//int main()
//{
//	Question questions[100]; // supposed that the Trivia can have at most 100 questions
//	string question;
//	string option;
//	string correctAns;
//	int numOfOptions;
//	int numberOfQuestions;
//
//	cout << "Let's create a Trivia" << endl;
//	cout << "Number of questions \n";
//	cin >> numberOfQuestions;
//	cout << "Number of options per questions \n";
//	cin >> numOfOptions;
//
//	for (int i = 0; i < numberOfQuestions; i++) {
//
//		cout << "Enter the question number " << i + 1 << ":  \n";
//		fflush(stdin); //FLUSHING STDIN
//		getline(cin, question);
//		questions[i].text = question;
//
//		cout << "Enter the correct answer of the question " << i + 1 << ":  \n";
//		fflush(stdin); //FLUSHING STDIN
//		getline(cin, correctAns);
//		questions[i].correctAns = correctAns;
//
//
//		for (int j = 0; j < numOfOptions; j++) {
//			cout << "Enter  option: " << j + 1 << "\n";
//			fflush(stdin); //FLUSHING STDIN
//			getline(cin, option);
//			questions[i].options[j].text = option;
//		}
//	}
//
//
//
//
//	cout << "Now, let's start the game : " << endl;
//	int userAnswer;
//	int correctNum;
//	for (int i = 0; i < numberOfQuestions; i++) {
//		cout << questions[i].text << endl;
//		correctNum = answerCorrect(questions[i], numOfOptions);
//		for (int j = 0; j < numOfOptions; j++) {
//			cout << j + 1 << ". " << questions[i].options[j].text << endl;
//		}
//		cout << "Choose 1-3 : ";
//		cin >> userAnswer;
//		if (userAnswer == correctNum) {
//			cout << "Correct!" << endl;
//
//		}
//		else {
//			cout << "Incorrect!" << endl;
//		}
//
//	}
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
