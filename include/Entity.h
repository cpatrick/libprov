/******************************************************************************
 * Copyright 2013 Kitware Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include <map>
#include <string>

class Entity
{
public:

	typedef std::map<std::string, std::string> AttrMapType;

    Entity();
    virtual ~Entity();

    virtual void setId(const std::string& id);
    virtual const std::string& getId() const;

    virtual void setAttribute(const std::string& key, const std::string& val);
	virtual AttrMapType::const_iterator getAttribute(const std::string& key) const;

protected:
    std::string id;
    AttrMapType attributes;
};
