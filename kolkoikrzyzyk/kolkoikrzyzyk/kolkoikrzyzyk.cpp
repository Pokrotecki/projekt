//KOLKO I KRZYZYK
#include <iostream>

using namespace std;
char grid[9] = {'1','2','3','4','5','6','7','8','9'};

//sprawdzanie stanu gry

int win()
{
	if (grid[0] == grid[1] && grid[1] == grid[2])
	{
		return 1;
	}
	else
	if (grid[3] == grid[4] && grid[4] == grid[5])
	{
		return 1;
	}
	else
	if (grid[6] == grid[7] && grid[7] == grid[8])
	{
		return 1;
	}
	else
	if (grid[0] == grid[3] && grid[3] == grid[6])
	{
		return 1;
	}
	else
	if (grid[1] == grid[4] && grid[4] == grid[7])
	{
		return 1;
	}
	else
	if (grid[2] == grid[5] && grid[5] == grid[8])
	{
		return 1;
	}
	else
	if (grid[0] == grid[4] && grid[4] == grid[8])
	{
		return 1;
	}
	else
	if (grid[2] == grid[4] && grid[4] == grid[6])
	{
		return 1;
	}
	else
	if (grid[0] != '1' && grid[1] != '2' && grid[2] != '3' && grid[3] != '4' && grid[4] != '5' && grid[5] != '6' && grid[6] != '7' && grid[7] != '8' && grid[8] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

//generowanie planszy

void plansza()
{
	system("cls");
	cout << "\n\t\t Kolko i Krzyzyk\n";
	cout << " " << grid[0] << " | " << grid[1] << " | " << grid[2] << " \n";
	cout << "---|---|---\n";
	cout << " " << grid[3] << " | " << grid[4] << " | " << grid[5] << " \n";
	cout << "---|---|---\n";
	cout << " " << grid[6] << " | " << grid[7] << " | " << grid[8] << " \n\n";
	cout << "P1 - X" << "\nP2 - O";
}

//rozgrywka
int main()
{
	int p = 1, x, y;
	char z;
	do
	{
		plansza();
		p = (p % 2) ? 1 : 2;
		cout << "\nTura gracza " << p << ", prosze wprowadz cyfre odpowiadajaca wolnemu polu: ";
		cin >> y;
		z = (p == 1) ? 'X' : 'O';
		if (y == 1 && grid[0] == '1')
		{
			grid[0] = z;
		}
		else
		if (y == 2 && grid[1] == '2')
		{
			grid[1] = z;
		}
		else
		if (y == 3 && grid[2] == '3')
		{
			grid[2] = z;
		}
		else
		if (y == 4 && grid[3] == '4')
		{
			grid[3] = z;
		}
		else
		if (y == 5 && grid[4] == '5')
		{
			grid[4] = z;
		}
		else
		if (y == 6 && grid[5] == '6')
		{
			grid[5] = z;
		}
		else
		if (y == 7 && grid[6] == '7')
		{
			grid[6] = z;
		}
		else
		if (y == 8 && grid[7] == '8')
		{
			grid[7] = z;
		}
		else
		if (y == 9 && grid[8] == '9')
		{
			grid[8] = z;
		}
		else
		{
			cout << "Nieprawidlowy ruch!";
			p--;
			cin.ignore();
			cin.get();
		}
		x = win();
		p++;
	} while (x == -1);
	plansza();
	if (x == 1)
	{
		cout << "\nGracz " << --p << " wygral!";
	}
	else
	if(x == 0)
	{
		cout << "\nRemis!";
	}
	cin.ignore();
	cin.get();
	return 0;
}
