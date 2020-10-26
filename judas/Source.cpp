#include <iostream>
#include <vector>
#include <string>

void rev(std::string name)
{
	for (int i = name.length() - 1; i >= 0; i--)
	{
		std::cout << name[i];
	}
	std::cout << "\n";
}

std::string rev1(std::string name)
{
	for (int i = 0; i < name.length(); i++)
	{
		for (int j = i + 1; j < name.length(); j++)
		{
			std::swap(name[i], name[j]);
		}
	}

	return name;
}

std::string rev2(std::string name)
{
	int n = name.length();

	for (int i = 0; i < n / 2; i++)
	{
		std::swap(name[i], name[n - i - 1]);
	}

	return name;
}

std::string rev3(std::string name)
{
	std::reverse(name.begin(), name.end());
	return name;
}

void rev4(int arr[], const int size) {

	std::reverse(arr, arr + size);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}	
}

void rev5(std::vector<std::string>& name) {

	/*std::string& zero = name[0];
	std::string& one = name[1];
	std::string& two = name[2];*/

	/*std::reverse(zero.begin(), zero.end());
	std::reverse(one.begin(), one.end());
	std::reverse(two.begin(), two.end());*/

	for (int i = 0; i < name.size(); i++)
		std::reverse(name.begin(), name.end());

	for (int i = 0; i < name.size(); i++)
		std::cout << name[i] << " ";
}

std::string rev6(std::string str) {

	std::string reversed = "";

	for (auto temp : str) {

		reversed = temp + reversed;
	}

	return reversed;
}

int main()
{
	rev("Hello World");
	std::cout << rev1("Hello World") << "\n";
	std::cout << rev2("Hello World") << "\n";
	std::cout << rev3("Hello World") << "\n";

	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / 4;
	rev4(arr, size); std::cout << "\n";

	std::vector<std::string> name = { "Devin", "John", "Michael" };
	rev5(name); std::cout << "\n";
	std::cout << rev6("Hello World") << "\n";


	
	

		
	

		
	
	
	std::cout << "\n\n";
	system("pause");
	return 0;
}


