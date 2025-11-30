#include <iostream>
#include <string>
#include <functional>
#include <map>

using namespace std;

// Базовые функции конвертации
double multiply(double value, double factor) { return value * factor; }
double divide(double value, double factor) { return value / factor; }

// Структура для хранения информации о конвертации
struct Conversion {
    string from_unit;
    string to_unit;
    function<double(double)> converter;
};

class UnitConverter {
private:
    // Константы для конвертации
    static const int TON_KG = 1000;
    static const int CENTNER_KG = 100;
    static const int KG_GRAM = 1000;
    static const int GRAM_MG = 1000;
    
    static const int KM_M = 1000;
    static const int M_DM = 10;
    static const int M_CM = 100;
    static const int CM_MM = 10;
    static const int DM_CM = 10;
    static const int DM_MM = 100;
    static const int MM_MICRON = 1000;
    
    static const int BYTE_BIT = 8;
    static const int KILOBYTE_BYTE = 1024;

    map<string, Conversion, std::less<>> weight_conversions;
    map<string, Conversion, std::less<>> length_conversions;
    map<string, Conversion, std::less<>> info_conversions;

    double const getInput(const string& prompt) {
        double value;
        cout << prompt;
        cin >> value;
        return value;
    }

    bool const confirmInput() {
        char confirmation;
        cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
        cin >> confirmation;
        return confirmation == 'y';
    }

    void performConversion(const string& type, const map<string, Conversion, std::less<>>& conversions) {
        cout << "-----------------------------------\n";
        cout << "Выберите вариант конвертации:\n";
        
        for (const auto& pair : conversions) {
            cout << pair.first << ") " << pair.second.from_unit << " в " << pair.second.to_unit << ";\n";
        }
        
        cout << "-----------------------------------\n";
        cout << "Введите номер варианта: ";
        
        string choice;
        cin >> choice;

        if (choice == "0") {
            cout << "-------------------------------\n";
            cout << "Вы не выбрали вариант!\n";
            cout << "Программа завершена.\n";
            return;
        }

        auto it = conversions.find(choice);
        if (it == conversions.end()) {
            cout << "Неверный выбор!\n";
            return;
        }

        double value = getInput("Введите значение: ");
        
        if (!confirmInput()) {
            cout << "-----------------------------------\n";
            cout << "Вы не подтвердили ваши данные!\n";
            cout << "Программа завершена.\n";
            return;
        }

        double result = it->second.converter(value);
        cout << "Результат: " << result << " " << it->second.to_unit << "\n";
    }

public:
    UnitConverter() {
        // Инициализация конвертеров веса
        weight_conversions = {
            {"1", {"Тонны", "килограммы", [](double v) { return multiply(v, TON_KG); }}},
            {"2", {"Килограммы", "тонны", [](double v) { return divide(v, TON_KG); }}},
            {"3", {"Центнеры", "килограммы", [](double v) { return multiply(v, CENTNER_KG); }}},
            {"4", {"Килограммы", "центнеры", [](double v) { return divide(v, CENTNER_KG); }}},
            {"5", {"Килограммы", "граммы", [](double v) { return multiply(v, KG_GRAM); }}},
            {"6", {"Граммы", "килограммы", [](double v) { return divide(v, KG_GRAM); }}},
            {"7", {"Граммы", "миллиграммы", [](double v) { return multiply(v, GRAM_MG); }}},
            {"8", {"Миллиграммы", "граммы", [](double v) { return divide(v, GRAM_MG); }}}
        };

        // Инициализация конвертеров длины
        length_conversions = {
            {"1", {"Километры", "метры", [](double v) { return multiply(v, KM_M); }}},
            {"2", {"Метры", "километры", [](double v) { return divide(v, KM_M); }}},
            {"3", {"Метры", "дециметры", [](double v) { return multiply(v, M_DM); }}},
            {"4", {"Дециметры", "метры", [](double v) { return divide(v, M_DM); }}},
            {"5", {"Метры", "сантиметры", [](double v) { return multiply(v, M_CM); }}},
            {"6", {"Сантиметры", "метры", [](double v) { return divide(v, M_CM); }}},
            {"7", {"Сантиметры", "миллиметры", [](double v) { return multiply(v, CM_MM); }}},
            {"8", {"Миллиметры", "сантиметры", [](double v) { return divide(v, CM_MM); }}},
            {"9", {"Дециметры", "сантиметры", [](double v) { return multiply(v, DM_CM); }}},
            {"10", {"Сантиметры", "дециметры", [](double v) { return divide(v, DM_CM); }}},
            {"11", {"Дециметры", "миллиметры", [](double v) { return multiply(v, DM_MM); }}},
            {"12", {"Миллиметры", "дециметры", [](double v) { return divide(v, DM_MM); }}},
            {"13", {"Миллиметры", "микроны", [](double v) { return multiply(v, MM_MICRON); }}},
            {"14", {"Микроны", "миллиметры", [](double v) { return divide(v, MM_MICRON); }}}
        };

        // Инициализация конвертеров информации
        info_conversions = {
            {"1", {"Байты", "биты", [](double v) { return multiply(v, BYTE_BIT); }}},
            {"2", {"Килобайты", "байты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"3", {"Мегабайты", "килобайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"4", {"Гигабайты", "мегабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"5", {"Терабайты", "гигабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"6", {"Петабайты", "терабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"7", {"Эксабайты", "петабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"8", {"Зеттабайты", "эксабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}},
            {"9", {"Йоттабайты", "зеттабайты", [](double v) { return multiply(v, KILOBYTE_BYTE); }}}
        };
    }

    void run() {
        cout << "Здравствуйте, уважаемый пользователь!\n";
        cout << "Это конвертер величин измерений.\n";
        cout << "Для начала работы, сделайте выбор режима конвертера.\n";
        cout << "Доступны следующие режимы:\n";
        cout << "1) Weight units RU - единицы веса (массы), принятые в России;\n";
        cout << "2) Length measures - меры длины;\n";
        cout << "3) Amount of information - Меры количества информации;\n";
        cout << "---------------------------------------\n";
        cout << "Выберите режим, введя его номер: ";
        
        char mode_selection;
        cin >> mode_selection;

        switch (mode_selection) {
            case '0':
                cout << "-----------------------------------\n";
                cout << "Вы не выбрали режим!\n";
                cout << "Программа завершена.\n";
                break;
            case '1':
                performConversion("веса", weight_conversions);
                break;
            case '2':
                performConversion("длины", length_conversions);
                break;
            case '3':
                performConversion("информации", info_conversions);
                break;
            default:
                cout << "Неверный выбор режима!\n";
                break;
        }
    }
};

int main() {
    UnitConverter converter;
    converter.run();
    return 0;
}