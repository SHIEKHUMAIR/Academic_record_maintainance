#include <iostream>
using namespace std;

int main() {

	
		//----- initilizing all variables------
		float F_no;  // for the value taken from the user..
		int position = 0;  
		int temp_Roll_no = {};
		float Midterm_Marks[100] = {}, temp_Midterm_Mark = {};
		float Final_Marks[100] = {}, temp_Final_Marks = {};
		int Class[100] = {}, temp_Class = {};
		char Grades[100] = {}, temp_grade = {};
		int current_size = 0;
		char input = 'A';
		int Roll_no[100] = {25,66,45,32,41,21,2,42,5,6,8,19,13,23,33,43,53,63,73,83,93,17,27,37,47,57,67,77,87,97,18,28,38,48,58,68,78,88,98,11,22,33,44,55,77,88,99,31,51,71 };
		for (int i = 0; i < 50; i++) {
			//Roll_no[i] = i + 1;
			Midterm_Marks[i] = rand() % 50 + 1;
			Final_Marks[i]= rand()%50 + 50;
			Class[i]= rand()% 8 + 1;
			float g_no = Final_Marks[i];
			
			// Assigning grade according to the final exams.
			if (g_no < 50)
				Grades[i] = 'F';
			else if (g_no >= 50 && g_no < 60)
				Grades[i] = 'D';
			else if (g_no >= 60 && g_no < 73)
				Grades[i] = 'C';
			else if (g_no >= 73 && g_no < 86)
				Grades[i] ='B';
			else
				Grades[i] ='A';

		current_size++;
		}


		//--------------------------------------
		do
		{
		cout << "\n -------------------------please select your options---------------------------" << endl;
		cout << " A. Sort and display all the records roll number wise in ascending order " << endl;
		cout << " B. Sort and display all the records roll number wise in descending order" << endl;
		cout << " C. Sort and display all records in ascending order based on marks in Midterm " << endl;
		cout << " D. Sort and display all records in descending order based on marks in Midterm " << endl;
		cout << " F. Sort and display all records in ascending order based on marks in Finalterm " << endl;
		cout << " G. Sort and display all records in descending order based on marks in Finalterm " << endl;
		cout << " H. Sort and display all records in ascending order based on Grade" << endl;
		cout << " I. Sort and display all records in descending order based on Grade" << endl;
		cout << " J. Add a new student's record " << endl;
		cout << " K. Delete a student based on roll number " << endl;
		cout << " L. Display record of all the students greater than X marks in final exam in Dessending order  " << endl;
		cout << " M. Display record of all the students greater than X marks in final exam in Assending order  " << endl;
		cout << " N. Display record of all the students less than and equal X marks in final exam in Dessending order  " << endl;
		cout << " O. Display record of all the students less than and equal X marks in final exam in Assending order   " << endl;
		cout << " P. Display record of all the students greater than X grade in Dessending order" << endl;
		cout << " Q. Display record of all the students greater than X grade in Assending order " << endl;
		cout << " R. Display record of all the students less than equal X grade in Dessending order " << endl;
		cout << " S. Display record of all the students less than equal X grade in Dessending order " << endl;
		

		cout << " E. forExit" << endl;
		cout << " ----------------------------------------------------------------- " << endl;
		cout << "Your option : ";
		cin >> input;

		if (input == 'a' || input == 'A') {
			cout << "Sort and display all the records roll number wise in ascending order" <<  endl;
			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Roll_no[i] > Roll_no[j])
					{
						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;

						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int i = 0; i < current_size; i++) {
				cout << " Roll_no " << Roll_no[i] << " Mid_term " << Midterm_Marks[i] << " Final " << Final_Marks[i] << " Class " << Class[i] << " Grade " << Grades[i] << endl;
			}
		}
		else if (input == 'b' || input == 'B') {
			cout << " Sort and display all records in Descending order based on Roll number " << endl;

			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Roll_no[i] < Roll_no[j])
					{
						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;

						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int k = 0; k < current_size; k++) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		else if (input == 'c' || input == 'C') {
			cout << " Sort and display all records in ascending order based on marks in Midterm " << endl;

			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Midterm_Marks[i] > Midterm_Marks[j])
					{
						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;

						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int k = 0; k < current_size; k++) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
			
		}
		else if (input == 'd' || input == 'D') {
			cout << "  you pressed  D" << endl;
			cout << " Sort and display all records in Descending order based on marks in Midterm " << endl;

			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Midterm_Marks[i] < Midterm_Marks[j])
					{
						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;

						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int k = 0; k < current_size; k++) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		else if (input == 'F' || input == 'f') {
			cout << "  you pressed  F" << endl;
			cout << " Sort and display all records in Asscending order based on marks in Finalterm " << endl;

			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Final_Marks[i] > Final_Marks[j])
					{
						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;


						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int k = 0; k < current_size; k++) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		else if (input == 'G' || input == 'g') {
			cout << "  you pressed  g" << endl;
			cout << " Sort and display all records in desscending order based on marks in Finalterm " << endl;

			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Final_Marks[i] < Final_Marks[j])
					{
						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;


						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			for (int k = 0; k < current_size; k++) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		
		else if (input == 'h' || input == 'H') {
		cout << "  you pressed  h" << endl;
		cout << " Sort and display all records in Asscending order based on Grades " << endl;

		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] > Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}

		for (int k = 0; k < current_size; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}
		}
		else if (input == 'i' || input == 'I') {
		cout << "  you pressed  i" << endl;
		cout << " Sort and display all records in desscending order based on Grades " << endl;

		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] < Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}

		for (int k = 0; k < current_size; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		else if (input == 'j' || input == 'J') {
		cout << " We are going to add new student record " << endl;
		cout << " Please enter roll number: ";
		cin >> Roll_no[current_size ];
		for (int k = 0; k < current_size; k++) {
			if (Roll_no[k] == Roll_no[current_size]) {
				cout << " This number already exits please enter a new number " << endl;
				cout << " Please enter new roll number: ";
				cin >> Roll_no[current_size];
			}
		}
		float new_mid, new_final;
		cout << " Please enter marks of mid term: ";
		cin >> new_mid;
		if (new_mid > 50) {
			cout << " plz enter a valid number less than 50 " << endl;
		}
		cin >> Midterm_Marks[current_size];
		cout << " Please enter marks for final term: ";
		cin >> Final_Marks[current_size];
		cout << " Please enter Class: ";
		cin >> Class[current_size];
		float f_no = Final_Marks[current_size];
		// Assigning grade according to the final exams.
		if (f_no < 50)
			Grades[current_size] = 'F';
		else if (f_no >= 50 && f_no < 60)
			Grades[current_size] = 'D';
		else if (f_no >= 60 && f_no <73)
			Grades[current_size] = 'C';
		else if (f_no >= 73 && f_no < 86)
			Grades[current_size] = 'B';
		else
			Grades[current_size] = 'A';

		cout << "A record is successfully added at the position " << current_size <<endl;

		current_size++;

		}
		else if (input == 'k' || input == 'K') {
		int no;
		cout << " We are going to delete a record." << endl;
		cout << " Please enter roll number you want to delete : ";
		cin >> no;
		bool flag = false;
		for (int k = 0; k < current_size; k++) {
			if (Roll_no[k] == no) {
				Roll_no[k] = Roll_no[current_size - 1];
				Midterm_Marks[k] = Midterm_Marks[current_size - 1];
				Final_Marks[k] = Final_Marks[current_size - 1];
				Class[k] = Class[current_size - 1];
				Grades[k] = Grades[current_size - 1];
				current_size--;
				flag = true; // set the flag true if we found the number
				cout << "A record is successfully deleted!, new size of your array is " << current_size << endl;
			}
		}
		if (flag == false) {
			cout << "ERROR! not found !" << endl;
		}
			
	}
		
		else if (input == 'l' || input == 'L')
		 {
		 // i arrange the data in assending order...
			for (int i = 0; i < current_size; ++i)
			{
				for (int j = i + 1; j < current_size; ++j)
				{
					if (Final_Marks[i] > Final_Marks[j])
					{
						// arraining final_term array...
						temp_Final_Marks = Final_Marks[i];
						Final_Marks[i] = Final_Marks[j];
						Final_Marks[j] = temp_Final_Marks;

						// arranging mid-term marks...
						temp_Midterm_Mark = Midterm_Marks[i];
						Midterm_Marks[i] = Midterm_Marks[j];
						Midterm_Marks[j] = temp_Midterm_Mark;

						//arranging roll number array...
						temp_Roll_no = Roll_no[i];
						Roll_no[i] = Roll_no[j];
						Roll_no[j] = temp_Roll_no;


						// arraining Class array...
						temp_Class = Class[i];
						Class[i] = Class[j];
						Class[j] = temp_Class;

						// arraining Grade array...
						temp_grade = Grades[i];
						Grades[i] = Grades[j];
						Grades[j] = temp_grade;

					}
				}
			}

			cout << "Please Enter a value" << endl;
			cin >> F_no;
			for (int x = 0; x < current_size; x++) {
				if (Final_Marks[x] == F_no) {
					position = x;
					//cout << "number find at index " << position << endl;
				}
			}

			for (int k = current_size-1; k > position; k--) {
				cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}


		}
		else if (input == 'm' || input == 'M') {
		// first i arrange my data into Asscending order on the base of final term ....
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Final_Marks[i] > Final_Marks[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}

		cout << "Please Enter a value" << endl;
		cin >> F_no;
		for (int x = 0; x < current_size; x++) {
			if (Final_Marks[x] == F_no) {
				position = x;
				//cout << "number find at index " << position << endl;
			}
		}

		for (int k = position+1; k < current_size; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}


		}
		else if (input == 'n' || input == 'N') {
		
		// first i arrange my data into an order on the base of final term ....
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Final_Marks[i] > Final_Marks[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}

		cout << "Please Enter a value" << endl;
		cin >> F_no;
		for (int x = 0; x < current_size; x++) {
			if (Final_Marks[x] == F_no) {
				position = x;
				cout << "number find at index " << position << endl;
				
			}
			
		}

		// now printing numbers which are less than the value
		for (int k = position; k >= 0; k--) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}


		}
		else if (input == 'o' || input == 'O') {
	
		// first i arrange my data into Asscending order on the base of final term ....
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Final_Marks[i] > Final_Marks[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}

		cout << "Please Enter a value" << endl;
		cin >> F_no;
		for (int x = 0; x < current_size; x++) {
			if (Final_Marks[x] == F_no) {
				position = x;
				//cout << "number find at index " << position << endl;
			}
			/*else if (Final_Marks[x] > F_no && Final_Marks[x + 1] < F_no) {
				if (Final_Marks[x + 1] == Final_Marks[x]) {
					position = x - 2;
				}
				else
				{
					position = x - 1;
				}
				//cout << "number find at index " << position << endl;
			}*/
		}
		

		cout << "------------------------------------------- " << endl;
		for (int k = 0; k <= position ; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}


		}
		else if (input == 'p' || input == 'P') {
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] > Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;

					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}
		cout << "Please Enter a Grade in capital letter" << endl;
		char g;
		cin >> g;
		for (int x = 0; x < current_size; x++) {
			if (Grades[x] == g) {
				position = x;
				cout << "number find at index " << position << endl;
				break;
			}
		 }
		for (int k = 0; k < position; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}

		}
		else if (input == 'q' || input == 'Q') {
		cout << "you pressed  Q" << endl;
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] > Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}
		cout << "Please Enter Grade in capital letter" << endl;
		char g;
		cin >> g;
		for (int x = 0; x < current_size; x++) {
			if (Grades[x] == g) {
				position = x;
				cout << g << "number find at index " << position << endl;
				break;
				
			}

		}
		
		for (int k = position-1; k >=0; k--) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
			}
		}
		else if (input == 'r' || input == 'R') {
		cout << "you pressed  R" << endl;
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] > Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;


					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}
		cout << "Please Enter Grade in capital letter" << endl;
		char g;
		cin >> g;
		for (int x = 0; x < current_size; x++) {
			if (Grades[x] == g) {
				position = x;
				cout << g << "number find at index " << position << endl;
				break;

			}

		}

		for (int k = position ; k < current_size ; k++) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		 }
		}

		else if (input == 's' || input == 'S') {
		cout << "you pressed  S" << endl;
		for (int i = 0; i < current_size; ++i)
		{
			for (int j = i + 1; j < current_size; ++j)
			{
				if (Grades[i] > Grades[j])
				{
					// arraining final_term array...
					temp_Final_Marks = Final_Marks[i];
					Final_Marks[i] = Final_Marks[j];
					Final_Marks[j] = temp_Final_Marks;

					// arranging mid-term marks...
					temp_Midterm_Mark = Midterm_Marks[i];
					Midterm_Marks[i] = Midterm_Marks[j];
					Midterm_Marks[j] = temp_Midterm_Mark;

					//arranging roll number array...
					temp_Roll_no = Roll_no[i];
					Roll_no[i] = Roll_no[j];
					Roll_no[j] = temp_Roll_no;

					// arraining Class array...
					temp_Class = Class[i];
					Class[i] = Class[j];
					Class[j] = temp_Class;

					// arraining Grade array...
					temp_grade = Grades[i];
					Grades[i] = Grades[j];
					Grades[j] = temp_grade;

				}
			}
		}
		cout << "Please Enter Grade in capital letter" << endl;
		char g;
		cin >> g;
		for (int x = 0; x < current_size; x++) {
			if (Grades[x] == g) {
				position = x;
				cout << g << "number find at index " << position << endl;
				break;

			}

		}

		for (int k = current_size-1; k >position; k--) {
			cout << " Roll_no " << Roll_no[k] << " Mid_term " << Midterm_Marks[k] << " Final " << Final_Marks[k] << " Class " << Class[k] << " Grade " << Grades[k] << endl;
		}

		}

		else if (input == 'e' || input == 'E') {
			cout << "you pressed  E for exiting.." << endl;
			return 0;
		}
		else {
			cout << "please Enter a valid input " << endl;
		}

} while (input != 'e'&&  input != 'E');
	return 0;
}