
#include <iostream>
#include <vector>
#include <string>

        std::vector<int> l = {1,2,3,2,4,5,1,2,6,6,6};


int main (){
    std::string answer;
    int s_i = 0;
    int p_v = -51;
    for (int i =0; i< l.size();i++){
        if (p_v >= l[i]){
            answer += std::to_string(s_i) + " / " + std::to_string(i-s_i) + "; ";
            s_i = i;
        }
        p_v = l[i];
    }
    answer += std::to_string(s_i) + " / " + std::to_string(l.size()-s_i) + "; ";
    std::cout << answer;


}
