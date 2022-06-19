#include <iostream>
#include <math.h>
using namespace std;

#define COMPUTER 1
#define HUMAN 2
struct move
{
    int pile_index;
    int stones_removed;
};

bool gameOver(int piles[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (piles[i] != 0)
            return (false);

    return (true);
}

void declareWinner(int whoseTurn)
{
    if (whoseTurn == COMPUTER)
        cout << "Joe\n";
    else
        cout << "Mike\n";
    return;
}

int calculateNimSum(int piles[], int n)
{
    int i, nimsum = piles[0];
    for (i = 1; i < n; i++)
        nimsum = nimsum ^ piles[i];
    return (nimsum);
}

void makeMove(int piles[], int n, struct move *moves)
{
    int i, nim_sum = calculateNimSum(piles, n);
    if (nim_sum != 0)
    {
        for (i = 0; i < n; i++)
        {
            if ((piles[i] ^ nim_sum) < piles[i])
            {
                (*moves).pile_index = i;
                (*moves).stones_removed =
                    piles[i] - (piles[i] ^ nim_sum);
                piles[i] = (piles[i] ^ nim_sum);
                break;
            }
        }
    }
    else
    {
        int non_zero_indices[n], count;

        for (i = 0, count = 0; i < n; i++)
            if (piles[i] > 0)
                non_zero_indices[count++] = i;

        (*moves).pile_index = (rand() % (count));
        (*moves).stones_removed =
            1 + (rand() % (piles[(*moves).pile_index]));
        piles[(*moves).pile_index] =
            piles[(*moves).pile_index] - (*moves).stones_removed;

        if (piles[(*moves).pile_index] < 0)
            piles[(*moves).pile_index] = 0;
    }
    return;
}
void playGame(int piles[], int n, int whoseTurn)
{
    struct move moves;
    while (gameOver(piles, n) == false)
    {
        makeMove(piles, n, &moves);

        if (whoseTurn == COMPUTER)
            whoseTurn = HUMAN;
        else
            whoseTurn = COMPUTER;
    }
    declareWinner(whoseTurn);
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Test Case 1
        int n;
        cin >> n;
        int piles[n];
        for (int i = 0; i < n; i++)
            cin >> piles[i];
        playGame(piles, n, COMPUTER);
    }
    return (0);
}
