#include <iostream>
#include <string>
using namespace std;

// Base class
class Game
{
protected:
    int score;

public:
    Game()
    {
        score = 0;
    }

    virtual void play() = 0;
    virtual void display() = 0;

    virtual ~Game() {}
};

// Player class
class Player
{
private:
    string name;
    int choice;
    int score;

public:
    // Default constructor
    Player()
    {
        name = "Player";
        choice = 0;
        score = 0;
    }

    // Parameterized constructor
    Player(string n)
    {
        name = n;
        choice = 0;
        score = 0;
    }

    void setChoice(int c)
    {
        choice = c;
    }

    int getChoice()
    {
        return choice;
    }

    string getName()
    {
        return name;
    }

    void increaseScore()
    {
        score++;
    }

    int getScore()
    {
        return score;
    }
};

// Derived class
class RockPaperScissors : public Game
{
private:
    Player players[2];
    int rounds;

    // Static data member
    static int totalGames;

public:
    // Default constructor
    RockPaperScissors() : Game()
    {
        players[0] = Player("Player 1");
        players[1] = Player("Player 2");
        rounds = 0;
        totalGames++;
    }

    // Parameterized constructor
    RockPaperScissors(string name1, string name2) : Game()
    {
        players[0] = Player(name1);
        players[1] = Player(name2);
        rounds = 0;
        totalGames++;
    }

    // Display choices
    void display() override
    {
        cout << "\n1. Rock";
        cout << "\n2. Paper";
        cout << "\n3. Scissors";
    }

    // Convert choice to name
    string choiceName(int choice)
    {
        if (choice == 1)
            return "Rock";
        else if (choice == 2)
            return "Paper";
        else
            return "Scissors";
    }

    // Find winner
    int findWinner(int choice1, int choice2)
    {
        if (choice1 == choice2)
            return 0;

        if ((choice1 == 1 && choice2 == 3) ||
            (choice1 == 2 && choice2 == 1) ||
            (choice1 == 3 && choice2 == 2))
        {
            return 1;
        }

        return 2;
    }

    // Play one round
    void playRound()
    {
        int choice1, choice2;

        cout << "\n\n" << players[0].getName()
             << ", enter your choice: ";
        cin >> choice1;

        while (choice1 < 1 || choice1 > 3)
        {
            cout << "Invalid choice! Enter 1, 2 or 3: ";
            cin >> choice1;
        }

        cout << players[1].getName()
             << ", enter your choice: ";
        cin >> choice2;

        while (choice2 < 1 || choice2 > 3)
        {
            cout << "Invalid choice! Enter 1, 2 or 3: ";
            cin >> choice2;
        }

        players[0].setChoice(choice1);
        players[1].setChoice(choice2);

        cout << "\n" << players[0].getName()
             << " chose " << choiceName(choice1);

        cout << "\n" << players[1].getName()
             << " chose " << choiceName(choice2);

        int result = findWinner(choice1, choice2);

        if (result == 0)
        {
            cout << "\nIt's a Draw!";
        }
        else if (result == 1)
        {
            cout << "\n" << players[0].getName()
                 << " wins!";
            players[0].increaseScore();
        }
        else
        {
            cout << "\n" << players[1].getName()
                 << " wins!";
            players[1].increaseScore();
        }

        rounds++;
    }

    // Start game
    void play() override
    {
        int numberOfRounds;

        cout << "\nEnter number of rounds: ";
        cin >> numberOfRounds;

        while (numberOfRounds <= 0)
        {
            cout << "Enter a positive number: ";
            cin >> numberOfRounds;
        }

        for (int i = 1; i <= numberOfRounds; i++)
        {
            cout << "\n\n========== ROUND "
                 << i << " ==========";

            display();
            playRound();
        }

        showResult();
    }

    // Display final result
    void showResult()
    {
        cout << "\n\n================================";
        cout << "\n         FINAL RESULT";
        cout << "\n================================";

        cout << "\n" << players[0].getName()
             << " Score: " << players[0].getScore();

        cout << "\n" << players[1].getName()
             << " Score: " << players[1].getScore();

        if (players[0].getScore() > players[1].getScore())
        {
            cout << "\n\nOverall Winner: "
                 << players[0].getName();
        }
        else if (players[1].getScore() > players[0].getScore())
        {
            cout << "\n\nOverall Winner: "
                 << players[1].getName();
        }
        else
        {
            cout << "\n\nOverall Result: Draw";
        }
    }

    // Static member function
    static int getTotalGames()
    {
        return totalGames;
    }
};

// Definition of static member
int RockPaperScissors::totalGames = 0;

// Main function
int main()
{
    string name1, name2;

    cout << "================================";
    cout << "\n    ROCK PAPER SCISSORS GAME";
    cout << "\n================================";

    cout << "\n\nEnter Player 1 name: ";
    cin >> name1;

    cout << "Enter Player 2 name: ";
    cin >> name2;

    // Parameterized constructor
    RockPaperScissors game(name1, name2);

    cout << "\nTotal Games: "
         << RockPaperScissors::getTotalGames();

    game.play();

    cout << "\n\nThank you for playing!\n";

    return 0;
}
