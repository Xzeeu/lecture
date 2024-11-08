#include <iostream>
#include <Windows.h>
#include "Name.h"
#include <vector>
#include <forward_list>
#include <list>
#include <sstream>
#include <string>
#include <fstream>


using namespace std;

int  sum_v(int v1, int v2) //создаётся копия переменных, занимает память
{
    v1 = 3; v2 = 7;
    return v1 + v2;
}

//для экономии памяти используем указатели и ссылки

int sum_p(const int *pv1, const int *pv2)
{
    //*pv1 = 1; *pv2 = 7; //ошибка
    return *pv1 + *pv2; //правильно
}

using namespace std;

int sum_r(const int &rv1, const int &rv2)
{
    //rv1 = 10; rv2 = 30;
    int v1 = rv1; int v2 = rv2; 
    v1 = 10; v2 = 30;
    return rv1 + rv2;
}


int sum_a(const unsigned char *a, const int arraySize)
{
    int res = 0;
    for (int i = 0; i < arraySize; i++)
    {
        res += a[i];
    }
    return res;
}

//typydef unsigned char byte8;

typedef struct
{
    double r; double im;
} complex_num2;

int main()
{

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    /*

    //wstring a;
    //wcin >> a;
    wcout << L"Привет "  << endl;
    cout << "Hello, world" << endl;
    /*
    буквы латинские
    цифры
    знаки препинания
    идентификаторы: буквы, цифры, _
    */

    /*
    int i; //
    int k = 0; // инициализируем в момент объявления
    unsigned int myUnsignedInteger = 5; //чило без  знака
    string fileName;

    //

    short int x;
    short y;

    unsigned short z; //число без знака 2 байта

    uint64_t m; // безнаковое 8ми байтовое чило

    __int64 zz;


    char c = 250; // -128...127
    char c2 = 's'; // объявляем один символ


    //wchar_t c3 = L"Ш";

    float f1; // 4 байта
    double f2; // 8 байт

    f1 = 1.345678;

    f2 = 2.1e48;

    string s = "my string";
    wstring s2 = L"нкеке";

    wcout << s2 << endl;



    cout << f2 << endl;
    cout << myUnsignedInteger << endl;
*/

    wcout << L"-----------------------------------------------------ЛЕКЦИЯ2----------------------------------------------------" << endl;

    /*
        int a = 9;
        double b = 9;
        cout << a/4.0 << endl;
        cout << b/4 << endl;
        cout << a%4 << endl;

        int aa = 1;
        int bb = 2;

        cout << !(aa == bb) << endl;

        int a = 1;
        int b = a << 2;

        cout << (true && false) << endl;
        cout << (true || false) << endl;

        cout << "Hello" << endl;

    */

    /*
        cout << (1 << 2);

        int x = 8;
        cout << (x >> 2) << endl;

        int flag = 6;

        cout << ((flag & 0x0004) > 0) ; // системный файл


    */

    /*

        int a = 15;

        if (a < 10)

        {

            wcout << L"Меньше 10" << endl;
        }

        if (a < 10)
        {
            wcout << L"Меньше 10" << endl;
        }
        else
        {
            wcout << L"Больше или  равно 10" << endl;
        }


        wstring s = L"восемь";
        int out = 0;

        if (s == L"один")
        {
            out = 1;
        }
        else if (s == L"два")
        {
            out = 2;
        }
        else if (s == L"восемь")
        {
            out = 8;
        }

        else
        {
            out = -1;
        }

        wcout << out;
    */

    /*

        int x = 5;
        wstring str;

        switch(x)
        {
            case 0: str = L"ноль"; break;
            case 1: str = L"один"; break;
            // ...
            case 5:
                {
                    str = L"пять";
                    break;
                }

            default: str = L"неизвестное число"; break;


        }
        //wcout << str;

        */

        /*

            for(int i = 1; i <= 10; i++)
            {
                cout << i << endl;
            }

            int n = 1;

            while(n <= 10)
            {
                cout << n << endl;
                n++;
            }

            int k = 1;

            do
            {
                cout << k << endl;
                k++;

            } while (k <= 10);

            int  ii = 0;


            while (true)
            {
                cout << ii << endl;
                ii++;

                if(ii > 1000)
                {
                    break;
                }
            }

            int  i = 0;


        */

        /*
            int  i = 0;

            while (true)
                {
                    cout << i << endl;
                    i++;

                    if(i < 900)
                    {
                        continue;
                    }
                    cout << "AD" <<endl;

                    if (i >1000)
                    {
                        break;
                    }
                }

        */

    /*
    * cout << Sum(1, 9000) << endl;
    int x = Sum(2, 5);

    NameYourself();
    */

    
    /*

        int ages[90];

        for(int i=0; i<90; i++)
        {
            ages[i] = 0;
            cout << ages[i] << endl;
        }


        wstring str_array[5];
        str_array[0] = L"авпа";
        wcout << str_array[0] << endl;

        char str[4] = "abc";
        char str2[] = "abc";

        cout << str << endl;

        for (int i = 0; i<4; i++)
        {
            cout << int(str[i]) << endl;
        }

        string str3;
        wstring str4;

        wchar_t str5[] = L"abc";
    */

    wcout << L"-----------------------------------------------------ЛЕКЦИЯ3----------------------------------------------------" << endl;

    /*
    int a = 12345;
    int64_t b = 123456789000000LL;

    int* ptr_a = &a;
    int64_t* ptr_b;

    ptr_b = &b;

    cout << uint64_t(ptr_a) << endl;
    cout << uint64_t(ptr_b) << endl;

    cout << *ptr_b << endl;

    // Указатели и массивы

    int array_of_ints[20];
    cout << sizeof(array_of_ints) << endl;;
    cout <<  uint64_t(&array_of_ints[1]) << endl;
    cout << uint64_t(&array_of_ints[0]) << endl;
    cout << uint64_t(array_of_ints) << endl;
    */

    /*
    unsigned char a[24];

    int* ptr_ammo = reinterpret_cast<int*>(&a[4]);

    *ptr_ammo = 10000000;

    const int x = 5;

    const int *ptr_x = &x;
    int* non_const_itn_ptr = const_cast<int*>(ptr_x);

    *non_const_itn_ptr = 5;
    * */



    /*
    int array_size;

    cin >> array_size;

    int* ptr_array = new int[array_size];

    for (int i = 0; i<array_size; i++)
    {
        ptr_array[i] = i;
        cout << ptr_array[i] << endl;
    }

    delete[] ptr_array;
    */

    /*

    int64_t* a = new int64_t;
    *a = 123456788900000000;
    cout << *a;
    
    delete a;

    */

    /*

    int a = 10;


    int& myVar = a;

    cout << myVar << endl;
    */


    /*
   
    int a = 2;
    int b = 3;

     cout << sum_v(a, b) << endl;
    cout << a << ' ' << b << endl;
    cout << sum_p(&a, &b) << endl;
    cout << a << ' ' << b << endl;
    cout << sum_r(a, b) << endl;
    cout << a << ' ' << b << endl;

    unsigned char byte_array[100];

    for (int i = 0; i < 100; i++)
    {
        byte_array[i] = i;
    }

    cout << sum_a(byte_array, 100) << endl;

    


    struct complex_num
    {
        double r; double im;

    };


    complex_num xx = { 0.5673, 0.38273 };

    cout << xx.r << '+' << xx.im << endl;




    complex_num2 myNum;
    complex_num2 myNum2 = {0.0, 0.0};

    cout << myNum2.r << " + i" << myNum2.im << endl;

    // с использованием указателем

    complex_num2* p_myNum2 = &myNum2;

    cout << p_myNum2->r << " + i" << p_myNum2->im << endl;

    */


wcout << L"-----------------------------------------------------ЛЕКЦИЯ4----------------------------------------------------" << endl;

/*

    //динамическое обьъявление памяти, массив
    int* myArray = new int[10];

    delete[] myArray;

    const char* str1 = "my string"; // константные строки
    const char str2[] = "my string";
    const char str3[40] = "my string"; // с макс длиной 40

    char str4[80];
    char str5[256] = ""; // пустая строка с резервом 256 символов

    wchar_t str6[256] = L""; // строка двухбайтовых символов

    // Альтернативы классическим массивам

    //ВЕКТОР #include <vector> - контейнерный шаблонный класс
    
    vector<int> myArray1; //объявили пустой динамический массив на базе вектора
    vector<int> myArray2(10); // длиной 10 чисел содержание неизвестно
    vector<int> myArray3(10, 0); // длиной 10 нулей


    //СПИСОК

    list<int> myList1; // элементы списка в памяти могут лежать не подряд, но связаны друг с другом, двунаправленный
    forward_list<int> myList2; //односвязный

    struct teapot
    {
        char Manual[2000];

    };

    vector<teapot> myTeapots(100);

    //Резервирование памяти

    vector<int> myArray4;
    myArray4.reserve(1000); //зарезервировали память

    //Изменение размера

    myArray3.resize(20, 0);

    //cout << myArray3[16];


    //ДОСТУП К ЭЛЕМЕНТАМ

    cout << myArray3[2] << endl;


    //Как узнать размер массива

    size_t arraySize = myArray3.size();

    cout << arraySize << endl;


    for (size_t i = 0; i < arraySize; i++)
    {
        myArray3[i] = i;
        cout << myArray3[i] << endl;
    }

    for (size_t i = 0 ; i < 10; i++)
    {
        myArray3.push_back(i * 10);
        cout << myArray3[i + 20] << endl;

    }

    cout << "total size " << myArray3.size() << endl;


    // функция push_back это самый быстрый способ добавления элемента на базе вектора

    // Самостоятельно изучить: insert, erase

    // Итератор - это паттерн проектирования, позволяющий реализовать последовательный обход элементов контейнера без раскрытия его внутреннего устройства

    //Разные варианты записи:

    cout << "_______________________________ " << endl;

    for (vector<int> ::iterator it = myArray3.begin(); it != myArray3.end(); it++)
    {
        int x = *it; // получили доступ к текущему элементу иттератора
        cout << x << endl;
    }

    for (auto it = myArray3.begin(); it != myArray3.end(); it++)
    {
        int x = *it; // получили доступ к текущему элементу иттератора
        cout << x << endl;
    }

    cout << "_______________________________ " << endl;


    for (auto x : myArray3)
    {
        cout << x << endl;
    }

    // c сипользование константной ссылки

    cout << "_______________________________2 " << endl;



    for (const auto& x : myArray3)
    {
        cout << x << endl;
    }

    */


/*
* */
    //АЛЬТЕРНАТИВЫ СТРОКАМ В СТИЛЕ С

    //string, wstring
/*
    string str1; // пустая строка

    string str2("Hello!");



    // Конкатенация

    str1.append(str2);

    //Получение адреса первого элемента

    const char* p_str1 = str1.c_str();


    cout << p_str1 << endl;

    cout << str1 << endl;

    //"Широкие" строки
    wstring str3;
    */

    


    //ПОТОКОВЫЙ ВЫВОД В СТРОКИ   <sstream>

/*

    stringstream out1;

    out1 << "My stringstreame" << endl;
    out1 << "Integer: " << 10 << endl;


    string str4 = out1.str();

    cout << str4 << endl;

    wstringstream out2;
    out2 << L"Привет" << endl;

    wcout << out2.str(); */

    



    // РАБОТА С ФАЙЛАМИ <fstreame>



    ifstream in; // поток чтения
    ofstream out; 

    //открытие файла

    in.open("text.txt");
    //in.open("D:\\development\\c++\\lecture\\text.txt");

        if (in.is_open())
        {
            //файл открылся
            /*
            cout << "open OK" << endl;
            string str1;

            in >> str1;
            cout << str1 << endl;

            in >> str1;
            cout << str1 << endl; */
            

            char str2[100];
            in.getline(str2, sizeof(str2), ' '); // sizeof(str2) = 100

            cout << str2 << endl;

            /*
            //чтение по одному символу до конца файла
            while (!in.eof())
            {
                char c;
                in.get(c); //чтение символа

                cout.put(c); //запись символа

            } */
                

        }


        cout << endl;


        wifstream in2(L"text2.txt");

        if (in2.is_open())
        {
            int intArray[100];
            size_t arraySize = 0;


            while (!in2.eof())
            {
                in2 >> intArray[arraySize]; arraySize++;

            }

            for (size_t i = 0; i < arraySize; i++)
            {
                cout << intArray[i] << endl;

            }

            //in2 >> intArray[0] >> intArray[1];
        }

        /*
        //Вывод в файл

        out.open(L"текст.txt");

        if (out.is_open())
        {
            out << "Текстовая информация" << endl;
            out << "Вторая строка" << endl;

        }

        //ВВОД-ВЫВОД ДВОИЧНЫХ ДАННЫХ

        

        ifstream in_binary1("gg.jpg", ios::binary); //  ..., флаг режима вывода ios ::  app - если нужно дополнять файл ofstream


            if (in_binary1.is_open())
            {
                //определение размера файла
                in_binary1.seekg(0, ios_base::end); //перешли к концу файла
                size_t fileSize = in_binary1.tellg();
                cout << "file size: " << fileSize << endl;

                //выделить память
                vector<char> filedata(fileSize);

                // Перейти к началу файла

                in_binary1.seekg(0, ios_base::beg);

                //считать данные

                in_binary1.read(filedata.data(), 10);

                for (auto c : filedata)
                {
                    cout.put(c);
                }

                ofstream out_binary("out.jpg", ios :: binary);
                out_binary.write(filedata.data(), fileSize);

            } */


        int* myArray = new int[100]; //динамическое выделение памяти для массива

        //int* myArray;
        myArray = new int[100];

        int* myArray2 = nullptr; //новые компиляторы
        int* myArray3 = NULL; //Работает всегда

        int a = myArray[0];; //первый элемент массива
        int b = myArray[99];; //последний элемент массива


        cout << myArray2[0] << endl;



        delete[] myArray; 








   


    cin.get(); //ждём нажатия, не закрывать консоль
    return 0;
}
