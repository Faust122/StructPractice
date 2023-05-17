#include <iostream>
#include <string>
using namespace std;

struct Films
{
    string NameFilms;
    string director;
    string genre;
    float rating;
    float cost;
};
int FindByName(Films& obj,string value,int size)
{
    for (int i = 0; i < size; i++)
    {
        if ( obj.NameFilms == value)
        {
            return i;
        }
    }
    return -1;
}

int FindByDirector(Films& obj, string value, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (obj.director == value)
        {
            return i;
        }
    }
    return -1;
}

int FindByGenre(Films& obj, string value, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (obj.genre == value)
        {
            return i;
        }
    }
    return -1;
}
int FindByRatingInGenre(Films&* arr,Films& obj,string value, int size, int rating)
{
    int tmp;
    tmp = arr[size];
    for (size_t i = 0; i < size; i++)
    {
        if (obj.genre == value )
        {
            for (size_t j = 0; j < size; i++)
            {
                if (tmp<arr[j])
                {
                    tmp = arr[j];
                }
            }
        }
    }
         return tmp;
}
int main()
{
    int size = 20;
    Films* library = new Films[size];
}

