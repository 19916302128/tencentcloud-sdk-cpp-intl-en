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

#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryKafkaSettingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecLogDeliveryKafkaSettingInfo::SecLogDeliveryKafkaSettingInfo() :
    m_logTypeHasBeenSet(false),
    m_topicIDHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome SecLogDeliveryKafkaSettingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryKafkaSettingInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicID") && !value["TopicID"].IsNull())
    {
        if (!value["TopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryKafkaSettingInfo.TopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicID = string(value["TopicID"].GetString());
        m_topicIDHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryKafkaSettingInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryKafkaSettingInfo.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogDeliveryKafkaSettingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicID.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string SecLogDeliveryKafkaSettingInfo::GetLogType() const
{
    return m_logType;
}

void SecLogDeliveryKafkaSettingInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool SecLogDeliveryKafkaSettingInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string SecLogDeliveryKafkaSettingInfo::GetTopicID() const
{
    return m_topicID;
}

void SecLogDeliveryKafkaSettingInfo::SetTopicID(const string& _topicID)
{
    m_topicID = _topicID;
    m_topicIDHasBeenSet = true;
}

bool SecLogDeliveryKafkaSettingInfo::TopicIDHasBeenSet() const
{
    return m_topicIDHasBeenSet;
}

string SecLogDeliveryKafkaSettingInfo::GetTopicName() const
{
    return m_topicName;
}

void SecLogDeliveryKafkaSettingInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SecLogDeliveryKafkaSettingInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

bool SecLogDeliveryKafkaSettingInfo::GetState() const
{
    return m_state;
}

void SecLogDeliveryKafkaSettingInfo::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SecLogDeliveryKafkaSettingInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

