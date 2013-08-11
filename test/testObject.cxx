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

#include <iostream>

#include "prov.h"

int main(int argc, char const *argv[])
{
  prov::Object object;
  object.setId("foo");
  object.setAttribute("key", "val");

  if(object.getId() != "foo")
    {
    return -1;
    }

  if(object.getAttribute("key")->second != "val")
    {
    return -1;
    }

  if(object.getAttribute("notkey") != object.attrNotFound())
    {
    return -1;
    }

    return 0;
}
