//
//  main.cpp
//  hw11
//
//  Created by Tongxu Bai on 11/26/19.
//  Copyright © 2019 Tongxu Bai. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout; using std::endl;
using std::cin;
using std::string;

const int board_size_c = 8;
const string empty_str_c = "  ";

class Chess {
public:
	Chess() : board(vector<vector<string>>(board_size_c, vector<string>(board_size_c, empty_str_c)))
	{
		for (int i = 0; i < board_size_c; ++i) {
			board[1][i] = "BP";
			board[6][i] = "WP";
		}
		
		board[0][0] = "BR";
		board[0][1] = "BN";
		board[0][2] = "BB";
		board[0][3] = "BQ";
		board[0][4] = "BK";
		board[0][5] = "BB";
		board[0][6] = "BN";
		board[0][7] = "BR";

		board[7][0] = "WR";
		board[7][1] = "WN";
		board[7][2] = "WB";
		board[7][3] = "WQ";
		board[7][4] = "WK";
		board[7][5] = "WB";
		board[7][6] = "WN";
		board[7][7] = "WR";
	}
	
	void make_move(char letter1, int num1, char letter2, int num2)
	{
		board[board_size_c - num2][letter2 - 'a'] = board[board_size_c - num1][letter1 - 'a'];
		board[board_size_c - num1][letter1 - 'a'] = empty_str_c;
	}
	
	void draw() const
	{
		for (int i = 0; i < board_size_c; ++i) {
			cout << 8 - i << " ";
			for (int j = 0; j < board_size_c; ++j) {
				cout << board[i][j];
			}
			cout << endl;
		}
		
		cout << "  ";
		for (int k = 0; k < board_size_c; ++k) {
			cout << (char)(k + 'a') << " ";
		}
		cout << endl;
	}
	
private:
	vector<vector<string>> board;
};

int main(int argc, const char * argv[]) {

	return 0;
}
