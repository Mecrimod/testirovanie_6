#include <iostream>
#include <string>

/*Unit_converter - Конвертер единиц измерения*/

/*Weight units - единицы веса (массы). Режим конвертера (1)*/

/*Length measures - меры длины. Режим конвертера (2)*/

/*Amount of information - Меры количества информации*/

using namespace std;

int main(){
    char mode_selection; // выбор режима конвертера
    
    // Объясняем суть программы, предлагаем выбрать режим
    cout << "Здравствуйте, уважаемый пользователь!\n";
    cout << "Это конвертер величин измерений.\n";
    cout << "Для начала работы, сделайте выбор режима конвертера.\n";
    cout << "Доступны следующие режимы:\n";
    cout << "1) Weight units RU - единицы веса (массы), принятые в России;\n";
    cout << "2) Length measures - меры длины;\n";
    cout << "3) Amount of information - Меры количества информации;\n";
    cout << "---------------------------------------\n";
    cout << "Выберите режим, введя его номер: ";
    cin >> mode_selection;
    
    if(mode_selection == '0'){
        cout << "-----------------------------------\n";
        cout << "Вы не выбрали режим!\n";
        cout << "Программа завершена.\n";
    } else if(mode_selection == '1'){
        char selection_of_the_mass_value; // выбор величины массы
        
        cout << "-----------------------------------\n";
        cout << "Выберите вариант конвертации:\n";
        cout << "1) Тонны в килограммы;\n";
        cout << "2) Килограммы в тонны;\n";
        cout << "3) Центнер в килограммы;\n";
        cout << "4) Килограммы в центнер;\n";
        cout << "5) Килограммы в граммы;\n";
        cout << "6) Граммы в килограммы;\n";
        cout << "7) Граммы в миллиграммы;\n";
        cout << "8) Миллиграммы в граммы;\n";
        cout << "-----------------------------------\n";
        cout << "Введите номер варианта: ";
        cin >> selection_of_the_mass_value;
        
        if(selection_of_the_mass_value == '0'){
            cout << "-------------------------------\n";
            cout << "Вы не выбрали вариант!\n";
            cout << "Программа завершена.\n";
        } else if(selection_of_the_mass_value == '1'){
            int ton = 1000; // Ton - тонна = 1000 килограммов
            double object_mass = 0; // масса объекта в тоннах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "--------------------------------\n";
            cout << "Введите массу вашего объекта в тоннах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << object_mass * ton << " килограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '2'){
            int ton = 1000; // Ton - тонна = 1000 килгограммов
            double object_mass = 0; // масса объекта в килгограммах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "--------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / ton; // записываем результат в тоннах
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " тонн.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '3'){
            int centner = 100; // Centner - центнер = 100 килограммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в центнерах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * centner; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " килгограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }            
        } else if(selection_of_the_mass_value == '4'){
            int centner = 100; // Centner - центнер = 100 килограммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / centner; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " центнеров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '5'){
            int kilogram = 1000; // Kilogram - килограмм = 1000 граммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * kilogram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " граммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '6'){
            int kilogram = 1000; // Kilogram - килограмм = 1000 граммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в граммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / kilogram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " килограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '7'){
            int gram = 1000; // Gram - грамм = 1000 миллиграммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в граммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * gram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " миллиграммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '8'){
            int gram = 1000; // Gram - грамм = 1000 миллиграммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в миллиграммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / gram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " граммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        }
    } else if(mode_selection == '2'){
        string selection_of_the_length_measure; // выбор меры длины
        
        cout << "---------------------------------------\n";
        cout << "Выберите вариант конвертации:\n";
        cout << "1) Километры в метры;\n";
        cout << "2) Метры в километры;\n";
        cout << "3) Метры в дециметры;\n";
        cout << "4) Дециметры в метры;\n";
        cout << "5) Метры в сантиметры;\n";
        cout << "6) Сантиметры в метры;\n";
        cout << "7) Сантиметры в миллиметры;\n";
        cout << "8) Миллиметры в сантиметры;\n";
        cout << "9) Дециметры в сантиметры;\n";
        cout << "10) Сантиметры в дециметры;\n";
        cout << "11) Дециметры в миллиметры;\n";
        cout << "12) Миллиметры в дециметры;\n";
        cout << "13) Миллиметры в микрон;\n";
        cout << "14) Микрон в миллиметры.\n";
        cout << "---------------------------------------\n";
        cout << "Введите номер варианта: ";
        cin >> selection_of_the_length_measure;
        
        if(selection_of_the_length_measure == "0"){
            cout << "-------------------------------\n";
            cout << "Вы не выбрали вариант!\n";
            cout << "Программа завершена.\n";
        } else if(selection_of_the_length_measure == "1"){
            int kilometer = 1000; // Kilometer - километр  = 1000 метров
            double object_length = 0; // длина объекта в километрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в километрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * kilometer; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " метров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "2"){
            int kilometer = 1000; // Kilometer - километр  = 1000 метров
            double object_length = 0; // длина объекта в метрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в метрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / kilometer; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " километров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "3"){
            int meter = 10; // Meter - метр = 10 дециметров
            double object_length = 0; // длина объекта в метрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в метрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * meter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " дециметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "4"){
            int meter = 10; // Meter - метр = 10 дециметров
            double object_length = 0; // длина объекта в дециметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в дециметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / meter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " метров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "5"){
            int meter = 100; // Meter - метр = 100 сантиметров
            double object_length = 0; // длина объекта в метрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в метрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * meter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " сантиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "6"){
            int meter = 100; // Meter - метр = 100 сантиметров
            double object_length = 0; // длина объекта в сантиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в сантиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / meter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " метров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "7"){
            int centimetre = 10; // Centimetre - сантиметр = 10 миллиметров
            double object_length = 0; // длина объекта в сантиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в сантиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * centimetre; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " миллиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "8"){
            int centimetre = 10; // Centimetre - сантиметр = 10 миллиметров
            double object_length = 0; // длина объекта в миллиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в миллиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / centimetre; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " сантиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "9"){
            int decimeter = 10; // Decimeter - дециметр = 10 сантиметров
            double object_length = 0; // длина объекта в дециметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в дециметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * decimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " сантиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "10"){
            int decimeter = 10; // Decimeter - дециметр = 10 сантиметров
            double object_length = 0; // длина объекта в сантиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в сантиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / decimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " дециметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "11"){
            int decimeter = 100; // Decimeter - дециметр = 100 миллиметров
            double object_length = 0; // длина объекта в дециметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в дециметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * decimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " миллиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "12"){
            int decimeter = 100; // Decimeter - дециметр = 100 миллиметров
            double object_length = 0; // длина объекта в миллиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в миллиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / decimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " дециметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "13"){
            int millimeter = 1000; // Millimeter - миллиметр = 1000 миктрон
            double object_length = 0; // длина объекта в миллиметрах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в миллиметрах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length * millimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " микрон.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_length_measure == "14"){
            int millimeter = 1000; // Millimeter - миллиметр = 1000 миктрон
            double object_length = 0; // длина объекта в микронах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по длине объекта
            cout << "--------------------------------\n";
            cout << "Введите длину вашего объекта в микронах: ";
            cin >> object_length;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            double result_length = object_length / millimeter; 
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Длина вашего объекта " << result_length << " миллиметров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        }
    } else if(mode_selection == '3'){
        string selection_of_the_measure_of_information; // выбор меры информации
        
        cout << "---------------------------------------\n";
        cout << "Выберите вариант конвертации:\n";
        cout << "1) Байты в биты;\n";
        cout << "2) Килобайты в байты;\n";
        cout << "3) Мегабайты в килобайты;\n";
        cout << "4) Гигабайты в мегабайты;\n";
        cout << "5) Терабайты в гигабайты;\n";
        cout << "6) Петабайты в терабайты;\n";
        cout << "7) Эксабайты в петабайты;\n";
        cout << "8) Зеттабайты в эксабайты;\n";
        cout << "9) Йоттабайты в зеттабайты.\n";
        cout << "-----------------------------------\n";
        cout << "Введите номер варианта: ";
        cin >> selection_of_the_measure_of_information;
        
        if(selection_of_the_measure_of_information == "0"){
           cout << "-------------------------------\n";
           cout << "Вы не выбрали вариант!\n";
           cout << "Программа завершена.\n";  
        } else if(selection_of_the_measure_of_information == "1"){
            int Bytes = 8; // Bytes - 1 байт = 8 бит
            double object_information = 0; // Вес программы в байтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в байтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Bytes;
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "--------------------------------\n";
                cout << "Вес вашей программы " << result_informaion << " бит.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_measure_of_information == "2"){
            int Kilobytes = 1024; // Kilobytes - 1 Кб (1 Килобайт) = 1024 байт
            double object_information = 0; // Объем памяти в программе пользователя
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в килобайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Kilobytes;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " байт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "3"){
            int Megabytes = 1024; // Megabytes - 1 Мб (1 Мегабайт) = 1024 килобайт
            double object_information = 0; // Вес программы в мегабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в мегабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Megabytes;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " килобайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "4"){
            int Gigabytes = 1024; // Gigabytes - 1 Гб (1 Гигабайт) = 1024 мегабайт
            double object_information = 0; // Вес программы в гигабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в гигабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Gigabytes;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " мегабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "5"){
            int Terabyte = 1024; // Terabyte - 1 Тб (1 Терабайт) = 1024 гигабайт
            double object_information = 0; // Вес программы в терабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в терабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Terabyte;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " гигабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "6"){
            int Petabyte = 1024; // Petabyte - 1 Пб (1 Петабайт) = 1024 терабайт
            double object_information = 0; // Вес программы в петабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в петабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Petabyte;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " терабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "7"){
            int Exabyte = 1024; // Exabyte - 1 Эксабайт = 1024 петабайт
            double object_information = 0; // Вес программы в эксабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в эксабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Exabyte;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " петабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "8"){
            int Zettabyte = 1024; // Zettabyte - 1 Зеттабайт = 1024 эксабайт
            double object_information = 0; // Вес программы в зеттабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в зеттабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Zettabyte;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " петабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        } else if(selection_of_the_measure_of_information == "9"){
            int Yottabyte = 1024; // Yottabyte - 1 Йоттабайт = 1024 зеттабайт
            double object_information = 0; // Вес программы в Йоттабайтах (вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные объекта
            cout << "-----------------------------------\n";
            cout << "Введите вес вашей программы в Йоттабайтах: ";
            cin >> object_information;
            
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Записываем результат
            int result_informaion = object_information * Yottabyte;
            
            if(confirmation_of_input == 'y'){
                 cout << "--------------------------------\n";
                 cout << "Вес вашей программы " << result_informaion << " зеттабайт.\n"; 
            } else if(confirmation_of_input == 'n'){
                 cout << "-----------------------------------\n";
                 cout << "Вы не подтверждили ваши данне!\n";
                 cout << "Программа завершена.\n"; 
            }
        }
    }
    
    return 0;
}
