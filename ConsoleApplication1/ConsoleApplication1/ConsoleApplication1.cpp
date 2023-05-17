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
int FindByName(Films* arr,string value,const int& size)
{
    for (int i = 0; i < size; i++)
    {
        if ( arr[i].NameFilms == value)
        {
            return i;
        }
    }
    return -1;
}

int FindByDirector(Films* arr, string value, const int& size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].director == value)
        {
            return i;
        }
    }
    return -1;
}

int FindByGenre(Films* arr, string value, const int& size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].genre == value)
        {
            return i;
        }
    }
    return -1;
}
int FindByRatingInGenre(Films* arr,string value, const int& size, int rating)
{
    int tmp;
    tmp = arr[size].rating;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i].genre == value)
        {
            for (size_t j = 0; j < size; i++)
            {
                if (tmp<arr[j].rating)
                {
                    tmp = arr[j].rating;
                }
            }
        }
    }
         return tmp;
}

int SortByRatingPopularity(Films* arr,const int& size)
{
    for (size_t i = 0; i < size-1; i++)
    {
        for (size_t j = 0; j < size-1; j++) {
            if (arr[j].rating>arr[j+1].rating)
            {
                Films tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    int size = 20;
    Films* library = new Films[size];
}

