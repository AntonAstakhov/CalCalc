//
//  main.cpp
//  calcalc
//
//  Created by Anton Astakhov on 4/25/16.
//  Copyright © 2016 Anton Astakhov. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string input;
    string food;
    float calories;
    int user_choice;
    float height;
    float weight;
    float user_calories;
    float normal_calories;
    int sex;
    int age;
    int activity;
    
    cin >> input;
    if (input == "/calories")
    {
        cout << "Welcome to calories bot!" << endl;
        cout << "Here you can calculate the calories and compare to your daily consuption" << endl;
    start:
        while (true)
        {
            cout << "Press 1 to find out how many calories do you need per one day" << endl;
            cout << "Press 2 to find out how many caloies are there in some food" << endl;
            cin >> user_choice;
            
            if (user_choice == 1)
            {
                cout << "Enter your height: (см)" << endl;
                cin >> height;
                if (height > 0)
                {
                    cout << "Enter your weight: (кг)" << endl;
                    cin >> weight;
                    if (weight > 0)
                    {
                        cout << "Enter your age:" << endl;
                        cin >> age;
                        if (age > 0)
                        {
                            cout << "Choose your gender: (1 - man, 2 - woman)" << endl;
                            cin >> sex;
                            if (sex == 1) // men
                            {
                                normal_calories = 66.5 + 13.75*weight + 5.003*height - 6.775*age;
                            again_activity:
                                cout << "Выберите кол-во физ активности" << endl;
                                cin >> activity;
                                if (activity == 1)
                                {
                                    cout << "Минимум или отсутствие: "<< normal_calories*1.2 << endl;
                                }
                                if (activity == 2)
                                {
                                    cout << "3 раза в неделю: "<< normal_calories*1.375 << endl;
                                }
                                if (activity == 3)
                                {
                                    cout << "5 раз в неделю: "<< normal_calories*1.4625 << endl;
                                }
                                if (activity == 4)
                                {
                                    cout << "Интенсивно 5 раз в неделю: "<< normal_calories*1.55 << endl;
                                }
                                if (activity == 5)
                                {
                                    cout << "Каждый день: "<< normal_calories*1.6375 << endl;
                                }
                                if (activity == 6)
                                {
                                    cout << "Каждый день интенсивно или 2 раза в день: "<< normal_calories*1.725 << endl;
                                }
                                if (activity == 7)
                                {
                                    cout << "Ежедневно + физическая работа: "<< normal_calories*1.9 << endl;
                                }
                            }
                            else if (sex == 2) // women
                            {
                                normal_calories = 655.1 + 9.563*weight + 1.85*height - 4.676*age;
                                cout << "Норма потребления калорий зависит от кол-ва физ активности" << endl;
                                cout << "Минимум или отсутствие: "<< normal_calories*1.2 << endl;
                                cout << "3 раза в неделю: "<< normal_calories*1.375 << endl;
                                cout << "5 раз в неделю: "<< normal_calories*1.4625 << endl;
                                cout << "Интенсивно 5 раз в неделю: "<< normal_calories*1.55 << endl;
                                cout << "Каждый день: "<< normal_calories*1.6375 << endl;
                                cout << "Каждый день интенсивно или 2 раза в день: "<< normal_calories*1.725 << endl;
                                cout << "Ежедневно + физическая работа: "<< normal_calories*1.9 << endl;
                            }
                            cout << "Теперь вы можете сравнить Выше потребление калорий с необходимой нормой" << endl;
                            cout << "Выберите 1 для ввода продуктов вручную, или выберите 2, чтобы посмотреть таблицу калорийности продуктов" << endl;
                            cin >> user_choice;
                            if (user_choice == 1)
                            {
                                ;
                            }
                            else if (user_choice == 2)
                            {
                                /* another magic */ ;
                            }
                            else if (user_choice == 3) // cнова выбрать кол-во активности
                            {
                                goto again_activity;
                            }
                            else if (user_choice == 4) // вернуться к началу
                            {
                                goto start;
                            }
                        }
                    }
                }
            }
            else if (user_choice == 2)
            {
                cout << "Enter food!"<< endl;
                cin >> food;
                
                /* some magic */
            
                cout << "There are " << calories << " calories in " << food << endl;
            }
            
            /* обнулить все переменные */
            
        }
    }
    return 0;
}
