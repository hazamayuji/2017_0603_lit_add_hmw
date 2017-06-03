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
    //publicの上はprivate
    int r;
    int g;
    int b;
    
public:
    //別のクラスで使うのでグローバル変数
    int set_red = 0;
    int set_green = 0;
    int set_blue = 0;
    

    


    
    //戻り値、引数ともに整数の関数
    //intがあるからそれが変数とかは思わなくなりました。
    //参照渡しを使用します
    int change_red(int &r_2);
    int change_green(int &g_2);
    int change_blue(int &b_2);
    
    //コンストラクタ
    Color();
    
    
    //戻り値、引数共になしの関数
    //現在の状態を言ってあげるための処理です
    void say_state();
    //数字を入力してもらうための処理です
    void input_number();
    
    
   
};


