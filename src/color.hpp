//
//  color.hpp
//  2017_0603_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/03.
//
//
#pragma once
#include "ofMain.h"

using namespace std;

class Color{
private:
    //publicの上はprivate
    //int r;
    //int g;
    //int b;
    
    int c[3] = {0, 0, 0};
    
    //int change_red();
    //int change_green();
    //int change_blue();
    
    void change_color(int i);
    
    int cooef[3] = {2, 1, 3};
    int bias[3] = {10, 3, 20};
    string c_str[3] = {"赤", "緑", "青"};

public:
    //別のクラスで使うのでグローバル変数 違う いらない
    //int set_red = 0;
    //int set_green = 0;
    //int set_blue = 0;
    
    //コンストラクタ
    Color();
    ofColor getColor();
    
    //戻り値、引数ともに整数の関数
    //intがあるからそれが変数とかは思わなくなりました。
    //参照渡しを使用します いらない、privateでいい
    
    //戻り値、引数共になしの関数
    //現在の状態を言ってあげるための処理です
    void say_state();
    //数字を入力してもらうための処理です
    void input_number();
    
};


