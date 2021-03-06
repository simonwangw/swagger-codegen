/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Tag.h
 *
 * A tag for a pet
 */

#ifndef Tag_H_
#define Tag_H_



#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// A tag for a pet
/// </summary>
class  Tag
{
public:
    Tag();
    virtual ~Tag();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// Tag members
    
    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

protected:
    int64_t m_Id;
    std::string m_Name;
};

}
}
}
}

#endif /* Tag_H_ */
