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

int SortByRatingPopularity(Films* arr, const int& size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size - 1; j++) {
            if (arr[j].rating > arr[j + 1].rating)
            {
                Films tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

int FindByRatingInGenre(Films * arr, string value, const int& size, int rating)
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
    library[0] = { "Star Wars: Episode V - The Empire Strikes Back", "Irvin Kershner", "Science Fiction, Adventure","8.7","20.4"};
    library[1] = { "The Truman Show", "Peter Weir", "Drama, Comedy, Science Fiction","9.1","24.3"};
    library[2] = { "The Talented Mr. Ripley", "Anthony Minghella", "Drama, Thriller, Crime","8.9","21.5"};
    library[3] = { "Leon: The Professional", "Luc Besson", "Action, Drama, Crime","10","30"};
    library[4] = { "The Green Mile", "Frank Darabont", "Drama, Crime, Fantasy","7.8","18.5"};
    library[5] = { "Interstellar", "Christopher Nolan", "Science Fiction, Adventure, Drama","9.3","28"};
    library[6] = { "Fight Club", "David Fincher", "Drama, Action","6.2","14.5"};
    library[7] = { "Guardians of the Galaxy", "James Gunn", "Science Fiction, Adventure, Action","9.5","26"};
    library[8] = { "Goodfellas", "Martin Scorsese", "Crime, Drama","4.8","12"};
    library[9] = { "The Matrix", "Lana Wachowski, Lilly Wachowski", "Science Fiction, Action","9.8","28"};
    library[10] = { "Hachi: A Dog's Tale", "Lasse Hallstrom", "Drama, Family, Biography","8.9","35"};
    library[11] = { "Harry Potter and the Philosopher's Stone", "Chris Columbus", "Fantasy, Adventure","1.9","5.1"};
    library[12] = { "Lost in Translation", "Sofia Coppola", "Drama, Comedy","6.9","27"};
    library[13] = { "The Godfather", "Francis Ford Coppola", "Drama, Crime","4.7","90"};
    library[14] = { "Titanic", "James Cameron", "Drama, Romance","9","45"};
    library[15] = { "Spider-Man: Homecoming", "Jon Watts", "Science Fiction, Action, Adventure","7.9","63"};
    library[16] = { "Doctor Strange", "Scott Derrickson", "Fantasy, Action, Adventure","4.5","34"};
    library[17] = { "Inception", "Christopher Nolan", "Science Fiction, Action, Thriller","8.3","67"};
    library[18] = { "Jurassic Park", "Steven Spielberg", "Science Fiction, Adventure, Thriller","7.7","56"};
    library[19] = { "Indiana Jones and the Last Crusade", "Steven Spielberg", "Adventure, Action, Fantasy","4.9","23"};


}
