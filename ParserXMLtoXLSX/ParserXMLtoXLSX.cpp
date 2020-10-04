#include"tinyLogic.h"

template <typename to, typename from>
to StringToNumber(const from& rhs) {
    to result;
    std::stringstream os;
    os << rhs;
    os >> result;
    if (os.fail()) {
        std::runtime_error e("eror cast");
        throw e;
    }
    return result;
};


int main()
{
    TinyClassObj parser;

   if(!parser.loadXmlSourse("Sourse/sourse.xml")) std::cout << "error";;
        std::cout << "sf";
    

    /*
    parser.xml_element = parser.xml_obj->FirstChildElement("Document");
    if (parser.xml_element)
    {      
        level = root->FirstChildElement("Chapters");
        
        if (level) {
            level = level->FirstChildElement("Chapter");
            while (level) {
                TiXmlElement* xml_entity = 0;
                xml_entity = level->FirstChildElement("Position");
                while (xml_entity) {
                    xml_entity = xml_entity->FirstChildElement("Resources");
                    while (xml_entity) {
                        xml_entity = xml_entity->FirstChildElement("Tzr");
                        std::string ss, s;
                        double y=NULL;
                        ss = xml_entity->Attribute("Caption");
                        xml_entity = xml_entity->FirstChildElement("PriceBase");
                        //hh = xml_entity->IterateChildren(xml_entity)->ToText;
                        while (xml_entity) {                          
                            //xml_entity = xml_entity->NextSiblingElement("Number");PriceBase
                            s = xml_entity->Attribute("Value");
                            std::replace(s.begin(), s.end(), ',', '.');
                            y= StringToNumber<double,std::string>(s);
                            std::cout << y;
                            // y = xml_entity->QueryIntAttribute;                            
                            xml_entity = xml_entity->NextSiblingElement("Value");
                        }
                        xml_entity = xml_entity->NextSiblingElement("Caption");
                    }                   
                }
                level = level->NextSiblingElement("Chapter");
            }
        }
    }
    
       //if (!tinyObj.xml_obj->LoadFile()) { return false; }
 
    //TiXmlElement* element = 0;
    //element = tinyObj.xml_obj->FirstChildElement("RegionalK");
    //element->FirstChildElement("RegionalK");
    
    while (tinyObj.element!=NULL) {
        std::cout << "sf";
    }
   */
}

