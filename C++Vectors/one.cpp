#include <iostream>
#include <vector>
using namespace std;

class Vec{
    vector<float> data;
    public:
        Vec(const vector<float>& data) : data(data){}

        void Mod(int index, float val){
            if (index >= 0 && index < data.size()) {
                data[index] = val;
            }
        }

        void Mul(float s){
            for(float &v : data) {
                v *= s;
            }
        }

        void display() const{
            cout << "(";
            for (int i = 0; i < data.size(); ++i){
                cout << data[i];
                if (i != (data.size() - 1) ){
                    cout << ",";
                }
            }
            cout << ")\n";
        }

};

int main(){
    Vec v({10.3, 20.1, 30.6});

    v.display();
    v.Mod(1,6.69);
    v.Mul(2);
    v.display();

    return 0;
}