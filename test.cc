#include <stdio.h>
// 구조체
class rect{ // 클래스, 클래스 변수=객체(개체)
public: // 한정자, 객체 외부에서 접근 가능하게 함.
    const int width; // 멤버 변수
    const int height; // 상수는 한번 만들어지면 바뀔 수 없다.

    int area;
    // 생성자를 만들지 않으면
    // 기본 생성자가 생성된다.
    // 기본 생성자는 자동으로 값을 받아준다!
    // :(콜론)에 적힌 것은 member initializer
    rect(int w, int h):width(w),height(h){ // 반환형 없는 클래스 이름이랑 같은 이름의 함수는 생성자이다. constructor
        cal_area();
        printf("rect object is created!\n");
    }
private:
    void cal_area(){ // 멤버 함수
        area = width * height;
    }
};

int main(){
    rect a = {4,9}; // declaration 선언
    rect b = {3,3};
    printf("(w,h)=(%d,%d), area=%d\n",a.width,a.height,a.area);
    printf("(w,h)=(%d,%d), area=%d\n",b.width,b.height,b.area);
}