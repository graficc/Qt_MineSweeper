#ifndef CMINEMAP_H
#define CMINEMAP_H

class CMineMap
{
public:
    CMineMap();     //构造
    ~CMineMap();    //析构
    void Create();  //动态数组分配内存并布雷
    void Create(int,int,int);   //创建雷区
    void Restart(); //重新开始
private:
    int ctnflag(int m, int n);  //返回(m,n)周围旗的数目，方便后面同时点击快捷键实现

public:
    int **Map;//雷区地图
    int nMime;//雷数
    int mx;  //行数
    int my;   //列数
    bool Onrbtdown(int m, int n);   //右键插小红旗
    bool Onlrbtdown(int m, int n);  //左右同时点击
    bool Onlbtup(int m, int n);     //左键点击
    bool iswin();   //判断胜利
    int winf;       //游戏状态：2为胜利，1为重新建立雷区后，0为默认构造。也作为计时器的判断，绘制不同笑脸的判断。
    int rMine;  //剩余雷数
    bool first;     //首次点击不为雷。初始化为1，第一次点击后为0。
    int timer;  //计时
};

#endif // CMINEMAP_H
