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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyIp6AddressesBandwidth request structure.
                */
                class ModifyIp6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyIp6AddressesBandwidthRequest();
                    ~ModifyIp6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Modified target bandwidth, in Mbps.
                     * @return InternetMaxBandwidthOut Modified target bandwidth, in Mbps.
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Modified target bandwidth, in Mbps.
                     * @param _internetMaxBandwidthOut Modified target bandwidth, in Mbps.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取IPv6 addresses. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * @return Ip6Addresses IPv6 addresses. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetIp6Addresses() const;

                    /**
                     * 设置IPv6 addresses. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * @param _ip6Addresses IPv6 addresses. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * 
                     */
                    void SetIp6Addresses(const std::vector<std::string>& _ip6Addresses);

                    /**
                     * 判断参数 Ip6Addresses 是否已赋值
                     * @return Ip6Addresses 是否已赋值
                     * 
                     */
                    bool Ip6AddressesHasBeenSet() const;

                    /**
                     * 获取Unique IDs corresponding to the IPv6 addresses. Format: eip-xxxxxxxx. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * @return Ip6AddressIds Unique IDs corresponding to the IPv6 addresses. Format: eip-xxxxxxxx. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetIp6AddressIds() const;

                    /**
                     * 设置Unique IDs corresponding to the IPv6 addresses. Format: eip-xxxxxxxx. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * @param _ip6AddressIds Unique IDs corresponding to the IPv6 addresses. Format: eip-xxxxxxxx. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     * 
                     */
                    void SetIp6AddressIds(const std::vector<std::string>& _ip6AddressIds);

                    /**
                     * 判断参数 Ip6AddressIds 是否已赋值
                     * @return Ip6AddressIds 是否已赋值
                     * 
                     */
                    bool Ip6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * Modified target bandwidth, in Mbps.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * IPv6 addresses. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     */
                    std::vector<std::string> m_ip6Addresses;
                    bool m_ip6AddressesHasBeenSet;

                    /**
                     * Unique IDs corresponding to the IPv6 addresses. Format: eip-xxxxxxxx. Both Ip6Addresses and Ip6AddressId are required, but they cannot be specified at the same time.
                     */
                    std::vector<std::string> m_ip6AddressIds;
                    bool m_ip6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6ADDRESSESBANDWIDTHREQUEST_H_
