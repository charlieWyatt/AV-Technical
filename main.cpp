// Question 1 Install g tests and add to cmakes lists
#include "gtest/gtest.h"
#include <thread>
#include <iostream>
#include <mutex>


const int values[] = { 1,2,3,4,5 };
const int NVALS = sizeof values / sizeof (int);
void function(char**);

std::mutex mu;

// This template checks if T and *T are of the same type
template <typename T>
struct ptr_holder 
{
    static_assert(!std::is_same_v<T, std::remove_pointer<T>>, "The pointer type was the same as the type pointed by T");
};

int total = 0;

class Wallet
{
    int mMoney;
    public:
        Wallet() :mMoney(0){}
        int getMoney() { return mMoney; }
        void addMoney(int money)
        {
            for(int i = 0; i < money; ++i)
            {
                mMoney++;
            }
        }
};

struct person{
   int age;
   float weight;
};

TEST(testerFunction, question7) {
    Wallet walletObject;
    std::vector<std::thread> threads;
    for(int i = 0; i < 5; ++i)
    {
        threads.push_back(std::thread(&Wallet::addMoney, &walletObject, 1000));
        threads.at(i).join();
    }
    
    ASSERT_EQ(walletObject.getMoney(), 5000);
}

int testerFunction()
{
    Wallet walletObject;
    std::vector<std::thread> threads;
    for(int i = 0; i < 5; ++i)
    {
            threads.push_back(std::thread(&Wallet::addMoney, &walletObject, 1000));
            threads.at(i).join();
    }
    
    return walletObject.getMoney();
}

// Fix any compilation error
class Foo {
    public:
        int integer;
        Wallet* wallet;
        Foo(int a = 0, Wallet* b = NULL) 
        {
            integer = a;
            wallet = b;
        }
};

void fn(int** pp);


int main(int argc, char** argv)
{
    // Question 2
    int x = 10;
    int y = 15;
    std::cout << x << ", " << y << std::endl;

    // Question 3 Get the function to run
    char *arr[6] = { "ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);


    // Question 4 Insert in map
    typedef std::map<int, double> valmap;

    valmap m;

    for (int i = 0; i < NVALS; i++) 
    {
        m.insert(std::make_pair(values[i], pow(values[i], .5)));
    }


    valmap::iterator it = m.begin();              
    valmap::iterator it2 = m.end(); // NOT PARTICULARLY SURE WHAT THEY ARE ASKING FOR HERE THE OLD LINES FOR THESE WERE WEIRD             
    m.insert(it, std::pair<int, int>(1,2));
    
    // Question 5
    int i = 1, j = 1;
    if ( (i != 3) && (j==1))
    {
        std::cout << "inside if statement\n";
    }

    // Question 6 Store a char * pointer in template
    ptr_holder<char *> p; 

    // Question 7 Fix the compiler errors and race conditions
    // Convert the testerFunction() into a google test
    int val = 0;
    for(int k = 0; k < 1000; k++)
    {
        // the google test of this is run at the bottom before the main function returns
        if((val = testerFunction()) != 5000)
        {
            std::cout << "Error at count = "<<k<<" Money in Wallet = "<<val << std::endl;
            return 1;
        }
    }
    
    // Question 8
    int n = 1;
    int *q = &n;
    fn(&q);

    // Question 9
    struct person* ptr = (struct person*)malloc(sizeof(struct person));
    ptr->age = 10;
    ptr->weight = 55.5;

    // Question 10 Initialise foo
    Foo foo; // foo is initialised with the default constructor

    // Question 11
    char c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
    }

    // Google tests are run
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();                         

}

// Do not change anything besides the ptr variable
void function(char *ptr[])
{
	char *ptr1;
	ptr1 = (ptr += sizeof(int))[-2];
	printf("%s\n", ptr1);
}

void fn(int** pp)
{
    printf("%p : %p : %d", pp, *pp, **pp);
}


