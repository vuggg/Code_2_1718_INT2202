#include <iostream>
#include <iomanip>
#include <array>
#include <random>

// simple random int generator derived from Stroustrup:
// http://www.stroustrup.com/C++11FAQ.html#std-random
int rand_int(int low, int high)
{
    static std::default_random_engine re {std::random_device{}()};
    using Dist = std::uniform_int_distribution<int>;
    static Dist uid {};
    return uid(re, Dist::param_type{low,high});
}


class Minesweeper {
public:
    Minesweeper();
    void display(bool reveal = false) const;
    void reveal(const unsigned row, const unsigned col);
    bool hasWon() const { return numHidden == numMines; }
    unsigned getCoordinate(bool wantCol) const;
    bool mineAt(const unsigned row, const unsigned col) const {
        return inBounds(row, col) && board[row][col].isMine();
    }

private:
    class Cell {
    public:
        void show(bool reveal) const
        {
            if (isMine() && reveal)
                std::cout << RED << ' ' << state << ' ';
            else if (isRevealed())
                std::cout << GREEN << ' ' << state << ' ';
            else
                std::cout << TILE << ' ' << '+' << ' ';
        }
        bool setCount(unsigned cnt) { state = cnt ? '0'+cnt : ' '; return cnt==0; }
        bool isRevealed(void) const { return state!='#' && state!='+'; }
        bool isMine(void) const { return state=='#'; }
        // return true if this is an existing mine
        bool setMine(void) { bool ret=isMine(); state = '#'; return ret; }
    private:
        char state{'+'};
    };
    bool inBounds(const unsigned row, const unsigned col) const {
        return row < height && col < width;
    }
    unsigned mineNear(const unsigned i, const unsigned j) const;

    static constexpr auto RED = "\x1b[31;1m";
    static constexpr auto GREEN = "\x1b[32;1m";
    static constexpr auto BLUE = "\x1b[34;1m";
    static constexpr auto TILE = "\x1b[30;47m";
    static constexpr auto RESET = "\x1b[0m";
    static constexpr auto CLEAR = "\x1b[2J";
    static constexpr unsigned width{10};
    static constexpr unsigned height{8};

    std::array<std::array<Cell, width>, height> board;
    unsigned numHidden;
    unsigned numMines;
};

Minesweeper::Minesweeper() :
    board{},
    numHidden{width*height},
    numMines{numHidden/6}  // 1 of 6 is a mine
{
    for (unsigned i = 0; i < numMines; ++i) {
        while (board[rand_int(0, height-1)][rand_int(0, width-1)].setMine()) {
            // continue until a new mine is set
        }
    }
}

void Minesweeper::display(bool reveal) const {
    static const std::string line(4*width, '-');
    std::cout << CLEAR << "   ";
    for (size_t j = 0; j < width; ++j)
        std::cout << std::setw(3) << j << ' ';
    std::cout << "\n";
    for (size_t i = 0; i < height ; ++i) {
        std::cout << "   " << line << '\n'
                  << std::setw(2) << i << " |";
        for (size_t j = 0; j < width; ++j) {
            board[i][j].show(reveal);
            std::cout << RESET << '|';
        }
        std::cout << "\n";
    }
    std::cout << "   " << line << '\n';
}

unsigned Minesweeper::getCoordinate(bool wantCol) const {
    unsigned val;
    unsigned limit = wantCol ? width : height;
    for (std::cin >> val; val >= limit; std::cin >> val) {
        std::cout << "\nError: please enter a number in the range 0 through " << limit - 1 << "\n";
    }
    return val;
}

void Minesweeper::reveal(const unsigned row, const unsigned col) {
    if (!inBounds(row, col) || board[row][col].isRevealed())
        return;
    --numHidden;
    if (board[row][col].setCount(mineNear(row, col))) {
        reveal(row - 1, col);
        reveal(row, col - 1);
        reveal(row + 1, col);
        reveal(row, col + 1);
    }
}

unsigned Minesweeper::mineNear(const unsigned row, const unsigned col) const {
    static constexpr std::array<int,3> offset{ -1, 0, +1 };
    unsigned mines = 0;
    for (const auto i : offset) {
        for (const auto j : offset) {
            mines += mineAt(row + i, col + j);
        }
    }
    return mines;
}

int main()
{
    Minesweeper ms;
    ms.display();

    for (bool hasLost = false; !ms.hasWon() && !hasLost; ms.display(hasLost)) {
        std::cout << "Enter the row and column: ";
        const unsigned row = ms.getCoordinate(false);
        const unsigned col = ms.getCoordinate(true);

        hasLost = ms.mineAt(row, col);
        if (!hasLost) {
            ms.reveal(row, col);
        }
    }
    if (ms.hasWon()) {
        std::cout << "Congratulations! You have won!\n";
    } else {
        std::cout << "Oops! You stepped on a Mine\n";
    }
}
