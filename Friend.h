class FriendClass
{
  public:
    FriendClass() {
        friendVar = 0;    
    };
  private:
    int friendVar;

  friend void friendFunction(FriendClass &ff);
};

void friendFunction(FriendClass &ff) {
  ff.friendVar = 44;
  std::cout << "Friend:" << ff.friendVar << std::endl;
}