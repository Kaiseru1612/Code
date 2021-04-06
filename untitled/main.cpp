#include <iostream>
using namespace std;

int calculateHydroBondings(char dna, int numOfNucleotides){
    int i,j;
    int countA=0, countC = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= numOfNucleotides; j++)
        {
            if (dna[0][j] == 'E')
            {
                switch (dna[1][j])
                {
                    case 'A':
                        dna[0][j] = 'T';
                        break;
                    case 'T':
                        dna[0][j] = 'A';
                        break;
                    case 'C':
                        dna[0][j] = 'G';
                        break;
                    case 'G':
                        dna[0][j] = 'C';
                        break;
                    default:
                        break;
                }
            }
            if (dna[1][j] == 'E')
            {
                switch (dna[0][j])
                {
                    case 'A':
                        dna[1][j] = 'T';
                        break;
                    case 'T':
                        dna[1][j] = 'A';
                        break;
                    case 'C':
                        dna[1][j] = 'G';
                        break;
                    case 'G':
                        dna[1][j] = 'C';
                        break;
                    default:
                        break;
                }
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < numOfNucleotides; j++)
        {
            if (dna[i][j] == 'A')
            {
                countA++;
            }
            if (dna[i][j] == 'C')
            {
                countC++;
            }
        }
        cout << endl;
    }
    return (2 * countA + 3 * countC);
}
int main() {
    int i,j;
    int countA=0, countC = 0;
    const int numOfNucleotides = 30;
    char dna[2][numOfNucleotides];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < numOfNucleotides; j++)
        {
            cin >> dna[i][j];
        }
    }
    cout << numOfNucleotides(dna, numOfNucleotides);
    return 0;
}
