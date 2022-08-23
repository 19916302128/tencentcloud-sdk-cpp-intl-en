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

#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeClusterEndpointsResponse::DescribeClusterEndpointsResponse() :
    m_certificationAuthorityHasBeenSet(false),
    m_clusterExternalEndpointHasBeenSet(false),
    m_clusterIntranetEndpointHasBeenSet(false),
    m_clusterDomainHasBeenSet(false),
    m_clusterExternalACLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterEndpointsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CertificationAuthority") && !rsp["CertificationAuthority"].IsNull())
    {
        if (!rsp["CertificationAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificationAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificationAuthority = string(rsp["CertificationAuthority"].GetString());
        m_certificationAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterExternalEndpoint") && !rsp["ClusterExternalEndpoint"].IsNull())
    {
        if (!rsp["ClusterExternalEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterExternalEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterExternalEndpoint = string(rsp["ClusterExternalEndpoint"].GetString());
        m_clusterExternalEndpointHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterIntranetEndpoint") && !rsp["ClusterIntranetEndpoint"].IsNull())
    {
        if (!rsp["ClusterIntranetEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterIntranetEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIntranetEndpoint = string(rsp["ClusterIntranetEndpoint"].GetString());
        m_clusterIntranetEndpointHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterDomain") && !rsp["ClusterDomain"].IsNull())
    {
        if (!rsp["ClusterDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDomain = string(rsp["ClusterDomain"].GetString());
        m_clusterDomainHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterExternalACL") && !rsp["ClusterExternalACL"].IsNull())
    {
        if (!rsp["ClusterExternalACL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterExternalACL` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClusterExternalACL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterExternalACL.push_back((*itr).GetString());
        }
        m_clusterExternalACLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterEndpointsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_certificationAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificationAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterExternalEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterExternalEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterExternalEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIntranetEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIntranetEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIntranetEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterExternalACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterExternalACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterExternalACL.begin(); itr != m_clusterExternalACL.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterEndpointsResponse::GetCertificationAuthority() const
{
    return m_certificationAuthority;
}

bool DescribeClusterEndpointsResponse::CertificationAuthorityHasBeenSet() const
{
    return m_certificationAuthorityHasBeenSet;
}

string DescribeClusterEndpointsResponse::GetClusterExternalEndpoint() const
{
    return m_clusterExternalEndpoint;
}

bool DescribeClusterEndpointsResponse::ClusterExternalEndpointHasBeenSet() const
{
    return m_clusterExternalEndpointHasBeenSet;
}

string DescribeClusterEndpointsResponse::GetClusterIntranetEndpoint() const
{
    return m_clusterIntranetEndpoint;
}

bool DescribeClusterEndpointsResponse::ClusterIntranetEndpointHasBeenSet() const
{
    return m_clusterIntranetEndpointHasBeenSet;
}

string DescribeClusterEndpointsResponse::GetClusterDomain() const
{
    return m_clusterDomain;
}

bool DescribeClusterEndpointsResponse::ClusterDomainHasBeenSet() const
{
    return m_clusterDomainHasBeenSet;
}

vector<string> DescribeClusterEndpointsResponse::GetClusterExternalACL() const
{
    return m_clusterExternalACL;
}

bool DescribeClusterEndpointsResponse::ClusterExternalACLHasBeenSet() const
{
    return m_clusterExternalACLHasBeenSet;
}


