board = ["O"] * 5

for i in range(len(board)):
    board[i] = ["O"] * 5

def print_board(board):
    for linha in board:
        print " ".join(linha)
        
print_board(board)
