Task 1
Free Cell Game
(95 + 5 marks)
[95 marks for code; 5 marks for proper variable and function names and proper indentation]
You have to write code for Free Cell game in C++. You are required to use pointers in this task. You can’t
use vectors in this task.
You may need to play actual Free Cell game also to get better understanding and familiarity of game
rules.
Free Cell is a single player one deck card game. In Free Cell game, there are eight tableau piles/columns
of cards, four Free Cells on the upper left corner and four Home slots on upper right corner.
When a new starts, each of first four tableau piles has seven cards and remaining four tableau piles have
six cards each. Cards should be in random order in tableau piles. There are four free cell slots and four
home slots which are empty at the start of game. Each of free cell slots can contain one card at any
time. In each Home slot player has to pile up thirteen cards of each suit in ascending order starting from
Ace to King. When player piles up all the cards to home positions i-e thirteen cards of each suit to each
home slot, player wins the game.
A card can be represented by two values: first value will represent rank of card and second value will
represent the suit of card. You can use only first letter of suit name to represent suit e.g ‘A d’ represents
Ace of ‘diamond’ suit or whatever the way you like.
You can move only top most/exposed card(s). You can move card(s) from
i)
ii)
iii)
iv)
v)



tableau pile to another tableau pile
tableau pile to free cell
free cell to tableau pile
tableau pile to home slot
free cell to home slot
Tableau Pile to Tableau Pile Move:
You can move a card from one tableau pile to another tableau pile if card of source tableau pile
and card of destination tableau pile are of alternating color and source tableau card is
immediate descendent in rank of destination tableau card [except for the Ace card, Ace card
should be moved to Home slot]. You can also move multiple cards in one move if the source
cards follow the above mentioned rule i-e after moving multiple cards from source tableau pile,
resulting tableau will form a descending sequence of cards with alternating colors.
Tableau Pile to Free Cell Move:
You can move any top most/exposed card from any tableau pile to any available Free Cell slot
except for Ace card. Ace card should be moved to Home slot.
Free Cell to Tableau Pile Move:
A card from free cell slot can be moved to tableau card if it follows the condition mentioned in

tableau to tableau move i-e card of source Free Cell and card of destination tableau pile are of
alternating color and source Free Cell card is immediate descendent in rank of destination
tableau card.
Tableau pile to Home Move:
The first card that will be moved to Home slot will be Ace card. After Ace card, cards will be piled
up in Home slot in successive ascending order till King. Each home slot will contain pile of cards
of a particular suit only. When all cards will be moved to home slots, player wins the game.
Free Cell to Home Move:
A card from Free Cell can be moved to home slot if the suit of free cell card is same as that of
cards(if present) in home slot and free cell card should be in successive ascending order. If any
Home slot is empty, the first card that will be moved to Home slot should be Ace card.
After each successful move, you have to show updated game state. In case of invalid move, show error
message.
One problem with above implementation is that a user can’t save his unfinished game and can’t
resume his unfinished game. So you also need to add the functionality of saving an ongoing game
state to a file and a player can resume his saved game if he wishes to do so.
When your program runs, it should allow user to resume previously saved game or start a new game.
Each time when a new game starts, cards should be placed in random order in eight tableau piles. You
can use random function to achieve this functionality. Sample screen shots of Free Cell game are
attached. You can design a better interface for sure.
