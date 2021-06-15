#include<stdio.h>
#include<math.h>
#include<string.h>
//This is a mini compiler

int function1(int a,float b,string c):
    int a=20,b=50
    pfs("Value of a:")
    pfi(a)
    pfs("Value of b:")
    pfi(b)
    pfs("Minimum:")
    min(a,b)
    pfs("Maximum:")
    max(a,b)
    pfs("GCD:")
    gcd(a,b)
    pfs("Prime Checking:")
    prime(13)
    pfs("Factorial:")
    a!
    int k=-2
    pfs("Value of k:")
    pfi(k)
    pfs("Absolute Value")
    abs(k)
    return a


float function2(int val,float fval):
    float m = 60.0, n = 2.35
    pfs("Value of m:")
    pff(m)
    pfs("Sine Function:")
    sin(m)
    pfs("Cosine Function:")
    cos(m)
    pfs("Tangent Function:")
    tan(m)
    pfs("Value of n:")
    pff(n)
    pfs("e based log Function:")
    ln(n)
    pfs("Floor Function:")
    floor(n)
    pfs("Ceil Function:")
    ceil(n)
    m=5.0
    n=2.0
    pfs("5 to the power 2 is equal to:")
    pow(m,n)
    return m


void function3():
    string str="CSE"
    pfs("Value of str:")
    pfs(str)
    endl
    len(str)
    string st="3202"
    pfs("Value of st:")
    pfs(st)
    endl
    pfs("Comparing str and st:")
    cmp(str,st)
    pfs("String Concatenation")
    cat(str,st)
    pfs(str)
    endl
    pfs("Copying str to st:")
    cpy(st,str)
    pfs(st)
    endl


int main():
    int a,b,c,d
    pfs("Enter two integer values:")
    a = inpi()
    b = inpi()
    c=a+b
    pfi(c)
    c=b-a
    pfi(c)
    c=a*b
    pfi(c)
    c=b/a
    pfi(c)
    c=b%a
    pfi(c)
    b++
    pfi(b)
    a--
    pfi(a)
    float u,v,w
    pfs("Enter two float values:")
    u = inpf()
    v = inpf()
    w=u+v
    pff(w)
    w=u-v
    pff(w)
    w=u*v
    pff(w)
    w=v/u
    pff(w)
    pfs("Array Operations:")
    endl
    int @ara[3]
    <@ara,0> = a + b
    <@ara,1> = a - b
    d=<@ara,0>+<@ara,1>
    pfi(d)
    d=<@ara,0>-<@ara,1>
    pfi(d)
    d=<@ara,0>*<@ara,1>
    pfi(d)
    d=<@ara,0>/<@ara,1>
    pfi(d)
    d=<@ara,0>%<@ara,1>
    pfi(d)
    <@ara,2> = <@ara,0>+<@ara,1>
    pfa(<@ara,2>)
    <@ara,2> = 4
    pfa(<@ara,2>)
    for(0,10,1){
        if(a==9){
        a=a*2
        pfi(a)
        }
    }
    while(a<20){
        a++
        pfi(a)
    }
    switch (a) :
    case 18 : pfi(18)
    case 19: pfi(19)
    case 20: pfi(20)
    default: pfi(0)
    
    do{
	c++;
    }while(c<10)

    pfs("Below is an if elseif else statement")
    endl
    if(b==20){
        float h=3.0
        if(h>=4.0){
            h=h*4.0
            pff(h)
        }
        else{
            h=h/2.0
            pff(h)
        }
    }
    elif(b==21){
        pfi(b)
    }
    else{
        a=a*a
        pfi(a)
    }
    string tt
    pfs("Function call ahead")
    endl
    function1(a,u,tt)
    function2(a,u)
    function3()

    return 0
