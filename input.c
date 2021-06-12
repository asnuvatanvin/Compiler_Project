#include<stdio.h>
#include<math.h>
#include<string.h>
//This is a mini compiler

define function1(int a,float b,string c):
    int a=20,b=50
    pfs("Value_of_a:")
    pfi(a)
    pfs("Value_of_b:")
    pfi(b)
    pfs("Minimum:")
    min(a,b)
    pfs("Maximum:")
    max(a,b)
    pfs("GCD:")
    gcd(a,b)
    pfs("Prime_Checking:")
    prime(13)
    pfs("Factorial:")
    a!
    int k=-2
    pfs("Value_of_k:")
    pfi(k)
    pfs("Absolute_Value")
    abs(k)
    return a

define function2(int val,float fval):
    float m = 60.0, n = 2.35
    pfs("Value_of_m:")
    pff(m)
    pfs("Sine_Function:")
    sin(m)
    pfs("Cosine_Function:")
    cos(m)
    pfs("Tangent_Function:")
    tan(m)
    pfs("Value_of_n:")
    pff(n)
    pfs("e_based_log_Function:")
    ln(n)
    pfs("Floor_Function:")
    floor(n)
    pfs("Ceil_Function:")
    ceil(n)
    m=5.0
    n=2.0
    pfs("5_to_the_power_2_is_equal_to:")
    pow(m,n)
    return m

define function3():
    string str="CSE"
    pfs("Value_of_str:")
    pfsn(str)
    len(str)
    string st="3202"
    pfs("Value_of_st:")
    pfsn(st)
    pfs("Comparing_str_and_st:")
    cmp(str,st)
    pfs("String_Catenation")
    cat(str,st)
    pfsn(str)
    pfs("Copying_str_to_st:")
    cpy(st,str)
    pfsn(st)
    return st

define main():
    int a=10,b=20
    int c
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
    float u=8.7,v=66.4
    float w
    w=u+v
    pff(w)
    w=u-v
    pff(w)
    w=u*v
    pff(w)
    w=v/u
    pff(w)
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

    pfsn("Below_is_an_if_elseif_else_statement")
    if(b==20){
        float h=3.0
        if(h>4.0){
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
    pfsn("Function_call_ahead")
    function1(a,u,tt)
    function2(a,u)
    function3()

    return 0