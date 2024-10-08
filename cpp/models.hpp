// models.hpp
#ifndef MODELS_HPP
#define MODELS_HPP

#include "json.hpp"
#include <vector>
#include <string>

using json = nlohmann::json;
using namespace std;

struct Video {
    string _id;
    string image;
    string video;
    string title;
    string uploader;
    string duration;
    int visits;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Video, _id, image, video, title, uploader, duration, visits)
};

struct User {
    string _id;
    string username;
    string displayName;
    string password;
    vector<string> videoIdListLiked;
    vector<string> videoIdListUnliked;
    vector<string> commentIdListLiked;
    vector<string> commentIdListUnliked;
    string image;
    vector<string> watchedVideosIdList;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(User, _id, username, displayName, password, videoIdListLiked, videoIdListUnliked, commentIdListLiked, commentIdListUnliked, image, watchedVideosIdList)
};

#endif
