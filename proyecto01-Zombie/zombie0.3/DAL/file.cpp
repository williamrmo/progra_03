#include "file.hpp"

void write_file(string name, string level, int points)
{
    ofstream MyFile("./Game_Data.txt", ios::app);

    if (MyFile.is_open())
    {
        MyFile << " - username: " << name << ", level: " << level << ", points: " << points << endl;
    }
    
    MyFile.close();
}

void read_file()
{
    ifstream MyFile("./Game_Data.txt");
    string line;

    if(MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
        
    }
    else
    {
        cout << "Error: No se puedde leer." << endl;
    }
    
    this_thread::sleep_for (std::chrono::seconds(5));
}

string read_line()
{
    ifstream MyFile(".Game_Data.txt");
    string line;
    string all_lines;

    if(MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            all_lines = all_lines +line;
        }
        
    }
    
    return all_lines;
    
}