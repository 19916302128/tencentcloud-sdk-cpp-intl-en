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

#include <tencentcloud/tcss/v20201101/model/AddAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddAssetImageRegistryRegistryDetailRequest::AddAssetImageRegistryRegistryDetailRequest() :
    m_nameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_registryVersionHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_speedLimitHasBeenSet(false),
    m_insecureHasBeenSet(false)
{
}

string AddAssetImageRegistryRegistryDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_speedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speedLimit, allocator);
    }

    if (m_insecureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insecure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insecure, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAssetImageRegistryRegistryDetailRequest::GetName() const
{
    return m_name;
}

void AddAssetImageRegistryRegistryDetailRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetUsername() const
{
    return m_username;
}

void AddAssetImageRegistryRegistryDetailRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetPassword() const
{
    return m_password;
}

void AddAssetImageRegistryRegistryDetailRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetUrl() const
{
    return m_url;
}

void AddAssetImageRegistryRegistryDetailRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetRegistryType() const
{
    return m_registryType;
}

void AddAssetImageRegistryRegistryDetailRequest::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetNetType() const
{
    return m_netType;
}

void AddAssetImageRegistryRegistryDetailRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetRegistryVersion() const
{
    return m_registryVersion;
}

void AddAssetImageRegistryRegistryDetailRequest::SetRegistryVersion(const string& _registryVersion)
{
    m_registryVersion = _registryVersion;
    m_registryVersionHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::RegistryVersionHasBeenSet() const
{
    return m_registryVersionHasBeenSet;
}

string AddAssetImageRegistryRegistryDetailRequest::GetRegistryRegion() const
{
    return m_registryRegion;
}

void AddAssetImageRegistryRegistryDetailRequest::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

int64_t AddAssetImageRegistryRegistryDetailRequest::GetSpeedLimit() const
{
    return m_speedLimit;
}

void AddAssetImageRegistryRegistryDetailRequest::SetSpeedLimit(const int64_t& _speedLimit)
{
    m_speedLimit = _speedLimit;
    m_speedLimitHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::SpeedLimitHasBeenSet() const
{
    return m_speedLimitHasBeenSet;
}

uint64_t AddAssetImageRegistryRegistryDetailRequest::GetInsecure() const
{
    return m_insecure;
}

void AddAssetImageRegistryRegistryDetailRequest::SetInsecure(const uint64_t& _insecure)
{
    m_insecure = _insecure;
    m_insecureHasBeenSet = true;
}

bool AddAssetImageRegistryRegistryDetailRequest::InsecureHasBeenSet() const
{
    return m_insecureHasBeenSet;
}


