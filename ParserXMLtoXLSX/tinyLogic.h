#pragma once
#include <string> 
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <map>
#include "tinyxml/tinyxml.h"
#include"StructureOfXmlFile.h"
#include <memory>


class TinyClassObj {
public:
    TinyClassObj(): doc(0), xml_entity(0) {};
    ~TinyClassObj();
    bool loadXmlSourse(const std::string way);
    const TiXmlElement* getCurrentElement() { return this->xml_entity; }
    const TiXmlDocument* getCurrentDoc() { return this->doc; }
    void setNextSiblingElement(const std::string tag);
    void setFirstChildElement(const std::string tag);
    void setNextDoc(const std::string doc) { this->loadXmlSourse(doc); };
    void goToReadXml();
private:
    TiXmlDocument* doc;
    TiXmlElement* xml_entity;
};

class dataFromSourse {
public:
    dataFromSourse() {};
    ~dataFromSourse() {};
private:
    indexes indexObj;

};






