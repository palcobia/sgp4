#include "Julian.h"
#include "Tle.h"

#include <stdio.h>
#include <list>

int main() {
    std::list<Tle> tles;
    tles.push_back(Tle("ALSAT 1                 ",
            "1 27559U 02054A   11083.20474426  .00000231  00000-0  46807-4 0  3956",
            "2 27559  97.8504 306.7237 0024736  97.8736 262.5269 14.69492531444449"));
    tles.push_back(Tle("NIGERIASAT 1            ",
            "1 27941U 03042C   11083.20062099  .00000034  00000-0  15255-4 0  4571",
            "2 27941  97.8567 300.6588 0010245 259.2618 100.7415 14.63156215399858"));
    tles.push_back(Tle("UK-DMC                  ",
            "1 27942U 03042D   11083.04316290  .00000204  00000-0  36461-4 0  4772",
            "2 27942  97.8673 303.9260 0065042 261.4265  97.9577 14.75702181400051"));
    tles.push_back(Tle("BILSAT 1                ",
            "1 27943U 03042E   11083.20386998 -.00000002  00000-0  82329-5 0  3134",
            "2 27943  97.8533 299.8242 0010407 257.0777 102.9254 14.63001134399833"));
    tles.push_back(Tle("BEIJING 1               ",
            "1 28890U 05043A   11083.22028522  .00000028  00000-0  15067-4 0  1934",
            "2 28890  97.9686 322.2607 0016579 121.4143 238.8674 14.60143088288034"));
    tles.push_back(Tle("HJ-1A                   ",
            "1 33320U 08041A   11083.21627564  .00000217  00000-0  39265-4 0  8123",
            "22 33320  97.9130 157.6832 0025261 164.3664 195.8335 14.75427668136992"));
    tles.push_back(Tle("HJ-1B                   ",
            "1 33321U 08041B   11083.18241190  .00000035  00000-0  12683-4 0  8489",
            "2 33321  97.9157 157.7757 0043106 177.6044 182.5404 14.75420918136975"));
    tles.push_back(Tle("YAOGAN 4                ",
            "1 33446U 08061A   11083.17563858 -.00000429  00000-0 -57253-4 0  5642",
            "2 33446  97.8399 157.1424 0018816 112.5537 247.7690 14.74344039124291"));
    tles.push_back(Tle("YAOGAN 5                ",
            "1 33456U 08064A   11083.21782255  .00003643  00000-0  13418-3 0  5581",
            "2 33456  97.3041 157.1374 0010196 267.5526 176.9312 15.28421737126430"));
    tles.push_back(Tle("DEIMOS-1                ",
            "1 35681U 09041A   11083.21989648  .00000042  00000-0  15391-4 0  8355",
            "2 35681  98.0756 343.3041 0001640  85.6884 274.4515 14.69436598 88502"));
    tles.push_back(Tle("UK-DMC 2                ",
            "1 35683U 09041C   11083.19129526  .00000128  00000-0  29890-4 0  8539",
            "2 35683  98.0774 342.2478 0001262 104.0560 256.0776 14.69410764 88426"));

        Julian julian_now;
    int year = 0;
    int month = 0;
    double day = 0.0;
    julian_now.GetComponent(year, month, day);
    printf("year: %i\nmonth: %i\nday: %lf\n", year, month, day);
    
    return 0;
}