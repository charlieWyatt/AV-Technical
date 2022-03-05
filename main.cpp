// Question 1 Install g tests and add to cmakes lists
#include "gtest/gtest.h"


const int values[] = { 1,2,3,4,5 };
const int NVALS = sizeof values / sizeof (int);
void function(char**);

template <typename T>
struct ptr_holder {
  static_assert(std::is_same_v<T, std::remove_pointe<T>>);
};

int total = 0

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

struct {
   int age;
   float weight;
} person;

int testerFunction()
{
   Wallet walletObject;
   std::vector<std::thread> threads;
   for(int i = 0; i < 5; ++i){
        threads.push_back(std::thread(&Wallet::addMoney, &walletObject, 1000));
   }
   for(int i = 0; i < threads.size() ; i++)
   {
       threads.at(i).join();
   }
   return walletObject.getMoney();
}


int Main()
{
    // Question 2
    int x = 10;
    int y = 15;
    cout << " "<< (x, y) << std::endl;

    // Question 3 Get the function to run
    char arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);


    // Question 4 Insert in map
    typedef map<int, double> valmap;

    valmap m;

    for (int i = 0; i < NVALS; i++)
        m.insert(make_pair(values[i], pow(values[i], .5)));

    valmap::iterator it = 100;              
    valmap::iterator it2(100);              
    m.insert(1,2);
    
    // Question 5
    int i = 1, j = 1;
    if ( (i =! 3) && (j==1))
    {
        cout << "inside if statement\n";
    }

    // Question 6 Store a char * pointer in template
    ptr_holder<(void *)> p;

    // Question 7 Fix the compiler errors and race conditions
    // Convert the testerFunction() into a google test
    int val = 0;
    for(int k = 0; k < 1000; k++)
    {
        if((val = testerFunction()) != 5000)
        {
            std::cout << "Error at count = "<<k<<" Money in Wallet = "<<val << std::endl;
            return 1;
        }
    }

    // Question 8
    int n = 1;
    int *p = &n;
    fn(&p);

    // Question 9
    struct person *ptr;
    ptr = (struct person*)malloc(sizeof(struct person));
    ptr->age = 10;
    ptr->weight = 55.5;

    // Question 10 Initialise foo
    Foo foo;

    // Question 11
    char c;
    while(c = getchar() == EOF)
    {
        putchar(c);
    }
    return 0;                         

}

// Do not change anything besides the ptr variable
void function(char ptr)
{
	char *ptr1;
	ptr1 = (ptr += sizeof(int))[-2];
	printf("%s\n", ptr1);
}

void fn(const int** pp)
{
    printf("%p : %p : %d", pp, *pp, **pp);
}

// Fix any compilation error
class Foo {
public:
    Foo(int a, Wallet* b = NULL);
};
