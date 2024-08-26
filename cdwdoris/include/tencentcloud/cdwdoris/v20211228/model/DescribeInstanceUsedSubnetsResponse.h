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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCEUSEDSUBNETSRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCEUSEDSUBNETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceUsedSubnets response structure.
                */
                class DescribeInstanceUsedSubnetsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceUsedSubnetsResponse();
                    ~DescribeInstanceUsedSubnetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedSubnets Subnet information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUsedSubnets() const;

                    /**
                     * 判断参数 UsedSubnets 是否已赋值
                     * @return UsedSubnets 是否已赋值
                     * 
                     */
                    bool UsedSubnetsHasBeenSet() const;

                private:

                    /**
                     * VPC information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet information used by the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_usedSubnets;
                    bool m_usedSubnetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCEUSEDSUBNETSRESPONSE_H_
