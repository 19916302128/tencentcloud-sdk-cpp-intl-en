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

#include <tencentcloud/cdb/v20170320/model/DescribeDeployGroupListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

DescribeDeployGroupListRequest::DescribeDeployGroupListRequest() :
    m_deployGroupIdHasBeenSet(false),
    m_deployGroupNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeDeployGroupListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeployGroupListRequest::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void DescribeDeployGroupListRequest::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool DescribeDeployGroupListRequest::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string DescribeDeployGroupListRequest::GetDeployGroupName() const
{
    return m_deployGroupName;
}

void DescribeDeployGroupListRequest::SetDeployGroupName(const string& _deployGroupName)
{
    m_deployGroupName = _deployGroupName;
    m_deployGroupNameHasBeenSet = true;
}

bool DescribeDeployGroupListRequest::DeployGroupNameHasBeenSet() const
{
    return m_deployGroupNameHasBeenSet;
}

int64_t DescribeDeployGroupListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeployGroupListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeployGroupListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDeployGroupListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDeployGroupListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDeployGroupListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


