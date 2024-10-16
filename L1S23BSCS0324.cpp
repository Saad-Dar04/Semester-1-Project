//#include<iostream>
//using namespace std;
//
//int main() {
//
//	//<<<<<<<<<<<<<<<<< phase 1: Question Anwser Initialization >>>>>>>>>>>>>>>>>>>>
//
//	// intialization of arrays to store the questions
//	char q1[500]{}, q2[500]{}, q3[500]{}, q4[500]{}, q5[100]{};
//	char q1c1[100]{}, q1c2[100]{}, q1c3[100]{}, q1c4[100]{}, q5c1[100]{};
//	char q2c1[100]{}, q2c2[100]{}, q2c3[100]{}, q2c4[100]{}, q5c2[100]{};
//	char q3c1[100]{}, q3c2[100]{}, q3c3[100]{}, q3c4[100]{}, q5c3[100]{};
//	char q4c1[100]{}, q4c2[100]{}, q4c3[100]{}, q4c4[100]{}, q5c4[100]{};
//	
//
//	char CorrectAnwserArray[6]{};
//
//
//	/* taking character string question input from the user*/
//
//	cout << "Create questions for the exam: " << endl;
//
//	cout << "Enter Q1: ";
//	cin.getline(q1, 500);
//
//
//	cout << "Enter Q2: ";
//	cin.getline(q2, 500);
//
//
//	cout << "Enter Q3: ";
//	cin.getline(q3, 500);
//
//
//	cout << "Enter Q4: ";
//	cin.getline(q4, 500);
//
//
//	cout << "Enter Q5: ";
//	cin.getline(q5, 500);
//
//
//	
//
//
//
//	// taking multiple choice questions from the user
//	
//	for (int q = 1; q <= 5; q++) {
//
//		cout << "Please enter the choices for Question " << q << ": " << endl;
//
//		for (int choices = 1; choices <= 4; choices++) {
//
//			cout << "Enter the choice " << choices << ": ";
//
//			if (q == 1) {
//
//
//
//				if (choices == 1) {
//					cin.getline(q1c1, 100);
//
//				}
//
//				else if (choices == 2) {
//					cin.getline(q1c2, 100);
//
//				}
//
//				else if (choices == 3) {
//					cin.getline(q1c3, 100);
//
//				}
//
//				else {
//					cin.getline(q1c4, 100);
//
//				}
//
//				if (choices == 4) {
//
//					cout << "Enter the correct option number: ";
//					cin >> CorrectAnwserArray[0];
//					
//					while (true) {
//						
//						if (CorrectAnwserArray[0] >= '1' && CorrectAnwserArray[0] <= '4') {
//							
//							break;
//						}
//					
//						else {
//							cout << "Please enter an option between 1 and 4: ";
//							cin >> CorrectAnwserArray[0];
//							continue;
//						}
//					}
//
//					cin.ignore();
//
//				}
//
//
//			}
//
//			else if (q == 2) {
//
//				if (choices == 1) {
//					cin.getline(q2c1, 100);
//
//				}
//
//				else if (choices == 2) {
//					cin.getline(q2c2, 100);
//
//				}
//
//				else if (choices == 3) {
//					cin.getline(q2c3, 100);
//
//				}
//
//				else {
//					cin.getline(q2c4, 100);
//
//				}
//
//				if (choices == 4) {
//					cout << "Enter the correct option number: ";
//					cin >> CorrectAnwserArray[1];
//
//					while (true) {
//
//						if (CorrectAnwserArray[1] >= '1' && CorrectAnwserArray[1] <= '4') {
//
//							break;
//						}
//
//						else {
//							cout << "Please enter an option between 1 and 4: ";
//							cin >> CorrectAnwserArray[1];
//							continue;
//						}
//					}
//					cin.ignore();
//				}
//
//			}
//
//			else if (q == 3) {
//
//				if (choices == 1) {
//					cin.getline(q3c1, 100);
//
//				}
//
//				else if (choices == 2) {
//					cin.getline(q3c2, 100);
//
//				}
//
//				else if (choices == 3) {
//					cin.getline(q3c3, 100);
//
//				}
//
//				else {
//					cin.getline(q3c4, 100);
//
//				}
//
//				if (choices == 4) {
//					cout << "Enter the correct option number: ";
//					cin >> CorrectAnwserArray[2];
//
//					while (true) {
//
//						if (CorrectAnwserArray[2] >= '1' && CorrectAnwserArray[2] <= '4') {
//
//							break;
//						}
//
//						else {
//							cout << "Please enter an option between 1 and 4: ";
//							cin >> CorrectAnwserArray[2];
//							continue;
//						}
//					}
//					cin.ignore();
//				}
//
//			}
//
//			else if (q == 4) {
//
//				if (choices == 1) {
//					cin.getline(q4c1, 100);
//
//				}
//
//				else if (choices == 2) {
//					cin.getline(q4c2, 100);
//
//				}
//
//				else if (choices == 3) {
//					cin.getline(q4c3, 100);
//
//				}
//
//				else {
//					cin.getline(q4c4, 100);
//
//				}
//
//				if (choices == 4) {
//					cout << "Enter the correct option number: ";
//					cin >> CorrectAnwserArray[3];
//
//					while (true) {
//
//						if (CorrectAnwserArray[3] >= '1' && CorrectAnwserArray[3] <= '4') {
//
//							break;
//						}
//
//						else {
//							cout << "Please enter an option between 1 and 4: ";
//							cin >> CorrectAnwserArray[3];
//							continue;
//						}
//					}
//					cin.ignore();
//				}
//
//			}
//
//			else {
//
//				if (choices == 1) {
//					cin.getline(q5c1, 100);
//
//				}
//
//				else if (choices == 2) {
//					cin.getline(q5c2, 100);
//
//				}
//
//				else if (choices == 3) {
//					cin.getline(q5c3, 100);
//
//				}
//
//				else {
//					cin.getline(q5c4, 100);
//
//				}
//
//				if (choices == 4) {
//					cout << "Enter the correct option number: ";
//					cin >> CorrectAnwserArray[4];
//
//					while (true) {
//
//						if (CorrectAnwserArray[4] >= '1' && CorrectAnwserArray[4] <= '4') {
//
//							break;
//						}
//
//						else {
//							cout << "Please enter an option between 1 and 4: ";
//							cin >> CorrectAnwserArray[4];
//							continue;
//						}
//					}
//					cin.ignore();
//
//				}
//
//
//			}
//
//		}
//
//	}
//
//	   
//
//		// <<<<<<<<<<<<<<<<<<<<<<<<<<<< Phase 2: Starting the Quiz>>>>>>>>>>>>>>>>>
//
//	int stud1ID = 0, stud2ID = 0, stud3ID = 0, stud4ID = 0, stud5ID = 0;
//	char stud1ans[6]{}, stud2ans[6]{}, stud3ans[6]{}, stud4ans[6]{}, stud5ans[6]{};
//
//	for (int student = 1; student <= 5; student++) {
//
//		cout << "Enter your ID: ";
//
//		if (student == 1) {
//			cin >> stud1ID;
//		}
//
//		else if (student == 2) {
//			cin >> stud2ID;
//		}
//
//		else if (student == 3) {
//			cin >> stud3ID;
//		}
//
//		else if (student == 4) {
//			cin >> stud4ID;
//		}
//
//		else {
//			cin >> stud5ID;
//		}
//
//
//		// inner loop for taking anwsers:)
//		for (int questions = 1; questions <= 5; questions++) {
//
//			if (questions == 1) {
//
//				cout << q1 << endl;
//				cout << "Option 1: " << q1c1 << endl;
//				cout << "Option 2: " << q1c2 << endl;
//				cout << "Option 3: " << q1c3 << endl;
//				cout << "Option 4: " << q1c4 << endl;
//				cout << "Select an option between 1 and 4: ";
//
//				if (student == 1) {
//					cin >> stud1ans[0];
//
//					while (1) {
//
//						if (stud1ans[0] >= '1' && stud1ans[0] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud1ans[0];
//							continue;
//						}
//					}
//
//				}
//
//				else if (student == 2) {
//					cin >> stud2ans[0];
//					
//					while (1) {
//
//						if (stud2ans[0] >= '1' && stud2ans[0] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud2ans[0];
//							continue;
//						}
//					}
//
//
//				}
//
//				else if (student == 3) {
//					cin >> stud3ans[0];
//
//					while (1) {
//
//						if (stud3ans[0] >= '1' && stud3ans[0] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud3ans[0];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 4) {
//					cin >> stud4ans[0];
//					while (1) {
//
//						if (stud4ans[0] >= '1' && stud4ans[0] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud4ans[0];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 5) {
//					cin >> stud5ans[0];
//					
//					while (1) {
//
//						if (stud5ans[0] >= '1' && stud5ans[0] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud5ans[0];
//							continue;
//						}
//					}
//				}
//
//			}
//
//			else if (questions == 2) {
//
//				cout << q2 << endl;
//				cout << "Option 1: " << q2c1 << endl;
//				cout << "Option 2: " << q2c2 << endl;
//				cout << "Option 3: " << q2c3 << endl;
//				cout << "Option 4: " << q2c4 << endl;
//				cout << "Select an option between 1 and 4: ";
//
//				if (student == 1) {
//					cin >> stud1ans[1];
//					while (1) {
//
//						if (stud1ans[1] >= '1' && stud1ans[1] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud1ans[1];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 2) {
//					cin >> stud2ans[1];
//					while (1) {
//
//						if (stud2ans[1] >= '1' && stud2ans[1] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud2ans[1];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 3) {
//					cin >> stud3ans[1];
//					while (1) {
//
//						if (stud3ans[1] >= '1' && stud3ans[1] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud3ans[1];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 4) {
//					cin >> stud4ans[1];
//					
//					while (1) {
//
//						if (stud4ans[1] >= '1' && stud4ans[1] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud4ans[1];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 5) {
//					cin >> stud5ans[1];
//
//					while (1) {
//
//						if (stud5ans[1] >= '1' && stud5ans[1] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud5ans[1];
//							continue;
//						}
//					}
//				}
//
//			}
//
//			else if (questions == 3) {
//
//				cout << q3 << endl;
//				cout << "Option 1: " << q3c1 << endl;
//				cout << "Option 2: " << q3c2 << endl;
//				cout << "Option 3: " << q3c3 << endl;
//				cout << "Option 4: " << q3c4 << endl;
//				cout << "Select an option between 1 and 4: ";
//
//				if (student == 1) {
//					cin >> stud1ans[2];
//					while (1) {
//
//						if (stud1ans[2] >= '1' && stud1ans[2] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud1ans[2];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 2) {
//					cin >> stud2ans[2];
//					while (1) {
//
//						if (stud2ans[2] >= '1' && stud2ans[2] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud2ans[2];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 3) {
//					cin >> stud3ans[2];
//					while (1) {
//
//						if (stud3ans[2] >= '1' && stud3ans[2] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud3ans[2];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 4) {
//					cin >> stud4ans[2];
//					
//					while (1) {
//
//						if (stud4ans[2] >= '1' && stud4ans[2] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud4ans[2];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 5) {
//					cin >> stud5ans[2];
//					while (1) {
//
//						if (stud5ans[2] >= '1' && stud5ans[2] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud5ans[2];
//							continue;
//						}
//					}
//				}
//
//			}
//
//			else if (questions == 4) {
//
//				cout << q4 << endl;
//				cout << "Option 1: " << q4c1 << endl;
//				cout << "Option 2: " << q4c2 << endl;
//				cout << "Option 3: " << q4c3 << endl;
//				cout << "Option 4: " << q4c4 << endl;
//				cout << "Select an option between 1 and 4: ";
//
//				if (student == 1) {
//					cin >> stud1ans[3];
//					while (1) {
//
//						if (stud1ans[3] >= '1' && stud1ans[3] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud1ans[3];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 2) {
//					cin >> stud2ans[3];
//					
//					while (1) {
//
//						if (stud2ans[3] >= '1' && stud2ans[3] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud2ans[3];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 3) {
//					cin >> stud3ans[3];
//					while (1) {
//
//						if (stud3ans[3] >= '1' && stud3ans[3] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud3ans[3];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 4) {
//					cin >> stud4ans[3];
//					
//					while (1) {
//
//						if (stud4ans[3] >= '1' && stud4ans[3] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud4ans[3];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 5) {
//					cin >> stud5ans[3];
//					
//					while (1) {
//
//						if (stud5ans[3] >= '1' && stud5ans[3] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud5ans[3];
//							continue;
//						}
//					}
//				}
//
//			}
//
//			else if (questions == 5) {
//
//				cout << q5 << endl;
//				cout << "Option 1: " << q5c1 << endl;
//				cout << "Option 2: " << q5c2 << endl;
//				cout << "Option 3: " << q5c3 << endl;
//				cout << "Option 4: " << q5c4 << endl;
//				cout << "Select an option between 1 and 4: ";
//
//				if (student == 1) {
//					cin >> stud1ans[4];
//					
//					while (1) {
//
//						if (stud1ans[4] >= '1' && stud1ans[4] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud1ans[4];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 2) {
//					cin >> stud2ans[4];
//					while (1) {
//
//						if (stud2ans[4] >= '1' && stud2ans[4] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud2ans[4];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 3) {
//					cin >> stud3ans[4];
//					while (1) {
//
//						if (stud3ans[4] >= '1' && stud3ans[4] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud3ans[4];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 4) {
//					cin >> stud4ans[4];
//					while (1) {
//
//						if (stud4ans[4] >= '1' && stud4ans[4] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud4ans[4];
//							continue;
//						}
//					}
//				}
//
//				else if (student == 5) {
//					cin >> stud5ans[4];
//					while (1) {
//
//						if (stud5ans[4] >= '1' && stud5ans[4] <= '4') {
//							break;
//						}
//
//						else {
//							cout << "Please enter a correct option between 1 and 4: ";
//							cin >> stud5ans[4];
//							continue;
//						}
//					}
//				}
//
//			}
//
//		}
//	}
//
//
//
//	// <<<<<<<<<<<<<<<<<<<<<<<<<<< Phase 3: Display Results >>>>>>>>>>>>>>>>>>>>>>>>>>>
//
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "\t\t\t\t Expected Output \n";
//	cout << "Students anwsers are as follow: " << endl;
//	cout << "StudentID \t Q1 \t Q2 \t Q3 \t Q4 \t Q5" << endl;
//	for (int students = 1; students <= 5; students++) {
//
//		if (students == 1) {
//			cout << stud1ID << " \t\t " << stud1ans[0] << " \t " << stud1ans[1] << " \t " << stud1ans[2] << " \t " << stud1ans[3] << " \t " << stud1ans[4] << endl;
//
//		}
//
//		else if (students == 2) {
//			cout << stud2ID << " \t\t " << stud2ans[0] << " \t " << stud2ans[1] << " \t " << stud2ans[2] << " \t " << stud2ans[3] << " \t " << stud2ans[4] << endl;
//
//		}
//
//		else if (students == 3) {
//			cout << stud3ID << " \t\t " << stud3ans[0] << " \t " << stud3ans[1] << " \t " << stud3ans[2] << " \t " << stud3ans[3] << " \t " << stud3ans[4] << endl;
//
//		}
//
//		else if (students == 4) {
//			cout << stud4ID << " \t\t " << stud4ans[0] << " \t " << stud4ans[1] << " \t " << stud4ans[2] << " \t " << stud4ans[3] << " \t " << stud4ans[4] << endl;
//
//		}
//
//		else if (students == 5) {
//			cout << stud5ID << " \t\t " << stud5ans[0] << " \t " << stud5ans[1] << " \t " << stud5ans[2] << " \t " << stud5ans[3] << " \t " << stud5ans[4] << endl;
//
//		}
//
//	}
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << endl << endl;
//
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "Exam Report: " << endl << endl;
//	cout << "Anwser Key" << endl;
//
//	cout << "Question \t 1 \t 2 \t 3 \t 4 \t 5 \n";
//	cout << "Anwser \t\t " << CorrectAnwserArray[0] << " \t " << CorrectAnwserArray[1] << " \t " << CorrectAnwserArray[2] << " \t " << CorrectAnwserArray[3] << " \t " << CorrectAnwserArray[4] << endl;
//
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//
//	cout << endl;
//
//	// loop for calculating correct no of anwsers
//	float correctStud1 = 0, correctStud2 = 0, correctStud3 = 0, correctStud4 = 0, correctStud5 = 0;
//	int ans1num = 0, ans2num = 0, ans3num = 0, ans4num = 0, ans5num = 0;
//
//
//
//	for (int students = 1; students <= 5; students++) {
//
//		if (students == 1) {
//
//			if (CorrectAnwserArray[0] == stud1ans[0]) {
//				correctStud1++;
//				ans1num++;
//			}
//
//			if (CorrectAnwserArray[1] == stud1ans[1]) {
//				correctStud1++;
//				ans2num++;
//			}
//
//			if (CorrectAnwserArray[2] == stud1ans[2]) {
//				correctStud1++;
//				ans3num++;
//			}
//
//			if (CorrectAnwserArray[3] == stud1ans[3]) {
//				correctStud1++;
//				ans4num++;
//			}
//
//			if (CorrectAnwserArray[4] == stud1ans[4]) {
//				correctStud1++;
//				ans5num++;
//			}
//
//		}
//
//		else if (students == 2) {
//
//			if (CorrectAnwserArray[0] == stud2ans[0]) {
//				correctStud2++;
//				ans1num++;
//			}
//
//			if (CorrectAnwserArray[1] == stud2ans[1]) {
//				correctStud2++;
//				ans2num++;
//			}
//
//			if (CorrectAnwserArray[2] == stud2ans[2]) {
//				correctStud2++;
//				ans3num++;
//			}
//
//			if (CorrectAnwserArray[3] == stud2ans[3]) {
//				correctStud2++;
//				ans4num++;
//			}
//
//			if (CorrectAnwserArray[4] == stud2ans[4]) {
//				correctStud2++;
//				ans5num++;
//			}
//
//		}
//
//		else if (students == 3) {
//
//			if (CorrectAnwserArray[0] == stud3ans[0]) {
//				correctStud3++;
//				ans1num++;
//			}
//
//			if (CorrectAnwserArray[1] == stud3ans[1]) {
//				correctStud3++;
//				ans2num++;
//			}
//
//			if (CorrectAnwserArray[2] == stud3ans[2]) {
//				correctStud3++;
//				ans3num++;
//			}
//
//			if (CorrectAnwserArray[3] == stud3ans[3]) {
//				correctStud3++;
//				ans4num++;
//			}
//
//			if (CorrectAnwserArray[4] == stud3ans[4]) {
//				correctStud3++;
//				ans5num++;
//			}
//
//		}
//
//		else if (students == 4) {
//
//			if (CorrectAnwserArray[0] == stud4ans[0]) {
//				correctStud4++;
//				ans1num++;
//			}
//
//			if (CorrectAnwserArray[1] == stud4ans[1]) {
//				correctStud4++;
//				ans2num++;
//			}
//
//			if (CorrectAnwserArray[2] == stud4ans[2]) {
//				correctStud4++;
//				ans3num++;
//			}
//
//			if (CorrectAnwserArray[3] == stud4ans[3]) {
//				correctStud4++;
//				ans4num++;
//			}
//
//			if (CorrectAnwserArray[4] == stud4ans[4]) {
//				correctStud4++;
//				ans5num++;
//			}
//
//		}
//
//		else if (students == 5) {
//
//			if (CorrectAnwserArray[0] == stud5ans[0]) {
//				correctStud5++;
//				ans1num++;
//			}
//
//			if (CorrectAnwserArray[1] == stud5ans[1]) {
//				correctStud5++;
//				ans2num++;
//			}
//
//			if (CorrectAnwserArray[2] == stud5ans[2]) {
//				correctStud5++;
//				ans3num++;
//			}
//
//			if (CorrectAnwserArray[3] == stud5ans[3]) {
//				correctStud5++;
//				ans4num++;
//			}
//
//			if (CorrectAnwserArray[4] == stud5ans[4]) {
//				correctStud5++;
//				ans5num++;
//			}
//
//		}
//
//	}
//
//
//
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "Student Scores: " << endl;
//	cout << endl;
//	cout << "Student ID \t Q1 \t Q2 \t Q3 \t Q4 \t Q5 \t Correct \t Score(%)" << endl;
//	cout << stud1ID << " \t\t " << stud1ans[0] << " \t " << stud1ans[1] << " \t " << stud1ans[2] << " \t " << stud1ans[3] << " \t " << stud1ans[4] << " \t " << correctStud1 << " \t\t " << (correctStud1 / 5.0) * 100 << "%" << endl;
//	cout << stud2ID << " \t\t " << stud2ans[0] << " \t " << stud2ans[1] << " \t " << stud2ans[2] << " \t " << stud2ans[3] << " \t " << stud2ans[4] << " \t " << correctStud2 << " \t\t " << (correctStud2 / 5.0) * 100 << "%" << endl;
//	cout << stud3ID << " \t\t " << stud3ans[0] << " \t " << stud3ans[1] << " \t " << stud3ans[2] << " \t " << stud3ans[3] << " \t " << stud3ans[4] << " \t " << correctStud3 << " \t\t " << (correctStud3 / 5.0) * 100 << "%" << endl;
//	cout << stud4ID << " \t\t " << stud4ans[0] << " \t " << stud4ans[1] << " \t " << stud4ans[2] << " \t " << stud4ans[3] << " \t " << stud4ans[4] << " \t " << correctStud4 << " \t\t " << (correctStud4 / 5.0) * 100 << "%" << endl;
//	cout << stud5ID << " \t\t " << stud5ans[0] << " \t " << stud5ans[1] << " \t " << stud5ans[2] << " \t " << stud5ans[3] << " \t " << stud5ans[4] << " \t " << correctStud5 << " \t\t " << (correctStud5 / 5.0) * 100 << "%" << endl;
//
//
//
//	
//	cout << endl << endl;
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "Feedback: " << endl << endl;
//
//
//	cout << "Questions \t 1 \t 2 \t 3 \t 4 \t 5" << endl;
//	cout << "Wrong" << " \t\t " << 5 - ans1num << " \t " << 5 - ans2num << " \t " << 5 - ans3num << " \t " << 5 - ans4num << " \t " << 5 - ans5num << endl << endl;
//	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
//
//
//
//
//	return 0;
//}