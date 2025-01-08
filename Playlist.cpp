#include "Playlist.h"
#include <iostream>
#include <string>

using namespace std;

PlaylistNode::PlaylistNode() { //default constructor //DONE
    this->uniqueID = "none";
    this->songName = "none";
    this->artistName = "none";
    this->songLength = 0;
    this->nextNodePtr = nullptr;
    return;
}

PlaylistNode::PlaylistNode(string id, string song, string artist, int length, PlaylistNode* nextLoc) {
    this->uniqueID = id;
    this->songName = song;
    this->artistName = artist;
    this->songLength = length;
    this->nextNodePtr = nextLoc;
    return;
}

void PlaylistNode::InsertAfter(PlaylistNode* nodePtr) {
    PlaylistNode* temp = nullptr; //stores current node's next node temporarily

    temp = this->nextNodePtr; //current node's next pointer points to the temp node
    this->nextNodePtr = nodePtr; //current node's next pointer points to new node
    nodePtr->nextNodePtr = temp; //new node's next pointer points to temp address

}

PlaylistNode* PlaylistNode::GetNext() {
    return this->nextNodePtr; //points to node following current pointer
}

void PlaylistNode::SetNext(PlaylistNode* nodePtr) {
    this->nextNodePtr = nodePtr;
}

string PlaylistNode::GetID() const {
    return this->uniqueID;
}

string PlaylistNode::GetSongName() const {
    return this->songName;
}

string PlaylistNode::GetArtistName() const {
    return this->artistName;
}

unsigned int PlaylistNode::GetSongLength() const {
    return this->songLength;
}

void PlaylistNode::PrintPlaylistNode() const { //
    cout << "Unique ID: " << uniqueID << endl;
    cout << "Song Name: " << songName << endl;
    cout << "Artist Name: " << artistName << endl;
    cout << "Song Length (in seconds): " << songLength << endl;
    cout << endl;
}
