/*   49='1' O=79  X=88   */
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<ctype.h>
					       /* using some macros */
#define move (board[N-1]='O')
#define CP_move(p) (board[p-1]='X');printf("\ncomputer moves to %d\n",p);
#define RESULT printf("\nCOMPUTER_win!!");CP_WIN++;printf("\nPLAYER_WIN=%d\tCP_WIN=%d\tDRAW=%d\n\n",PLAYER_WIN,CP_WIN,DRAW)
#define DRAW_RES printf("\nit is a draw!!\n");DRAW++;printf("\nPLAYER_WIN=%d\tCP_WIN=%d\tDRAW=%d\n\n",PLAYER_WIN,CP_WIN,DRAW)
#define ASK if( (toupper( c = user_choice() ) ) == 'Y' ){goto start;}

void print(int p[]);        /* defining functions */
char user_choice(void);

int main()
{int i,PLAYER_WIN=0,CP_WIN=0,DRAW=0,board[9],N;
char c;
//clrscr();
printf("PLAYER_WIN=%d\tCP_WIN=%d\tDRAW=%d\n\n",PLAYER_WIN,CP_WIN,DRAW);
start:
for(i=0;i<9;i++)
	{board[i]=i+49;}
print(board);
printf("\n\n");      /* printing board */

printf("\nCOMPUTER MOVES: X\tYOUR MOVES: O\n");
printf("\nyou move first:\n");
scanf("%d",&N);
printf("hmm...! let me think ;)\n");
//sleep(3);

switch(N)
{case 1:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 2:move; CP_move(3);
	print(board);
	scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			default :move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			}
		break;
		default :move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 3:move; CP_move(2);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(8);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 4:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(8);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(3);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 6:move; CP_move(3);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 7:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:
			 case 9:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			 case 8:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			} break;
	       default:move; CP_move(7);
			RESULT; ASK; break;
	       }
	break;
	case 7:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(8);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 8:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(3);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			case 6:move; CP_move(7);
				print(board);
			       RESULT; ASK; break;
			case 7:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		case 3:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			case 6:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			case 7:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		case 4:move; CP_move(7);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		case 7:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		}
	break;
	case 9:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		}
	break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 2:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 1:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		} break;
	case 3:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(8);
				print(board);
				DRAW_RES;  ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		} break;
	case 4:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		} break;
	case 6:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(9);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		} break;
	case 7:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		 case 4:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		case 8:move; CP_move(9);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:
			 case 4:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			case 6:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		case 9:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(4);
				board[5]='O';
				print(board);
				DRAW_RES; ASK; break;
			case 4:move; CP_move(1);
				print(board);
				board[5]='O';
				DRAW_RES; ASK; break;
			case 6:move; CP_move(4);
				board[0]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		} break;
	case 8:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(1);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:
			 case 9:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			case 7:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		} break;
	case 9:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		 case 4:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		case 8:move; CP_move(7);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:
			 case 6:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			 case 4:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		case 7:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(6);
				board[3]='O';
				print(board);
				DRAW_RES; ASK; break;
			case 6:move; CP_move(3);
				print(board);
				board[3]='O';
				DRAW_RES; ASK; break;
			case 4:move; CP_move(6);
				board[2]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		} break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 3:move; CP_move(5);
       print(board);
	scanf("%d",&N);
	switch(N)
	{case 2:move; CP_move(1);
	print(board);
	scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			default :move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			}
		break;
		default :move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 1:move; CP_move(2);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(8);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 6:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(8);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(1);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 4:move; CP_move(1);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 9:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			 case 8:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			 case 7:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			} break;
	       default:move; CP_move(9);
			RESULT; ASK; break;
	       }
	break;
	case 9:move; CP_move(6);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 4:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(8);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(4);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 8:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(1);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			case 4:move; CP_move(9);
				print(board);
			       RESULT; ASK; break;
			case 9:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		case 1:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			case 4:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			case 9:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		case 6:move; CP_move(9);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		case 4:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		case 9:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		}
	break;
	case 7:move; CP_move(6);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 4:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(4);
			print(board);
			RESULT; ASK; break;
		}
	break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 4:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 1:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(9);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		default:move; CP_move(3);
			print(board);
			RESULT; ASK; break;
		} break;
	case 2:move; CP_move(1);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 9:move; CP_move(7);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 3:move; CP_move(6);
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(3);
			       print(board);
			       RESULT; ASK; break;
		       } break;
		default:move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		} break;
	case 3:move; CP_move(8);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
		} break;
	case 6:move; CP_move(2);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(3);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:
			case 9:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			case 7:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(8);
			print(board);
			RESULT; ASK; break;
		} break;
	case 7:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(6);
				board[2]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		} break;
	case 8:move; CP_move(7);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 3:move; CP_move(1);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 9:move; CP_move(6);
			       board[1]='O';
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
		       } break;
	       default:move; CP_move(3);
		       print(board);
		       RESULT; ASK; break;
	       } break;
	case 9:move; CP_move(7);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 3:move; CP_move(2);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 8:move; CP_move(6);
			       board[0]='O';
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(8);
				print(board);
				RESULT; ASK; break;
		       } break;
	       default:move; CP_move(3);
		       print(board);
		       RESULT; ASK; break;
	       } break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 6:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 3:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(7);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		default:move; CP_move(1);
			print(board);
			RESULT; ASK; break;
		} break;
	case 2:move; CP_move(3);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 7:move; CP_move(9);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 1:move; CP_move(4);
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(1);
			       print(board);
			       RESULT; ASK; break;
		       } break;
		default:move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		} break;
	case 1:move; CP_move(8);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
		} break;
	case 4:move; CP_move(2);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(1);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:
			case 7:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			case 9:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(8);
			print(board);
			RESULT; ASK; break;
		} break;
	case 9:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(4);
				board[0]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		} break;
	case 8:move; CP_move(9);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 1:move; CP_move(3);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 7:move; CP_move(4);
			       board[1]='O';
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
		       } break;
	       default:move; CP_move(1);
		       print(board);
		       RESULT; ASK; break;
	       } break;
	case 7:move; CP_move(9);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 1:move; CP_move(2);
		       print(board);
		       scanf("%d",&N);
		       switch(N)
		       {case 8:move; CP_move(4);
			       board[2]='O';
			       print(board);
			       DRAW_RES; ASK; break;
		       default:move; CP_move(8);
				print(board);
				RESULT; ASK; break;
		       } break;
	       default:move; CP_move(1);
		       print(board);
		       RESULT; ASK; break;
	       } break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 7:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 8:move; CP_move(9);
	print(board);
	scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			default :move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			}
		break;
		default :move; CP_move(1);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 9:move; CP_move(8);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 4:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(9);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 6:move; CP_move(9);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 1:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:
			 case 3:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			 case 2:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			} break;
	       default:move; CP_move(1);
			RESULT; ASK; break;
	       }
	break;
	case 1:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 2:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(9);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:
			case 6:move; CP_move(1);
				print(board);
			       RESULT; ASK; break;
			case 7:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		case 9:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(1);
				print(board);
				DRAW_RES; ASK; break;
			case 6:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			case 1:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		case 4:move; CP_move(1);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(9);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		case 1:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		}
	break;
	case 3:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(9);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		}
	break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 8:move; CP_move(5);
	print(board);
	scanf("%d",&N);
	switch(N)
	{case 7:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(1);
			print(board);
			RESULT; ASK; break;
		} break;
	case 9:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(2);
				print(board);
				DRAW_RES;  ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(3);
			print(board);
			RESULT; ASK; break;
		} break;
	case 4:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(1);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(3);
			print(board);
			RESULT; ASK; break;
		} break;
	case 6:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 1:move; CP_move(3);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(1);
			print(board);
			RESULT; ASK; break;
		} break;
	case 1:move; CP_move(9);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(4);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			} break;
		 case 4:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		case 2:move; CP_move(3);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:
			 case 4:move; CP_move(6);
				print(board);
				RESULT; ASK; break;
			case 6:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		case 3:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(4);
				board[5]='O';
				print(board);
				DRAW_RES; ASK; break;
			case 4:move; CP_move(7);
				print(board);
				board[5]='O';
				DRAW_RES; ASK; break;
			case 6:move; CP_move(4);
				board[6]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		} break;
	case 2:move; CP_move(4);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 6:move; CP_move(7);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:
			 case 3:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			case 1:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		default:move; CP_move(6);
			print(board);
			RESULT; ASK; break;
		} break;
	case 3:move; CP_move(7);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 9:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		 case 4:move; CP_move(9);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		case 6:move; CP_move(9);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 1:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(1);
				print(board);
				RESULT; ASK; break;
			} break;
		case 2:move; CP_move(1);
			printf("\nnow you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:
			 case 6:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			 case 4:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		case 1:move; CP_move(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 9:move; CP_move(6);
				board[3]='O';
				print(board);
				DRAW_RES; ASK; break;
			case 6:move; CP_move(9);
				print(board);
				board[3]='O';
				DRAW_RES; ASK; break;
			case 4:move; CP_move(6);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:printf("\nhmm... trying to flirt with me...! ;)\n");
			} break;
		} break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 9:move; CP_move(5);
       print(board);
	scanf("%d",&N);
	switch(N)
	{case 8:move; CP_move(7);
	print(board);
	scanf("%d",&N);
		switch(N)
		{case 3:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(1);
				print(board);
				DRAW_RES; ASK; break;
			default :move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			}
		break;
		default :move; CP_move(3);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 7:move; CP_move(8);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 2:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(1);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 6:move; CP_move(3);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 7:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(4);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(7);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 4:move; CP_move(7);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 3:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 8:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			 case 2:move; CP_move(1);
				print(board);
				DRAW_RES; ASK; break;
			 case 1:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			} break;
	       default:move; CP_move(3);
			RESULT; ASK; break;
	       }
	break;
	case 3:move; CP_move(6);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 4:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(1);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(2);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(4);
			print(board);
			RESULT; ASK; break;
		}
	break;
	case 2:move; CP_move(1);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 8:move; CP_move(7);
			printf("\nnow you have no way...!\n");
			//sleep(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			case 4:move; CP_move(3);
				print(board);
			       RESULT; ASK; break;
			case 3:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		case 7:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 6:move; CP_move(3);
				print(board);
				DRAW_RES; ASK; break;
			case 4:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			case 3:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			} break;
		case 6:move; CP_move(3);
			scanf("%d",&N);
			switch(N)
			{case 7:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(7);
				print(board);
				RESULT; ASK; break;
			} break;
		case 4:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(6);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		case 3:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(8);
				print(board);
				DRAW_RES; ASK; break;
			default: move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
		}
	break;
	case 1:move; CP_move(6);
		print(board);
		scanf("%d",&N);
		switch(N)
		{case 4:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 3:move; CP_move(2);
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(3);
				print(board);
				RESULT; ASK; break;
			} break;
		default:move; CP_move(4);
			print(board);
			RESULT; ASK; break;
		}
	break;
	default:printf("\nhmm... trying to flirt with me...! ;)\n");
	}
break;

case 5:move; CP_move(1);
       print(board);
       scanf("%d",&N);
       switch(N)
       {case 2:move; CP_move(8);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 3:move; CP_move(7);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(6);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			default:move; CP_move(4);
				print(board);
				RESULT; ASK; break;
			} break;
	       case 4:move; CP_move(6);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 3:move; CP_move(7);
			      board[8]='O';
			      print(board);
			      DRAW_RES; ASK; break;
		      case 7:move; CP_move(3);
			     board[8]='O';
			     print(board);
			     DRAW_RES; ASK; break;
		      case 9:move; CP_move(3);
			     board[6]='O';
			     print(board);
			     DRAW_RES; ASK; break;
		      default:printf("\nhmm... trying to flirt with me...! ;)\n");
		      } break;
	       case 6:move; CP_move(4);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 7:move; CP_move(3);
			      board[8]='O';
			      print(board);
			      DRAW_RES; ASK; break;
		      default:move; CP_move(7);
			      print(board);
			      RESULT; ASK; break;
		      } break;
	       case 7:move; CP_move(3);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 4:move; CP_move(6);
			      board[8]='O'; print(board);
			      DRAW_RES; ASK; break;
		      case 6:move; CP_move(4);
			      board[8]='O'; print(board);
			      DRAW_RES; ASK; break;
		      case 9:move; CP_move(6);
			      board[3]='O'; print(board);
			      DRAW_RES; ASK; break;
		      } break;
	       case 9:move; CP_move(4);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 7:move; CP_move(3);
			      board[5]='O'; print(board);
			      DRAW_RES; ASK; break;
		      default:move; CP_move(7);
			      print(board);
			      RESULT; ASK; break;
		      } break;
	       default:printf("\nhmm... trying to flirt with me...! ;)\n");
	       } break;
       case 3:move; CP_move(7);
	      print(board);
	      scanf("%d",&N);
	      switch(N)
	      {case 4:move; CP_move(6);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:move; CP_move(7);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 8:move; CP_move(2);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 9:move; CP_move(8);
				board[1]='O';
				print(board);
				DRAW_RES; ASK; break;
			} break;
	      default:move; CP_move(4);
			print(board);
			RESULT; ASK; break;
	      } break;
       case 4:move; CP_move(6);
	       print(board);
	       scanf("%d",&N);
	       switch(N)
	       {case 7:move; CP_move(3);
			printf("\n now you have no way...!\n");
			//sleep(2);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 2:
			case 8:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			default:move; CP_move(9);
				print(board);
				RESULT; ASK; break;
			} break;
	       case 2:move; CP_move(8);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 3:move; CP_move(7);
			      board[8]='O';
			      print(board);
			      DRAW_RES; ASK; break;
		      case 7:move; CP_move(3);
			     board[8]='O';
			     print(board);
			     DRAW_RES; ASK; break;
		      case 9:move; CP_move(3);
			     board[6]='O';
			     print(board);
			     DRAW_RES; ASK; break;
		      default:printf("\nhmm... trying to flirt with me...! ;)\n");
		      } break;
	       case 8:move; CP_move(2);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 3:move; CP_move(7);
			      board[8]='O';
			      print(board);
			      DRAW_RES; ASK; break;
		      default:move; CP_move(3);
			      print(board);
			      RESULT; ASK; break;
		      } break;
	       case 3:move; CP_move(7);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 2:move; CP_move(8);
			      board[8]='O'; print(board);
			      DRAW_RES; ASK; break;
		      case 8:move; CP_move(2);
			      board[8]='O'; print(board);
			      DRAW_RES; ASK; break;
		      case 9:move; CP_move(8);
			      board[1]='O'; print(board);
			      DRAW_RES; ASK; break;
		      } break;
	       case 9:move; CP_move(2);
		      print(board);
		      scanf("%d",&N);
		      switch(N)
		      {case 3:move; CP_move(7);
			      board[5]='O'; print(board);
			      DRAW_RES; ASK; break;
		      default:move; CP_move(3);
			      print(board);
			      RESULT; ASK; break;
		      } break;
	       default:printf("\nhmm... trying to flirt with me...! ;)\n");
	       } break;
       case 6:move; CP_move(3);
	      print(board);
	      scanf("%d",&N);
	       switch(N)
	      {case 2:move; CP_move(8);
		      board[8]='O';
		      print(board);
		      DRAW_RES; ASK; break;
	      default:move; CP_move(2);
		      print(board);
		      RESULT; ASK; break;
	      } break;
       case 7:move; CP_move(3);
	      print(board);
	      scanf("%d",&N);
	      switch(N)
	      {case 2:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(6);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 6:move; CP_move(4);
				board[8]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 9:move; CP_move(6);
				board[3]='O';
				print(board);
				DRAW_RES; ASK; break;
			} break;
	      default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
	      } break;
       case 8:move; CP_move(2);
	      print(board);
	      scanf("%d",&N);
	       switch(N)
	      {case 3:move; CP_move(7);
		      board[8]='O';
		      print(board);
		      DRAW_RES; ASK; break;
	      default:move; CP_move(3);
		      print(board);
		      RESULT; ASK; break;
	      } break;
       case 9:move; CP_move(3);
	      print(board);
	      scanf("%d",&N);
	      switch(N)
	      {case 2:move; CP_move(8);
			print(board);
			scanf("%d",&N);
			switch(N)
			{case 4:move; CP_move(6);
				board[6]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 6:move; CP_move(4);
				board[6]='O';
				print(board);
				DRAW_RES; ASK; break;
			 case 7:move; CP_move(6);
				board[3]='O';
				print(board);
				DRAW_RES; ASK; break;
			} break;
	      default:move; CP_move(2);
			print(board);
			RESULT; ASK; break;
	      } break;
       }
break;
default:printf("\nhmm... trying to flirt with me...! ;)\n");
}

//getch();
}

void print(int p[])
{int i,j=0;
printf("\n");
for(i=0;i<3;i++)
	{if(i>0)
	printf("---+---+---\n");
	printf(" %c | %c | %c \n",p[j],p[j+1],p[j+2]);
	j+=3;
	}
}

char user_choice(void)
{ char c;
printf("\ndo you want to play more..??\n");
scanf("%c",&c);
return(c);
}
