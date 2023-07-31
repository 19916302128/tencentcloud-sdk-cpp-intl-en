/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/clb/v20180317/model/TypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TypeInfo::TypeInfo() :
    m_typeHasBeenSet(false),
    m_specAvailabilitySetHasBeenSet(false)
{
}

CoreInternalOutcome TypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TypeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SpecAvailabilitySet") && !value["SpecAvailabilitySet"].IsNull())
    {
        if (!value["SpecAvailabilitySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TypeInfo.SpecAvailabilitySet` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecAvailabilitySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecAvailability item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specAvailabilitySet.push_back(item);
        }
        m_specAvailabilitySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_specAvailabilitySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecAvailabilitySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specAvailabilitySet.begin(); itr != m_specAvailabilitySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TypeInfo::GetType() const
{
    return m_type;
}

void TypeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TypeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<SpecAvailability> TypeInfo::GetSpecAvailabilitySet() const
{
    return m_specAvailabilitySet;
}

void TypeInfo::SetSpecAvailabilitySet(const vector<SpecAvailability>& _specAvailabilitySet)
{
    m_specAvailabilitySet = _specAvailabilitySet;
    m_specAvailabilitySetHasBeenSet = true;
}

bool TypeInfo::SpecAvailabilitySetHasBeenSet() const
{
    return m_specAvailabilitySetHasBeenSet;
}

