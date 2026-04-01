#pragma once
#include <string>

class Bird{
    public:
        std::string Name;
        std::string State;
        std::string Rarity;
        double Weight;
        double Length;
        double Wingspan;
        int Difficulty;

        Bird(const std::string& n, std::string s, const std::string& r, const double& w, const double& l, const double& ws, const int& d)
        : Name(n), State(s), Rarity(r), Weight(w), Length(l), Wingspan(ws), Difficulty(d) {} 
};

// ── Gråstein ─────────────────────────────────────────────────────────────
class Gråspurv : public Bird{
    public:
        Gråspurv() : Bird("Gråspurv", "Levende", "Gråstein", 30, 15, 23, 1) {}
};

class Kjøttmeis : public Bird{
    public:
        Kjøttmeis() : Bird("Kjøttmeis", "Levende", "Gråstein", 17, 14, 24, 1) {}
};

class Bokfink : public Bird{
    public:
        Bokfink() : Bird("Bokfink", "Levende", "Gråstein", 24, 15, 26, 2) {}
};

class Stær : public Bird{
    public:
        Stær() : Bird("Stær", "Levende", "Gråstein", 80, 20, 39, 2) {}
};

class Gråmåke : public Bird{
    public:
        Gråmåke() : Bird("Gråmåke", "Levende", "Gråstein", 890, 61, 140, 2) {}
};

// ── Sølvfjær ─────────────────────────────────────────────────────────────
class Isfugl : public Bird{
    public:
        Isfugl() : Bird("Isfugl", "Levende", "Sølvfjær", 40, 18, 26, 3) {}
};

class Hærfugl : public Bird{
    public:
        Hærfugl() : Bird("Hærfugl", "Levende", "Sølvfjær", 73, 27, 46, 3) {}
};

class Nøtteskrike : public Bird{
    public:
        Nøtteskrike() : Bird("Nøtteskrike", "Levende", "Sølvfjær", 175, 35, 55, 2) {}
};

class Pilfink : public Bird{
    public:
        Pilfink() : Bird("Pilfink", "Levende", "Sølvfjær", 22, 14, 22, 1) {}
};

class Rødstrupe : public Bird{
    public:
        Rødstrupe() : Bird("Rødstrupe", "Levende", "Sølvfjær", 16, 14, 21, 2) {}
};

// ── Jernklo ─────────────────────────────────────────────────────────────
class Tårnfalk : public Bird{
    public:
        Tårnfalk() : Bird("Tårnfalk", "Levende", "Jernklo", 239, 35, 76, 3) {}
};

class Vandrefalk : public Bird{
    public:
        Vandrefalk() : Bird("Vandrefalk", "Levende", "Jernklo", 845, 51, 107, 3) {}
};

class Hornugle : public Bird{
    public:
        Hornugle() : Bird("Hornugle", "Levende", "Jernklo", 331, 34, 91, 3) {}
};

class Gråhegre : public Bird{
    public:
        Gråhegre() : Bird("Gråhegre", "Levende", "Jernklo", 1292, 88, 167, 4) {}
};

class UngHavørn : public Bird{
    public:
        UngHavørn() : Bird("UngHavørn", "Levende", "Jernklo", 4091, 82, 211, 4) {}
};

// ── Gullvinge ─────────────────────────────────────────────────────────────
class Kongeørn : public Bird {
public:
    Kongeørn() : Bird("Kongeørn", "Levende", "Gullvinge", 4242, 82, 198, 4) {}
};
class Snøugle : public Bird {
public:
    Snøugle() : Bird("Snøugle", "Levende", "Gullvinge", 2101, 59, 138, 4) {}
};
class Lunde : public Bird {
public:
    Lunde() : Bird("Lunde", "Levende", "Gullvinge", 410, 29, 54, 3) {}
};
class Svartspett : public Bird {
public:
    Svartspett() : Bird("Svartspett", "Levende", "Gullvinge", 310, 51, 74, 3) {}
};
class Papegøye : public Bird {
public:
    Papegøye() : Bird("Papegøye", "Levende", "Gullvinge", 428, 33, 52, 4) {}
};

// ── Kongeblikk ────────────────────────────────────────────────────────────
class VoksenHavørn : public Bird {
public:
    VoksenHavørn() : Bird("VoksenHavørn", "Levende", "Kongeblikk", 5288, 84, 221, 5) {}
};
class Kondor : public Bird {
public:
    Kondor() : Bird("Kondor", "Levende", "Kongeblikk", 11198, 117, 294, 5) {}
};
class Kakapo : public Bird {
public:
    Kakapo() : Bird("Kakapo", "Levende", "Kongeblikk", 2845, 62, 55, 4) {}
};
class Vandrealbatross : public Bird {
public:
    Vandrealbatross() : Bird("Vandrealbatross", "Levende", "Kongeblikk", 8461, 122, 311, 5) {}
};
class Paradisfugl : public Bird {
public:
    Paradisfugl() : Bird("Paradisfugl", "Levende", "Kongeblikk", 177, 32, 48, 5) {}
};

// ── Odins Minne ───────────────────────────────────────────────────────────
class HaastØrn : public Bird {
public:
    HaastØrn() : Bird("HaastØrn", "Utdødd", "OdinsMinne", 12662, 140, 281, 5) {}
};