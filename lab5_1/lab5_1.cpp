#include <iostream>

class A {
public:
    int aa;
protected:
    int ab;
private:
    int ac;

public:
    void testA() {
        
        aa = 1;
        ab = 2;
        ac = 3;
    }
};

class B : public A {
public:
    int ba;
protected:
    int bb;
private:
    int bc;

public:
    void testB() {
        
        aa = 10;  
        ab = 20;  
        //ac = 30;  // Error: ac is private in A
        ba = 40;
        bb = 50;
        bc = 60;  
    }
};

class C : public B {
public:
    int ca;
protected:
    int cb;
private:
    int cc;

public:
    void testC() {
       
        aa = 100; 
        ab = 200; 
        //ac = 300; // Error: ac is private in A
        ba = 400; 
        bb = 500; 
        //bc = 600; // Error: bc is private in B
        ca = 700;
        cb = 800;
        cc = 900; 
    }
};

int main() {
    
    A objA;
    B objB;
    C objC;

    
    objA.testA();
    objB.testB();
    objC.testC();

    return 0;
}
