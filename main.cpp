//
//  main.cpp
//  calcalc
//
//  Created by Anton Astakhov on 4/25/16.
//  Copyright © 2016 Anton Astakhov. All rights reserved.
//


#include <iostream>
using namespace std;

double magic_func (string food) {
    double calories = 1; // example
    return calories;
}

int main(int argc, const char * argv[])
{
    string input;
    cin >> input;
    if (input == "/calories")
    {
        cout << "Welcome to calories bot!" << endl;
        cout << "Here you can calculate the calories and compare them to your daily consuption" << endl;
        while (true)
        {
            string food = "";
            float calories = 0;
            int user_choice = 0;
            float height = 0;
            float weight = 0;
            float normal_calories = 0;
            float activity_calories = 0;
            int sex = 0;
            int age = 0;
            int activity = 0;
            double calories_sum = 0;
            while (true)
            {
                cout << "1 - Find out how many calories do you need a day" << endl;
                cout << "2 - Find out how many caloies are there in some food" << endl;
                cin >> user_choice;
                if (user_choice == 1)
                {
                    cout << "Enter your parameters" << endl;
                    while (true)
                    {
                        cout << "Height (cm):" << endl;
                        cin >> height;
                        while (height > 0)
                        {
                            cout << "Weight (kg):" << endl;
                            cin >> weight;
                            while (weight > 0)
                            {
                                cout << "Age:" << endl;
                                cin >> age;
                                while (age > 0)
                                {
                                    cout << "Choose your gender (1 - male, 2 - female):" << endl;
                                    cin >> sex;
                                    while (true) {
                                        if (sex == 1) // men
                                        {
                                            normal_calories = 66.5 + 13.75*weight + 5.003*height - 6.775*age;
                                        }
                                        else if (sex == 2) // women
                                        {
                                            normal_calories = 655.1 + 9.563*weight + 1.85*height - 4.676*age;
                                        }
                                        while (true) {
                                            cout << "Select your amount of daily activity:" << endl;
                                            cin >> activity;
                                            if (activity == 1)
                                            {
                                                activity_calories = normal_calories*1.2;
                                                cout << "Minimal: "<< activity_calories << endl;
                                            }
                                            if (activity == 2)
                                            {
                                                activity_calories = normal_calories*1.375;
                                                cout << "3 times a week: "<< activity_calories << endl;
                                            }
                                            if (activity == 3)
                                            {
                                                activity_calories = normal_calories*1.4625;
                                                cout << "5 times a week: "<< activity_calories << endl;
                                            }
                                            if (activity == 4)
                                            {
                                                activity_calories = normal_calories*1.55;
                                                cout << "Intensive 5 times a week: "<< activity_calories << endl;
                                            }
                                            if (activity == 5)
                                            {
                                                activity_calories = normal_calories*1.6375;
                                                cout << "Every day: "<< activity_calories << endl;
                                            }
                                            if (activity == 6)
                                            {
                                                activity_calories = normal_calories*1.725;
                                                cout << "Intensive daily trainings or two times a day trainings: "<< activity_calories << endl;
                                            }
                                            if (activity == 7)
                                            {
                                                activity_calories = normal_calories*1.9;
                                                cout << "Daily trainings and physical work: "<< activity_calories << endl;
                                            }
                                            int user_choice2 = 0;
                                            cout << "Now you can compare your daily consuption to your necessary norm" << endl;
                                            while (true) {
                                                cout << "1 - enter food manually, 2 - undo, 3 - exit" << endl;
                                                cin >> user_choice2;
                                                if (user_choice2 == 1)
                                                {
                                                    calories_sum = 0;
                                                    cout << "Enter food or type '/done' to finish"<< endl;
                                                    cin >> food;
                                                    while (food != "/done") {
                                                        calories = magic_func(food);
                                                        if (!calories) cout << "Incorrect food!" << endl;
                                                        else {
                                                            calories_sum = calories_sum + calories;
                                                            cout << "There are " << calories << " calories in the " << food << endl;
                                                            cout << "Your current amount of daily calories: " << calories_sum << endl;
                                                        }
                                                        cout << "Enter food or type '/done' to finish"<< endl;
                                                        cin >> food;
                                                    }
                                                    cout << "Your amount of daily calories is " << calories_sum << " calories" << endl;
                                                    if ((calories_sum > activity_calories) && ((calories_sum - activity_calories) > (activity_calories / 10))) {
                                                        cout << "You consumpt too much calories a day!" << endl;
                                                        cout << "To be in a good shape you should reduce your ration!" << endl;
                                                    }
                                                    else if (calories_sum < activity_calories && ((activity_calories - calories_sum) > (activity_calories / 10)) ) {
                                                        cout << "You don't consumpt enough calories a day!" << endl;
                                                        cout << "To be in a good shape you should increase your ration!" << endl;
                                                    }
                                                    else {
                                                        cout << "It seems you are in a good shape and consumpt enough calories a day!";
                                                    }
                                                    continue;
                                                }
                                                else if (user_choice2 == 2)
                                                {
                                                    break;
                                                }
                                                else if (user_choice2 == 3)
                                                {
                                                    goto exit;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (user_choice == 2)
                {
                    while (true) {
                        cout << "Enter food"<< endl;
                        cin >> food;
                        calories = magic_func(food);
                        if (!calories) cout << "Incorrect food!" << endl;
                        else cout << "There are " << calories << " calories in the " << food << endl;
                        int user_choice2 = 0;
                        cout << "1 - enter food, 2 - exit" << endl;
                        cin >> user_choice2;
                        if (user_choice2 == 1) {
                            ;
                        }
                        else if (user_choice2 == 2) {
                            goto exit;
                        }
                    }
                }
            }
        exit:
            cout << "";
        }
    }
    return 0;
}
