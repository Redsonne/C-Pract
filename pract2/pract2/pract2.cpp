//Задача 7: Есть текстовый файл.Размер его такой, что он весь может быть размещен в оперативной памяти.
//В этом тексте присутствуют целые числа(в любом из допустимых форматов языка С++), 
//действительные числа(тоже в любом из допустимых форматов), строки(последовотельность любых символов, заключенная в “) 
//Из этого файла извлечь целые числа и вычислить их сумму, действительные числа(также вычислить их сумму), все строки.
#include <iostream>
#include <regex>
#include <iterator>
#include <fstream>
#include <string>
using namespace std;


int main()
{


    regex reg("[+-]?(\\d+(\\.\\d+)?)|\"([^\"]+?)\"");
    string filename = "txt.txt";
    ifstream file(filename);
    int sum = 0;
    double sum1 = 0.0;
    string str;
    string data;


    if (file.is_open()) {


        while (getline(file, data)) {


            auto pos = data.cbegin();
            auto end = data.cend();
            smatch m;

            regex_search(pos, end, m, reg);
            
            for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
            {

                for (int i = 0; i < m.size(); ++i)
                {
                    cout << "m[" << i << "].str():       " << m[i].str() << endl;
                    cout << "m.str(" << i << "):         " << m.str(i) << endl;

                }

                if ((m.str(2) != "")) {

                    sum1 += stod(m.str());
                }
                else if ((m.str(3) != "")) {

                    str += m.str(3);
                }
                else {
                    sum += stoi(m.str());
                }
            }
            
            cout << endl;

            file.close();
        }
        sum1 += sum;
    }
    else{
        cerr << "Не удалось открыть файл: " << filename << endl;

        return 1;
    }

    std::cout << "--------------" << endl;
    std::cout << sum << endl;
    std::cout << (double)sum1 << endl;
    std::cout << str << endl;





    }

