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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDEFAULTVPCREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDEFAULTVPCREQUEST_H_

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
                * CreateDefaultVpc request structure.
                */
                class CreateDefaultVpcRequest : public AbstractModel
                {
                public:
                    CreateDefaultVpcRequest();
                    ~CreateDefaultVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the availability zone in which the subnet resides. The availability zone will be randomly selected if not specified.
                     * @return Zone The ID of the availability zone in which the subnet resides. The availability zone will be randomly selected if not specified.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The ID of the availability zone in which the subnet resides. The availability zone will be randomly selected if not specified.
                     * @param Zone The ID of the availability zone in which the subnet resides. The availability zone will be randomly selected if not specified.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly return a default VPC
                     * @return Force Whether to forcibly return a default VPC
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to forcibly return a default VPC
                     * @param Force Whether to forcibly return a default VPC
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * The ID of the availability zone in which the subnet resides. The availability zone will be randomly selected if not specified.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Whether to forcibly return a default VPC
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDEFAULTVPCREQUEST_H_
