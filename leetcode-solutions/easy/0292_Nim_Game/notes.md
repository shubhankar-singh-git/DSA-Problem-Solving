Game rules -

There are n stones

Each player can remove 1, 2, or 3 stones

Player who removes the last stone wins

I will go girst.

Both players play optimally.

Let’s manually see who wins for small n.

Stones (n)	Outcome  	Why?
1	          Win	    Take 1, game over
2	          Win	    Take 2
3	          Win	    Take 3
4	          Lose	    Whatever I take, opponent takes the rest
5	          Win	    Take 1 → opponent gets 4
6	          Win	    Take 2 → opponent gets 4
7	          Win	    Take 3 → opponent gets 4
8	          Lose	    Any move gives opponent a win

We observed 4, 8, 12, 16, … are losing positions.


Why multiples of 4 are losing?

If I start with 4 stones:

I take 1 → opponent takes 3 → I lose

I take 2 → opponent takes 2 → I lose

I take 3 → opponent takes 1 → I lose

No matter what I do, opponent wins.

So, 4 is a losing position.