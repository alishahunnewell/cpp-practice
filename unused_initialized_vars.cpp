//modern compilers typically generate warnings if a var is initalized but not used 
//if treat warnings as errors is enabled compilation fails 

//consider 
#include <iostream>
int main() 
{
        int x { 5 }; //variable x defined 
        //not used 
        std::cout << x; //used 

        //the [[maybe_unused]] attribute C++17, where in some cases, neither of the above options 
        //are desirable, for ex consider set of physical values that may be used in different programs: 
        double pi {3.14159 };
        // double gravity { 9.8 };
        double phi { 1.61803 };

        std::cout << pi << '\n'; //pi used 
        std::cout<< phi << '\n'; //phi used
//compiler will complain ab gravity not being used, if there are many vars used in multiple places going 
//through lists to remove out unused takes time, instead [[maybe_unused]] attribute bypasses compiler warning

        [[maybe_unused]] double gravity2 { 9.8 }; //gravity2 defined but not used, no warning generated
        return 0; 

}
//to fix, if the var is truly unused and not needed, remove the definition of x
//or use the variable 