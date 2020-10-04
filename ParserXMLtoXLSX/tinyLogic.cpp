#pragma once
#include"tinyLogic.h"


/*
bool TinyClassObj::loadXmlSourse(const std::string way) {
    this->doc = new XMLDocument(way.c_str());
    return this->doc->ErrorID();
    // (!this->doc->) ? false : true;
}
*/


TinyClassObj::~TinyClassObj()
{
    if (doc) { delete doc; }
    if (xml_entity) { delete xml_entity; }
}

bool TinyClassObj::loadXmlSourse(const std::string way) {
    this->doc = new TiXmlDocument(way.c_str());
    bool res;
    (this->doc->LoadFile() == 0) ? res=false : res=true;
    if (!res) { this->xml_entity = doc->FirstChildElement("Document"); }
    return res;
}

void TinyClassObj::setNextSiblingElement(const std::string tag)
{
    this->xml_entity = this->xml_entity->NextSiblingElement(tag.c_str());
}

void TinyClassObj::setFirstChildElement(const std::string tag)
{
    this->xml_entity = this->xml_entity->FirstChildElement(tag.c_str());
}

void TinyClassObj::goToReadXml()
{
}

void indexes::clearIndexStruct()
{
    if (this->mainIndex->size()) { this->mainIndex->clear(); }
}
