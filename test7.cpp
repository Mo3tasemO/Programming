#include<iostream>
using namespace std;
int main()
{
    cout << "=====================\n";
    cout << "Guess The Number GAME\n";
    cout << "=====================\n";



    int points = 0;
    int answers[6];
    int cont;

    cout << "\nType The Missing Numbers in sequences:\n";

    cout << "Sequence 1\n";
    cout << "1 | 5 | 10 | 16 | 23 | 31 | 40 | ?? \n";
    cin >> answers[0];

    cout << "Sequence 2\n";
    cout << "2 | 4 | 8 | 16 | 32 | 64 | 128 | ?? \n";
    cin >> answers[1];
    
    cout << "Sequence 3\n";
    cout << "1 | 1 | 2 | 3 | 5 | 8 | 13 | ?? \n";
    cin >> answers[2];
    
    cout << "Sequence 4\n";
    cout << "Which Number Logically Follows This Series?\n";
    cout << "4 | 6 | 9 | 6 | 14 | 6 | ?? \n";
    cin >> answers[3];
    
    cout << "Sequence 5\n";
    cout << "Which Number Logically Follows This Series?\n";
    cout << "121 | 144 | 169 | 196 | ?? \n";
    cin >> answers[4];

    cout << "This IS CHALLENGE SEQUENCE\n";
    cout << "If you want to continue Type 1 (YES) If you don't want to Type 0 (NO)\n";
    cin >> cont;

    double sequences[6][8] = {
        {1, 5, 10, 16, 23, 31, 40, 50},
        {2, 4, 8, 16, 32, 64, 128, 256},
        {1, 1, 2, 3, 5, 8, 13, 21},
        {4, 6, 9, 6, 14, 6, 19},
        {121, 144, 169, 196, 225},
        {1 , 3, 12, 52, 265, 1596}
    };
    if (cont == 1)
    {
        cout << "Sequence 6\n";
        cout << "1 | 3 | 12 | 52 | 265 | ?? \n";
        cin >> answers[5];
        if (answers[0] == sequences[0][7])
        {
            points++;
        }
        if (answers[1] == sequences[1][7])
        {
            points++;
        }
        if (answers[2] == sequences[2][7])
        {
            points++;
        }
        if (answers[3] == sequences[3][6])
        {
            points++;
        }
        if (answers[4] == sequences[4][4])
        {
            points++;
        }
        if (answers[5] == sequences[5][5])
        {
            points++;
        }
        cout << "Your Points Is " << points << " From 6";
    }
    if (cont == 0)
    {
        if (answers[0] == sequences[0][7])
        {
            points++;
        }
        if (answers[1] == sequences[1][7])
        {
            points++;
        }
        if (answers[2] == sequences[2][7])
        {
            points++;
        }
        if (answers[3] == sequences[3][6])
        {
            points++;
        }
        if (answers[4] == sequences[4][4])
        {
            points++;
        }
        cout << "Your Points Is " << points << " From 6";
    }
    
    return (0);
}