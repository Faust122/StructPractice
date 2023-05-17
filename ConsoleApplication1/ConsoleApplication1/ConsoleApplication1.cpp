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
    library[0] = { "Star Wars: Episode V - The Empire Strikes Back", "Irvin Kershner", "Science Fiction, Adventure" };
    library[1] = { "The Truman Show", "Peter Weir", "Drama, Comedy, Science Fiction" };
    library[2] = { "The Talented Mr. Ripley", "Anthony Minghella", "Drama, Thriller, Crime" };
    library[3] = { "Leon: The Professional", "Luc Besson", "Action, Drama, Crime" };
    library[4] = { "The Green Mile", "Frank Darabont", "Drama, Crime, Fantasy" };
    library[5] = { "Interstellar", "Christopher Nolan", "Science Fiction, Adventure, Drama" };
    library[6] = { "Fight Club", "David Fincher", "Drama, Action" };
    library[7] = { "Guardians of the Galaxy", "James Gunn", "Science Fiction, Adventure, Action" };
    library[8] = { "Goodfellas", "Martin Scorsese", "Crime, Drama" };
    library[9] = { "The Matrix", "Lana Wachowski, Lilly Wachowski", "Science Fiction, Action" };
    library[10] = { "Hachi: A Dog's Tale", "Lasse Hallström", "Drama, Family, Biography" };
    library[11] = { "Harry Potter and the Philosopher's Stone", "Chris Columbus", "Fantasy, Adventure" };
    library[12] = { "Lost in Translation", "Sofia Coppola", "Drama, Comedy" };
    library[13] = { "The Godfather", "Francis Ford Coppola", "Drama, Crime" };
    library[14] = { "Titanic", "James Cameron", "Drama, Romance" };
    library[15] = { "Spider-Man: Homecoming", "Jon Watts", "Science Fiction, Action, Adventure" };
    library[16] = { "Doctor Strange", "Scott Derrickson", "Fantasy, Action, Adventure" };
    library[17] = { "Inception", "Christopher Nolan", "Science Fiction, Action, Thriller" };
    library[18] = { "Jurassic Park", "Steven Spielberg", "Science Fiction, Adventure, Thriller" };
    library[19] = { "Indiana Jones and the Last Crusade", "Steven Spielberg", "Adventure, Action, Fantasy" };
}
