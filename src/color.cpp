//
//  color.cpp
//  2017_0603_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/03.
//
//

#include "color.hpp"

//それぞれの値を初期化しています
Color::Color(){
    for(int i = 0; i < 3; i++) c[i] = 0;
}

//ちゃんと教えてあげる作り手の配慮のコードです
void Color::say_state(){
    
    cout << "よしさん！！！" << endl;
    cout << "赤の値は->" << c[0] << "!!" << endl;
    cout << "緑の値は->" << c[1] << "!!" << endl;
    cout << "青の値は->" << c[2] << "!!" << endl;
    cout << "の色の画面ができました！！！感動してください。"<< endl;
}

ofColor Color::getColor(){
    return ofColor(c[0], c[1], c[2]);
}

void Color::change_color(int i){
    
    if(i >= 3) return;
    c[i] = c[i] * cooef[i] + bias[i];
}

void Color::input_number(){
    
    for(int i = 0; i < 3; i++){
        while(c[i] == 0 || c[i] > 255){
            cout << c_str[i] << "の値を入力してくだい" << endl;
            cin >>  c[i] ;
            change_color(i);
            cout << cooef[i] << "倍して" << bias[i] << "たしておきますね~^" << endl;
            if(c[i] > 255){
                cout << "なにしてんの？結果255以上なってるやんやり直しやワレ" << endl;
            }
        }
    }
    
    /*
        while(r == 0 || r > 255){
        cout << "赤の値を入力してくだい" << endl;
        cin >>  set_red ;
        change_red(set_red);
        cout << "2倍して10たしておきますね~^" << endl;
            if(r > 255){
                cout << "なにしてんの？結果255以上なってるやんやり直しやワレ" << endl;
            }
        }

        while(g == 0 || g > 255){
        cout << "緑の値を入力してくだい" << endl;
        cin >> set_green ;
        change_green(set_green);
        cout << "30たしておきますね~^" << endl;
            if(g > 255){
                cout << "なにしてんの？結果255以上なってるやんやり直しやワレ" << endl;
            }
        }

        while(b == 0 || b > 255){
        cout << "青の値を入力してくだい" << endl;
        cin >> set_blue ;
        change_blue(set_blue);
        cout << "サービスで3倍して20たしておきますね~^" << endl;
            if(b > 255){
                cout << "なにしてんの？結果255以上なってるやんやり直しやワレ" << endl;
            }
        }

     */
}

//参照渡しを利用しています
//これを使うことで別の関数に計算した値を簡単に渡せます
/*
int Color::change_red(){
    r = r * 2 + 10;
    return r;
}

int Color::change_green(){
    g = g + 3;
    return g;
}

int Color::change_blue(){
    b = b * 3 + 20;
    return b;
}*/
