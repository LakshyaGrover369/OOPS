//////////////////////////////////////////////////////////////////////////////////////////
///////////////// video link => https://youtu.be/3fLvC4cofcg?si=8kDolhy_ObVZMDz2//////////
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// POLYMORPHISM /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////



// #include <iostream>
// using namespace std;

// class base{
//     int default_value = 01;
//     public:
//     ////function overloading
//     void area(){
//         cout<<"\n area is = "<<default_value;
//     }
//     void area(int a){
//         cout<<"\n the area of square is =" <<a*a;
//     }
// };

// class derived : public base{
//   int default_value = 3;
//   public:
//   void area(){
//       cout<<"\n area is = "<<default_value;
//   }
// };

// int main(){

// cout<< "\n this is the oops starting";
// //////////////////////Compile Time Polymorphism/////////////////
// //////////////////////Function overloading/////////////////////
// // base obj;
// // obj.area();
// // obj.area(4);

// //////////////////////Run time Polymorphism/////////////////
// /////////////Function overriding///////////////////////////
// derived obj_d;
// obj_d.area();

// return 0;
// }



//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// INHERITANCE /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////// TYPES OF INHERITANCE 
// Singlelevel 
// multiple            =========== multiple base    ::      1 derived class
// multilevel          =========== multi derived    ::      1 Base Class
// hierarchical         
// hybrid


//////////////////////////////////////////////// MODES OF INHERITANCE 

// Base->Derived
// extending like ========== public:
// public->public
// protected->protected

// extending like ========== private:
// public->private
// protected->private

// extending like ========== protected:
// public->protected
// protected->protected

// #include <iostream>
// using namespace std;

// class base{
//     int default_value = 01;
//     int passcode = 369;
//     protected:
//     void password(){
//         cout<<"\n the passcode is = " << passcode;
//     }
//     public:
//     void func_base(){
//         cout<<"\n area is = "<<default_value;
//     }
// };

// class derived : public base{
//   int default_value = 3;
//   public:
//   void func_derived(){
//     //   we can access the protected members from the base class 
//       password();
//   }
// };

// int main(){

// base obj;
// derived obj_d;
// obj_d.func_base();
// obj_d.func_derived();

// return 0;
// }


/////////////////////////-------STATIC VARIABLE-------//////////////////////////////////
//              A Variable that can't be chnage after its declared                    //
////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////---------- FREIND FUNCTION -----------///////////////////////////////
//            a function that can access the private and protected members of a class   //
//////////////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// class base{
//     int passcode = 369;
//     protected:
//     int default_value = 01;
//     void func_base(){
//         cout<<"\n area is = "<<default_value;
//     }
//     friend void func_derived(base b);
// };

// void func_derived(base b){
// //   we can access the protected & private members from the base class
// cout<<" private = "<<b.passcode;
// cout<<" protected = "<<b.default_value;
  
// }

// int main(){

// base b;
// func_derived(b);

// return 0;
// }



//////////////////////////////////////////////////////////////////////////////////////////
////////////---------- Call by Value & Call By Reference  -----------/////////////////////
//                                                                                      //
//      call by value = not change main variable                                        //
//              (actually pass the copy of pointer location or variable in the function)//
//      call by reference = does change main variable                                   //
//              (actually pass the pointer location in the function)                    //
//////////////////////////////////////////////////////////////////////////////////////////



// #include <iostream>
// using namespace std;

// class base{
//     public:
//     void func_base_cb_value(int change_value){
//         change_value += 10;
//         cout<<"\n func value = "<<change_value;
//     }
//     void func_base_cb_ref(int &change_value){
//         change_value += 10;
//         cout<<"\n func value = "<<change_value;
//     }
// };

// int main(){

// int main_value = 1;
// base b;

// cout<<"\ncall by value =====>\n";

// b.func_base_cb_value(main_value);
// cout<<"\n main_value = "<< main_value;

// cout<<"\ncall by reference =====>\n";

// b.func_base_cb_ref(main_value);
// cout<<"\n main_value = "<< main_value;

// return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////---------- REFERENCE AD POINTER  -----------////////////////////////
//                                                                                      //
//     REFERENCE = the value at the pointer we point on                                 //
//     POINTER = the address of the variable we are giving                              //
//////////////////////////////////////////////////////////////////////////////////////////


//REFERENCE VS POINTER

// Reference
// int x=20;
// int &ref = x;
// ref=19;
// cout << x; //19

// pointer
// int a-2;
// int *x=&a;
// cout << x; //address of a;
// cout <<* x; // value of variable it points to

// 1. Cannot be null / can be null
// 2. A pointer can be declared as void but a reference can never be void
// int a = 10;
// void* aa = &a ;. //it is valid
// void &ar = a; // it is not valid
// 3. The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer,
// double-pointer, triple-pointer. Whereas, the reference variable has only one/single
// level of indirection
// 4.Once a reference is created, it cannot be later made to reference another object; it
// cannot be reseated. This is often done with pointers.




//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////---------- VIRTUAL FUNCTION -----------//////////////////////////////
//            to ensure that the function must be override we will use virtual          //
//////////////////////////////////////////////////////////////////////////////////////////

    
// #include <iostream>
// using namespace std;

// class base{
//     public:
//     virtual void func_base(){
//         cout<<"\n base class";
//     }
// };
// class derived{
//     public:
//     void func_base(){
//         cout<<"\n derived class ";
//     }
// };

// int main(){

// int main_value = 1;
// base b;
// derived d;

// d.func_base();

// return 0;
// }





//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////---------- VIRTUAL FUNCTION -----------//////////////////////////////
//            to ensure that the function must be override we will use virtual          //
//////////////////////////////////////////////////////////////////////////////////////////


// TYPE CONVERSION

// Type conversion is the process that converts the predefined data type of one variable into an appropriate data type

// --- >implicit type conversion

// The following is the correct order of data types from lower rank to higher rank:

// bool->char->short int->int->unsigned int->long int->unsigned long int->long long int->float->double->long double

// /assignIthelintegerIvalue
// int num1 =25;
// //declareIfloatIvariable
// float num2;
// //convert[int[valuelinto[]float[variablelusinglimplicit[conversion
// num2=num1;

// -----. > explicit type conversion
// Conversions that requireluser interventionlto change the data type of one variable to another,

// ------ > explicit type conversion
// Conversions that requireluser intervention to change the data type of one variable to another, is called thelexpli

// float num2;
// /AinitializeJanlint[ariable
// int num1=25;

// num2=(float) num1;




//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////---------- DEFAULT PARAMETER  -----------///////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


// DEFAULT PARAMETER

// #include<iostream>
// using namespace std;

// // A function with default arguments, it can be called with
// // 2 arguments or 3 arguments or 4 arguments.

// int sum(int x, int y, int z=0, int w=0)

// return (x+ y + z + w);

// }

// /* Driver program to test above function*/
// int main()
// {
// cout << sum(10, 15) << endl;
// cout << sum(10, 15, 25) << endl;
// cout << sum(10, 15,25,30) << endl;
// return 0;
// }





//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////---------- INLINE FUNCTION  -----------///////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


// overhead if the execution time of function is less than the switching time
// from the caller function to called function (callee). Inline function is a
// function that is expanded in line when it is called. When the inline
// function is called whole code of the inline function gets
// inserted or substituted at the point of inline function call. This
// substitution is performed by
// the C++ compiler at compile time. Inline function may increase
// efficiency if it is small.


// #include <iostream>
// using namespace std;

// // Inline function to calculate the cube of a number
// inline int cube(int s) {
//     return s * s * s;  // Corrected the cube calculation (s's's to s*s*s)
// }

// int main() {
//     // Output the cube of 3
//     cout << "The cube of 3 is: " << cube(3) << "\n";
//     return 0;
// }

// // Output: The cube of 3 is: 27




//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////---------- MACROS  -----------//////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////




// Macros: Macros are a piece of code in a program which is given
// some name. Whenever
// this name is encountered by the compiler the compiler replaces the
// mame with the actual
// piece of code. The '#define' directive is used to define a macro.


// // EXAMPLE 1 ====>
// #include <iostream>
// // Macro definition to limit the number of iterations
// #define LIMIT 5
// int main() {
//     // Loop to print numbers from 0 to LIMIT-1
//     for (int i = 0; i < LIMIT; i++) {
//         std::cout << i << "\n"; 
//     }

//     return 0;
// }


// // EXAMPLE 2 ====>
// #include <iostream>

// // Macro definition with parameters to calculate area of a rectangle
// #define AREA(l, b) (l * b)  // Corrected '1' to 'l' in the macro definition

// int main() {
//     int l1 = 10, l2 = 5, area; 

//     // Calculate area using the macro
//     area = AREA(l1, l2);  // Use the corrected macro
//     std::cout << "Area of rectangle is: " << area;

//     return 0;
// }





//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////---------- EXCEPTION HANDLING  -----------///////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


// Exception handling:
// Exceptions are run-time anomalies or abnormal conditions that a
// program encounters
// during its execution. try: represents a block of code that can throw an
// exception.
// catch: represents a block of code that is executed when a particular
// exception is thrown.
// throw: Used to throw an exception. Also used to list the exceptions that
// a function throws,
// but doesn't handle itself.

// o The finally keyword is used to create a block of code that follows a try
// block. A finally block
// of code always executes, whether or not an exception has occurred.
// Using a finally block
// allows you to run any cleanup-type statements that you just wish to
// execute, despite what
// happens within the protected code.
// - The finalize() method is used just before object is destroyed and can
// be called just prior to
// object creation