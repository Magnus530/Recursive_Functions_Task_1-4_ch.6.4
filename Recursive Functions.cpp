#include <string>
#include <iostream>
#include <algorithm>

class TaskOne
{
public:
    static constexpr int list = 6;
    int numbers[list]{30, 60, 20, 50, 40, 10};
    // int n = sizeof(numbers) / sizeof(numbers[0]);
   
public:
    void task1()
    {
        std::cout << "Task 1\n";

        print();
        selectionSort();
        printSort();
    }

    void print()
    {
        std::cout << "Default: ";
        for (int i = 0; i < list; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }

    void printSort()
    {
        std::cout << "Sorted: ";
        for (int number{ 0 }; number < list; number++)
        {
            std::cout << numbers[number] << " ";
        }
        std::cout << "\n";
    }

    /**/
    void selectionSort()
    {
        for (int startNumber{ 0 }; startNumber < list - 1; startNumber++)
        {
            int smallNumber{ startNumber };

            for(int currentNumber{startNumber + 1}; currentNumber < list; currentNumber++)
            {
                if (numbers[currentNumber] < numbers[smallNumber])
                {
                    smallNumber = currentNumber;
                }
            }
            std::swap(numbers[startNumber], numbers[smallNumber]);
        }
    }
};

class TaskTwo
{
public:
    static constexpr int list = 6;
    int numbers[list]{ 30, 60, 20, 50, 40, 10 };
    // int n = sizeof(numbers) / sizeof(numbers[0]);

public:
    void task2()
    {

        print();
        selectionSort();
        printSort();
    }

    void print()
    {
        std::cout << "\n" << "Task 2\n";
        std::cout << "Default: ";
        for (int i = 0; i < list; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }

    void printSort()
    {
        std::cout << "Sorted: ";
        for (int number{ 0 }; number < list; number++)
        {
            std::cout << numbers[number] << " ";
        }
        std::cout << "\n";
    }

    void selectionSort()
    {
        for (int startNumber{ 0 }; startNumber < list - 1; startNumber++)
        {
            int bigNumber{ startNumber };

            for (int currentNumber{ startNumber + 1 }; currentNumber < list; currentNumber++)
            {
                if (numbers[currentNumber] > numbers[bigNumber])
                {
                    bigNumber = currentNumber;
                }
            }
            std::swap(numbers[startNumber], numbers[bigNumber]);
        }
    }
};

class TaskThree
{
public:
    static constexpr int list = 9;
    int numbers[list]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    // int n = sizeof(numbers) / sizeof(numbers[0]);

public:
    void task3()
    {

        print();
        selectionSort();
        printSort();
    }

    void print()
    {
        std::cout << "\n" << "Task 3\n";
        std::cout << "Default: ";
        for (int i = 0; i < list; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }

    void printSort()
    {
        std::cout << "Sorted: ";
        for (int number{ 0 }; number < list; number++)
        {
            std::cout << numbers[number] << " ";
        }
        std::cout << "\n";
    }

    void selectionSort()
    {
        int i = 0;

        while (i < list)
        {
            for (int i = 0; i < list - 1; i++)
            {
                if (numbers[i] > numbers[i + 1])
                {
                    std::swap(numbers[i], numbers[i + 1]);
                }
            }

            i++;
            
        }
    }
};

class TaskFour
{
public:
    static constexpr int list = 9;
    int numbers[list]{ 6, 3, 2, 9, 7, 1, 5, 4, 8};
    // int n = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0;
public:
    void task4()
    {

        print();
        selectionSort();
        printSort();
    }

    void print()
    {
        std::cout << "\n" << "Task 4\n";
        std::cout << "Default: ";
        for (int i = 0; i < list; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }

    void printSort()
    {
        std::cout << "Sorted: ";
        for (int number{ 0 }; number < list; number++)
        {
            std::cout << numbers[number] << " ";
        }
        std::cout << "\n";
        std::cout << "Early termination on iteration: " << i << "\n";

    }

    void selectionSort()
    {

        bool swapCheck = false;

        while (i < list)
        {
            swapCheck = false;

            for (int i = 0; i < list-1; i++)
            {
                if (numbers[i] > numbers[i + 1])
                {
                    std::swap(numbers[i], numbers[i + 1]);
                    swapCheck = true;
                }
            }

            i++;

            if(swapCheck == false)
            {
                break;
            }
        }
    }
};


int main()
{
    TaskOne t1;
    TaskTwo t2;
    TaskThree t3;
    TaskFour t4;

    t1.task1();
    t2.task2();
    t3.task3();
    t4.task4();
}

