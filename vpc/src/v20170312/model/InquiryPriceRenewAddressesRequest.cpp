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

#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InquiryPriceRenewAddressesRequest::InquiryPriceRenewAddressesRequest() :
    m_addressIdsHasBeenSet(false),
    m_addressChargePrepaidHasBeenSet(false)
{
}

string InquiryPriceRenewAddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressIds.begin(); itr != m_addressIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InquiryPriceRenewAddressesRequest::GetAddressIds() const
{
    return m_addressIds;
}

void InquiryPriceRenewAddressesRequest::SetAddressIds(const vector<string>& _addressIds)
{
    m_addressIds = _addressIds;
    m_addressIdsHasBeenSet = true;
}

bool InquiryPriceRenewAddressesRequest::AddressIdsHasBeenSet() const
{
    return m_addressIdsHasBeenSet;
}

AddressChargePrepaid InquiryPriceRenewAddressesRequest::GetAddressChargePrepaid() const
{
    return m_addressChargePrepaid;
}

void InquiryPriceRenewAddressesRequest::SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid)
{
    m_addressChargePrepaid = _addressChargePrepaid;
    m_addressChargePrepaidHasBeenSet = true;
}

bool InquiryPriceRenewAddressesRequest::AddressChargePrepaidHasBeenSet() const
{
    return m_addressChargePrepaidHasBeenSet;
}


