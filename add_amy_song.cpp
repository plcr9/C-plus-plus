int main () {

  Song back_to_black("Back to Black", "Amy Winehouse");

}

class Song {

  std::string title;
  std::string artist;

public:

  Song(std::string new_title, std::string new_artist);

  ~Song();

  std::string get_title();

  std::string get_artist();

};

Song:Song(std::string new_title, std::string new_artist)
  : title(new_title), artist(new_artist) {}

Song::~Song() {

  std::cout << "Goodbye, " << title << "\n";

}

std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
