//Justin Meade
//Final Exam
//CIS 305 MWF 9:10

# include <iostream>
using namespace std;

typedef int* IntArrayPtr;

void fill_array(int a[], int size);
void display_array(int a[], int size);
void sort_ascending(int a[], int size);
void sort_descending(int a[], int size);

int main()
{
	char quit = ' ';
	char sort_Type = ' ';
	int array_size;
	do
	{
		cout << "How many numbers would you like to sort? ";
		cin >> array_size;

		IntArrayPtr a;
		a = new int[array_size];
		fill_array(a, array_size);

		cout << "How would you like to sort the numbers(a for ascending, d for descending)?... ";
		cin >> sort_Type;
		
		
		if(sort_Type == 'a' || sort_Type == 'A')
		{
			sort_ascending(a, array_size);
			display_array(a, array_size);
		}
		else if(sort_Type == 'd' || sort_Type == 'D')
		{
			sort_descending(a, array_size);
			display_array(a, array_size);
		}
		else
			cout << "Invalid response...Try Again" << endl;
	
		cout << "Would you like to sort more numbers?(Y or N)... ";
		cin >> quit;

	}
	while(quit == 'Y' || quit == 'y');
}


//Functions***************
void fill_array(int a[], int size)
{
	cout << "Enter " << size << " numbers.\n";
	for (int i = 0; i < size; i++)
		cin >> a[i];
}

void display_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}


void sort_ascending(int a[],int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < i ; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }

    }
}

void sort_descending(int a[],int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < i ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }

    }
}

