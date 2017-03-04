#include <iostream>
using namespace std;
int main()
{
	int option = 3;
	double maxTemp = 0;
	double minTemp = 0;
	int countTemp = 0;
	double avgTemp = 0;
	double sumTemp = 0;
	do
	{

		cout << "****SENSR MONITOR v1.5*****" << endl;
		cout << "Welcome to Sensor Monitor 1.5" << endl;
		cout << "1-		Submit Temperature Reading" << endl;
		cout << "2-		Temperature Report" << endl;
		cout << "0-		Exit" << endl;

		//get option from user to run 
		cout << "What do you want to do?" << endl;
		cin >> option;
		double temp;
		//Feature 1- get temp

		if (option == 1)
		{
			cout << "Enter Temperature reading" << endl;
			cin >> temp;
			//for loop for temp
			if (temp <-200 || temp >200)
			{
				cout << "Temperature must be within range (-200 to 200)" << endl;
			}
			else
			{
				countTemp = countTemp + 1;
				sumTemp += temp;
				/*cout << "sum"<<sumTemp<< endl;*/
				avgTemp = sumTemp / countTemp;
				/*cout<<"avg" << avgTemp<<endl;*/

				if (countTemp == 1)
				{
					cout << "Count Temp  " << countTemp << endl;
					maxTemp = temp;
					minTemp = temp;
					cout << "Maximum temp so far  " << maxTemp << endl;
					cout << "Minimum temp so far  " << minTemp << endl;
				}

				else
				{
					if (temp >= maxTemp)
					{
						maxTemp = temp;
						cout << "Maximum temp so far  " << maxTemp << endl;
					}

					else if (temp <= minTemp)
					{
						minTemp = temp;
						cout << "Minimum temp so far  " << minTemp << endl;
					}
					else
					{
						break;
					}
				}
			}
		}
		else if (option == 2)
		{
			cout << "Temperature Report" << endl;
			cout << " The Highest Temperature is  " << maxTemp << endl;
			cout << " The Lowest Temperature is  " << minTemp << endl;
			cout << " The avg Temperature is  " << avgTemp << endl;
		}
		else
		{
			cout << "Invalid option. Exit" << endl;
			break;
		}
	} while (option != 0);

	system("Pause");
	return 0;
}