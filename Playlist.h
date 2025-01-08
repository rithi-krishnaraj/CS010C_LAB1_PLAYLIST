#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <string>

using namespace std;

class PlaylistNode {

    public:
        PlaylistNode(); // default constructor
        PlaylistNode(string id, string song, string artist, int length, PlaylistNode* nextLoc = 0); // parameterized constructor
        void InsertAfter(PlaylistNode* nodePtr); 
        void SetNext(PlaylistNode* nodePtr); //mutator function
        string GetID() const; //accessor function
        string GetSongName() const; //accessor function
        string GetArtistName() const; //accessor function
        unsigned int GetSongLength() const; //accessor function
        PlaylistNode* GetNext(); //accessor function
        void PrintPlaylistNode() const;

    private:
        string uniqueID;
        string songName;
        string artistName;
        int songLength;
        PlaylistNode* nextNodePtr;

};

#endif
