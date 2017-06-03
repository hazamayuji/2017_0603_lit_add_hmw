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
    r = 0;
    g = 0;
    b = 0;
}

//参照渡しを利用しています
//これを使うことで別の関数に計算した値を簡単に渡せます
int Color::change_red(int &r_2){
    r = r_2*2 + 10;
    return r;
}

int Color::change_green(int &g_2){
    g = g_2 + 30;
    return g;
}

int Color::change_blue(int &b_2){
    b = b_2*3 + 20;
    return b;
}

//ちゃんと教えてあげる作り手の配慮のコードです
void Color::say_state(){
    
    cout << "よしさん！！！" << endl;
    cout << "赤の値は->" << r << "!!" << endl;
    cout << "緑の値は->" << g << "!!" << endl;
    cout << "青の値は->" << b << "!!" << endl;
    
    cout << "の色の画面ができました！！！感動してください。"<< endl;
}


//入力してもらう時に呼び出す処理です。
void Color::input_number(){
    
    
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

}


