#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

// Node structure for a linked list (playlist)
struct SongNode {
    string songName;
    SongNode* next;
    SongNode* prev;

    SongNode(string name) : songName(name), next(nullptr), prev(nullptr) {}
};

// Linked List class to manage the playlist
class Playlist {
private:
    SongNode* head;
    SongNode* tail;
    SongNode* currentSong;

public:
    Playlist() : head(nullptr), tail(nullptr), currentSong(nullptr) {}

    // Add song to the end of the playlist
    void addSong(const string& songName) {
        SongNode* newSong = new SongNode(songName);
        if (!head) {
            head = newSong;
            tail = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }
        cout << "Added song: " << songName << endl;
    }

    // Remove song from playlist
    void removeSong(const string& songName) {
        SongNode* current = head;
        while (current) {
            if (current->songName == songName) {
                if (current == head) {
                    head = current->next;
                    if (head) head->prev = nullptr;
                } else if (current == tail) {
                    tail = current->prev;
                    if (tail) tail->next = nullptr;
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                cout << "Song '" << songName << "' removed from the playlist.\n";
                return;
            }
            current = current->next;
        }
        cout << "Song '" << songName << "' not found in the playlist.\n";
    }

    // Display the playlist
    void displayPlaylist() const {
        SongNode* current = head;
        if (!current) {
            cout << "Playlist is empty.\n";
            return;
        }

        cout << "Current Playlist:\n";
        while (current) {
            cout << current->songName << "\n";
            current = current->next;
        }
    }

    // Play the next song
    string playNext() {
        if (currentSong && currentSong->next) {
            currentSong = currentSong->next;
            return currentSong->songName;
        } else if (currentSong == nullptr && head) {
            currentSong = head;
            return currentSong->songName;
        } else {
            return "No more songs to play.";
        }
    }

    // Play the previous song
    string playPrevious() {
        if (currentSong && currentSong->prev) {
            currentSong = currentSong->prev;
            return currentSong->songName;
        } else {
            return "No previous song to play.";
        }
    }

    // Shuffle and play a random song
    string shufflePlay() {
        vector<string> songList;
        SongNode* current = head;

        while (current) {
            songList.push_back(current->songName);
            current = current->next;
        }

        if (songList.empty()) return "No songs to shuffle.";

        int randomIndex = rand() % songList.size();
        return songList[randomIndex];
    }

    // Save playlist to file
    void savePlaylistToFile(const string& filename) const {
        ofstream file(filename);
        if (!file) {
            cerr << "Could not open file for saving.\n";
            return;
        }

        SongNode* current = head;
        while (current) {
            file << current->songName << "\n";
            current = current->next;
        }

        cout << "Playlist saved to " << filename << endl;
    }

    // Load playlist from file
    void loadPlaylistFromFile(const string& filename) {
        ifstream file(filename);
        if (!file) {
            cerr << "Could not open file for loading.\n";
            return;
        }

        string songName;
        while (getline(file, songName)) {
            addSong(songName);
        }

        cout << "Playlist loaded from " << filename << endl;
    }
};

// Hash table for song lookup (Artist information for real song names)
unordered_map<string, string> songLibrary = {
    {"Bohemian Rhapsody", "Queen"},
    {"Stairway to Heaven", "Led Zeppelin"},
    {"Hotel California", "Eagles"},
    {"Imagine", "John Lennon"},
    {"Billie Jean", "Michael Jackson"}
};

// Recently played songs using a circular array
class RecentlyPlayed {
private:
    string recentSongs[5];
    int currentIndex;

public:
    RecentlyPlayed() : currentIndex(0) {}

    // Add song to recently played
    void addRecentSong(const string& songName) {
        recentSongs[currentIndex] = songName;
        currentIndex = (currentIndex + 1) % 5;  // Circular array
    }

    // Display recently played songs
    void displayRecentlyPlayed() const {
        cout << "Recently Played Songs:\n";
        for (int i = 0; i < 5; i++) {
            if (!recentSongs[i].empty()) {
                cout << recentSongs[i] << "\n";
            }
        }
    }
};

// Function to search song in the hash table
void searchSong(const string& songName) {
    if (songLibrary.find(songName) != songLibrary.end()) {
        cout << "Song: " << songName << " | Artist: " << songLibrary[songName] << endl;
    } else {
        cout << "Song '" << songName << "' not found in the library.\n";
    }
}

int main() {
    srand(time(0));  // Seed for random number generation (shuffle)

    Playlist playlist;
    RecentlyPlayed recentlyPlayed;

    // Add some real songs to playlist
    playlist.addSong("Song 1");
    playlist.addSong("Song 2");
    playlist.addSong("Song 3");
    playlist.addSong("Song 4");
    playlist.addSong("Song 5");
    playlist.displayPlaylist();

    // Play next song
    cout << "\nPlaying next song: " << playlist.playNext() << endl;
    recentlyPlayed.addRecentSong("Song 1");

    // Shuffle play
    cout << "\nShuffling songs: " << playlist.shufflePlay() << endl;
    cout << "\nPlaying next song: " << playlist.playNext() << endl;
    // Play previous song
    cout << "\nPlaying previous song: " << playlist.playPrevious() << endl;

    // Search for a song in the library
    searchSong("Song 3");

    // Save and load playlist from file
    playlist.savePlaylistToFile("playlist.txt");
    playlist.loadPlaylistFromFile("playlist.txt");

    recentlyPlayed.displayRecentlyPlayed();

    return 0;
}
