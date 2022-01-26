class Solution {
public:
bool isLongPressedName(string name, string typed, int i = 0) {
    for (auto c : typed) i += name[i] == c;
    return i == name.size();
}
};