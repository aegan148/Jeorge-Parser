#pragma once

////////////about NAMESPACE//////////
typedef uint8_t index;              //
typedef uint8_t value;
typedef uint8_t Quontity;
typedef uint8_t PriceBase;
typedef std::string name;
using dataOfTag= std::tuple<name, Quontity, PriceBase>; //
///////////////////////////////////////////////////////////

/////declaration////////////////
struct PositionOBJ;            //
struct ResourcesOBJ;            
struct TzrOBJ;                  
struct MchOBJ;                  
struct MatOBJ;                   
struct workListOBJ;             
struct indexes;                 //
/////////////////////////////////

struct chapterOBJ {


};

struct PositionOBJ {


};

struct ResourcesOBJ {
    TzrOBJ* obj;
    MchOBJ* mch;
    MatOBJ* mat;
};

struct TzrOBJ {
    dataOfTag* TagInfo;
};

struct MchOBJ {
    dataOfTag* TagInfo;
};

struct MatOBJ {
    dataOfTag* TagInfo;
};

struct workListOBJ {
    std::string ss;
};

struct indexes {
    bool IswinterIndex;
    bool localIndex;
    uint8_t winterIndexValue;
    std::map<index, value>* mainIndex;
    void clearIndexStruct();
};
