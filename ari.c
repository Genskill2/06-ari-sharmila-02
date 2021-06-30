#include <ctype.h>
#include <string.h>

typedef char *string;
string ari(string s){

	float chars=0.00, words=1.00, sents=0.00;
	float val=0.00;
	
	for(int i=0; i<=strlen(s); i++){
	  if(isalnum(s[i])!=0)
	  	{ chars++; }
	  if(s[i]==32)
	  	{ words++; }
	  if( s[i]==46 || s[i]==63 || s[i]==33)
	  	{ sents++; }
	  if(s[i]=='(')
	  	{ sents = sents-2;}			
	}
	
	val = ((4.71*(float)(chars/words)) + (0.5*(float)(words/sents)) - (21.43));
		
	if(val>=0 && val<=1)
		{return "Kindergarten";}
	else if(val>1 && val<=2)
		{return "First/Second Grade";}
	else if(val>2 && val<=3)
		{return "Third Grade";}
	else if(val>3 && val<=4)
		{return "Fourth Grade";}
	else if(val>4 && val<=5)
		{return "Fifth Grade";}
	else if(val>5 && val<=6)
		{return "Sixth Grade";}
	else if(val>6 && val<=7)
		{return "Seventh Grade";}
	else if(val>7 && val<=8)
		{return "Eighth Grade";}
	else if(val>8 && val<=9)		
		{return "Ninth Grade";}
	else if(val>9 && val<=10)
		{return "Tenth Grade";}
	else if(val>10 && val<=11)
		{return "Eleventh Grade";}
	else if(val>11 && val<=12)
		{return "Twelfth Grade";}
	else if(val>12 && val<=13)
		{return "College student";}
	else if(val>13 && val>=14)
		{return "Professor";}
	else { return 0;}			

}
