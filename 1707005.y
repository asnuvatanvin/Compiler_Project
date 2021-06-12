%{
	#include<stdio.h>
	#include<math.h>
	#include<string.h>
    #include<limits.h>
    #include<float.h>
	void yyerror(const char *);
	extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
	extern FILE *yyout;

    typedef struct {
        char name[100];
        char vas[100];
        int val;
        float vall;

    }store ;
    store symbol_table[200];

	int count,sw,dv,iff;
	store find_value(char **sym);
	int add_value(char **sym);
%}

%union{
    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;
}

%start program
%token<variable>INT INTT FL FLOAT ID STRING STT
%type<variable>statement function function_call declaration_for_function params factor return while block condition expr assignments assignment if_else elseif else switch_ case cases df display var declaration type comment header for
%token IF ELIF ELSE FOR DW SW CA WHILE COL INC DEC MIN MAX GCD PFI PRIME DF POW PFF SINE COS TAN LN CMT HEAD DEF ABS FLOOR CEIL RET END PFS PFSN LEN CMP CAT CPY
%left '+' '-'
%left '*' '/'
%left INC DEC


%%

program:
    |program statement
    ;

statement:
    header
    |comment
    |function
    |function_call
    |if_else 
    |expr
    |switch_
    |case
    |for
    |while
    |declaration
    |assignments
    |display
    |return
    ;

block:
    statement block
    |statement '}'{$$.ival=$1.ival;}
    ;

header:
    HEAD{printf("Header Detected.\n");}
    ;

function:
    DEF ID '(' params ')' COL {
                    if($2.str[0]=='m' && $2.str[1]=='a' && $2.str[2]=='i' &&$2.str[3]=='n')
                    {
                        printf("Main function starts here.\n");
                    }
                    else
                    {
                        printf("User defined function.\n");
                    }
    }
    ;

params:
    params ',' declaration_for_function
    |declaration_for_function //{printf("Parameters finished.\n");}
    ;

declaration_for_function:
    type ID
    |/*No Parameters*/{printf("function has no paramters\n");}
    ;

function_call:
    ID '(' var ')' 
    |ID '(' ')'
    ;

display:
    PFI '(' expr ')'{
        printf("%d\n",$3.ival);
    }
    |PFF '(' expr ')'{
        printf("%f\n",$3.fval);
    }
    |PFS '(' expr ')'{
        printf("%s ",$3.st);
    }
    |PFSN '(' expr ')'{
        printf("%s\n",$3.st);
    }
    ;


declaration:
    type assignments
    |type var
    ;

type:
    INTT
    |FL
    |STT
    ;
assignments:
    assignments ',' assignment
    |assignment
    ;

assignment: 
    var '=' expr  {
                    if($3.ival==INT_MIN && $3.fval==FLT_MIN && symbol_table[$1.ival].val==INT_MAX && symbol_table[$1.ival].vall==FLT_MAX)
                    {
                        strcpy(symbol_table[$1.ival].vas,$3.st);
                    }
                    else if($3.ival==INT_MIN && $3.fval!=FLT_MIN && symbol_table[$1.ival].val==INT_MAX && symbol_table[$1.ival].vas[0]=='\0')
                    {
                        symbol_table[$1.ival].vall=$3.fval;
                    }
                    else if($3.ival!=INT_MIN && $3.fval==FLT_MIN && symbol_table[$1.ival].vall==FLT_MAX && symbol_table[$1.ival].vas[0]=='\0')
                    {
                        symbol_table[$1.ival].val=$3.ival;
                    }
                    else
                    {
                        printf("Variable Type error.\n");
                    }
                    /*for(int i=0;i<count;i++)
                    {
                        printf("lala %s %d %f %s\n",symbol_table[i].vas,symbol_table[i].val,symbol_table[i].vall,symbol_table[i].name);
                    }*/
                    

    }
    ;

var:
    var ',' ID
    |ID {$$.ival = add_value(&$1.str);}
    ;  

comment:
    CMT{printf("This is a comment.\n");}
    ;

return:
    RET expr{printf("Return statement found.\n\n");}
    ;

if_else:
    IF '(' condition ')' '{' block{
                                if($3.ival)
                                {
                                    iff=1;
                                    printf("If statement will be executed.\n");
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }
    }
    |IF '(' condition ')' '{' block elseif{
                                if($3.ival)
                                {
                                    iff=1;
                                    printf("If statement will be executed.\n");
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }

    }
    |IF '(' condition ')' '{' block else{
                                if($3.ival)
                                {  
                                    iff=1;
                                    printf("If statement will be executed.\n");
                            
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }
    }
    ;

elseif:
    ELIF '(' condition ')' '{' block elseif{
                                if($3.ival)
                                {
                                     iff=1;
                                     printf("Else if statement will be executed.\n");
                                }
                        
    }
    |ELIF '(' condition ')' '{' block else{
                                if($3.ival)
                                {
                                     iff=1;
                                     printf("The last else if statement will be executed.\n");
                                }
    }
    ;
else: 
    ELSE '{' block
                        {
                        }
    ;


switch_:
    SW '(' expr ')' COL{
        sw = $3.ival;
        printf("This is a switch statement.\n");
    }
    ;

case:
    cases
    {
        if(sw!=INT_MIN)
        {
            printf("%d\n",dv);
        }
    }
    ;

cases: 
    CA expr COL statement cases{
        if(sw==$2.ival)
        {
            printf("%d\n",$2.ival);
            sw = INT_MIN;
        }

    }
    |CA expr COL statement df{
        
        if(sw==$2.ival)
        {
            printf("%d\n",$2.ival);
            sw = INT_MIN;
        }
    }
    ;
df:
    DF COL statement{
       dv = $3.ival;
    }
    ;

for:
    FOR '(' expr ',' expr ',' expr ')' '{' block{
                    for(int i=$3.ival;i<$5.ival;i=i+$7.ival)
                    {
                        printf("This is a for loop.\n");
                    }
    }
    ;
while:
    WHILE '(' condition ')' '{' block{
        if($3.ival)
        {
            printf("This is a while loop\n");
        }
    }
    ;
condition:
    factor{$$.ival=$1.ival;$$.fval=$1.fval;}
    |expr '>' factor{if($1.ival==INT_MIN){$$.ival = $1.fval > $3.fval;}else{$$.ival = $1.fval > $3.fval;}}
    |expr '<' factor{if($1.ival==INT_MIN){$$.ival = $1.fval > $3.fval;}else{$$.ival = $1.fval > $3.fval;}}
    |expr '==' factor{if($1.ival==INT_MIN){$$.ival = $1.fval > $3.fval;}else{$$.ival = $1.fval > $3.fval;}}
    |expr '!=' factor{if($1.ival==INT_MIN){$$.ival = $1.fval > $3.fval;}else{$$.ival = $1.fval > $3.fval;}}
    ;
expr:
    factor{$$.ival=$1.ival;$$.fval=$1.fval;if($1.st!=NULL){strcpy($$.st,$1.st);}}
    |LEN '(' expr ')'{int a=strlen($3.st);printf("Lenght of string: %d\n",a);}
    |CMP '(' expr ',' expr ')'{store n = find_value(&$3.str),m=find_value(&$5.str);int a = strcmp(n.vas,m.vas); 
                            a=0?printf("Strings match.\n"):printf("Strings do not match\n");}
    |CAT '(' expr ',' expr ')'{int i = add_value(&$3.str),j = add_value(&$5.str);strcat(symbol_table[i].vas,symbol_table[j].vas);}
    |CPY '(' expr ',' expr ')'{int i = add_value(&$3.str),j = add_value(&$5.str);strcpy(symbol_table[i].vas,symbol_table[j].vas);}
    |expr '!'{
        long long int n = (long long int)$1.ival;
        long long int answer=1;
        for(long long int i=2;i<=n;i++)
        {
            answer*=i;
        }
        printf("%lld\n",answer);
    }
    |PRIME '(' expr ')'{
        int check(int n)
        {
            if(n==1)
            {
                return 0;
            }
            if(n==2)
            {
                return 1;
            }
            if(n%2==0)
            {
                return 0;
            }
            int m = sqrt(n);
            for(int i=3;i<=m+2;i+=2)
            {
                if(n%i==0)
                {
                    return 0;
                }
            }
            return 1;
        }
        int n=$3.ival;
        $$.ival = check(n);
        $$.ival==0?printf("Not prime.\n"):printf("Prime.\n")
    }
    |MIN '(' expr ',' expr ')'{
        if($3.ival>$5.ival)
        {
            $$.ival = $5.ival;
        }
        else
        {
            $$.ival = $3.ival;
        }
        printf("%d\n",$$.ival);
    }
    |MAX '(' expr ',' expr ')'{
        if($3.ival>$5.ival)
        {
            $$.ival = $3.ival;
        }
        else
        {
            $$.ival = $5.ival;
        }
        printf("%d\n",$$.ival);
    }
    |GCD '(' expr ',' expr ')'{
       int c;
       int a = $3.ival;
       int b = $5.ival;
       if(a>b)
       {
           int temp = a;
           a=b;
           b=a;
       }
       while(a!=0)
       {
           int temp = b%a;
           b=a;
           a=temp;
       }
       $$.ival = b;
       printf("%d\n",$$.ival);
    }
    |SINE '(' expr ')'{double x = (double)$3.fval,ans = sin((x*3.1416)/180.0);printf("%f\n",$$.fval=(float)ans);}
    |COS '(' expr ')'{double x = (double)$3.fval,ans = cos((x*3.1416)/180.0); printf("%f\n",$$.fval=(float)ans); }
    |TAN '(' expr ')'{double x = (double)$3.fval,ans = tan((x*3.1416)/180.0); printf("%f\n",$$.fval=(float)ans); }
    |POW '(' expr ',' expr ')' {double x = (double)$3.fval,y = (double)$5.fval;printf("%f\n",$$.fval=(float)pow(x,y));}
    |LN '(' expr ')'{float x = $3.fval,ans = log(x);printf("%f\n",$$.fval=ans);}
    |ABS '(' expr ')'{$$.ival=abs($3.ival);printf("%d\n",$$.ival);}
    |FLOOR '(' expr ')'{$$.ival=(int)$3.fval;printf("%d\n",$$.ival);}
    |CEIL '(' expr ')' {$$.ival=(int)$3.fval+1;printf("%d\n",$$.ival);}
    |expr '+' factor{if($1.fval!=FLT_MIN){$$.fval=$1.fval+$3.fval;}else{$$.ival=$1.ival+$3.ival;}}
    |expr '-' factor{if($1.fval!=FLT_MIN){$$.fval=$1.fval-$3.fval;}else{$$.ival=$1.ival-$3.ival;}}
    |expr '*' factor{if($1.fval!=FLT_MIN){$$.fval=$1.fval*$3.fval;}else{$$.ival=$1.ival*$3.ival;}}
    |expr '/' factor{if($1.fval!=FLT_MIN){$$.fval=$1.fval/$3.fval;}else{$$.ival=$1.ival/$3.ival;}}
    |expr '%' factor{$$.ival = $1.ival % $3.ival;}
    |expr INC {$$.ival = $1.ival + 1; int i = add_value(&$1.str);symbol_table[i].val++;}
    |expr DEC {$$.ival = $1.ival - 1; int i = add_value(&$1.str);symbol_table[i].val--;}
    ;
factor:
    INT{$$.ival=$1.ival; $$.fval=FLT_MIN;$$.st=NULL;}
    |FLOAT{$$.fval = $1.fval; $$.ival=INT_MIN;$$.st=NULL;}
    |STRING{$$.ival=INT_MIN;$$.fval=FLT_MIN;strcpy($$.st,$1.st);}
    |ID{store pp = find_value(&$1.str);if(pp.val==INT_MAX && pp.vall==FLT_MAX){$$.ival=INT_MIN;$$.fval=FLT_MIN;strcpy($$.st,pp.vas);}
    else if(pp.val==INT_MAX && pp.vall!=FLT_MAX){$$.fval=pp.vall;$$.ival=INT_MIN;}
                                       else{$$.ival=pp.val;$$.fval=FLT_MIN;}}
    ;
%%

int add_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s ro\n",a);
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
    for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return i;
		}
	}
    strcpy(symbol_table[count].name,a);
    symbol_table[count].val = INT_MAX;
    symbol_table[count].vall = FLT_MAX;
    count++;
    //printf("%d",count);
    return count-1;
}

store find_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s ro\n",a);
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
	int p = 0;
	for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return symbol_table[i];
		}
	}
    store n;
    printf("Variable not declared\n");
	return n;
}

void yyerror(const char *s)
{
	fprintf(stderr, "error: %s\n",s);
}

int main()
{
	yyin = fopen("input.c","r");

    yyparse();

    return 0;
}