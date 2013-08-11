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

#include "provObject.h"

namespace prov {

Object::Object()
: id(), attributes()
{

}

Object::~Object()
{

}

void Object::setId(const std::string& id)
{
  this->id = id;
}

const std::string& Object::getId() const
{
  return this->id;
}

void Object::setAttribute(const std::string& key, const std::string& val)
{
  std::pair<std::string, std::string> pair(key, val);
  this->attributes.insert(pair);
}

Object::AttrIterType Object::getAttribute(const std::string& key) const
{
  return this->attributes.find(key);
}

Object::AttrIterType Object::attrNotFound() const
{
  return this->attributes.end();
}

}
