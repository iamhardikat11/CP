/*
    76 + 81/3
    | 7 - 8 |
    7 4 * 6y

*/

// A Scanner Generates the following token  stream


yylex():
.l:



%{
    /*
        C Declarations and Definitions
    */
%}
/* Regular Expressions Description */
NUM [0-9]+
NL [\n]
WS [ \t]

%%
    {NUM} {printf("Number=%d\n",yytext); /* Keyword Rule*/}
    "+"   {printf("ADD\n");/*Operator Rule*/}
    "-"   {printf("SUBTRACT\n");/*Operator Rule*/}
    "*"   {printf("MULTIPLY\n");/*Operator Rule*/}
    "/"   {printf("DIVIDE\n"); /*Operator Rule*/}
    "|"   {printf("ABS\n");/* Operator Rule*/}
    {NL}  {printf("Newline\n");/* Newline Rule*/}
    {WS}  {/* Ignore WhiteSpace */}
    .     {printf("Illegal input %s\n", yytext);}
%%

void main()
{
    printf("====START of TOKENS==============");
    yylex();   /* Flex Engine */
    printf("====END of TOKENS================");
    return;
}