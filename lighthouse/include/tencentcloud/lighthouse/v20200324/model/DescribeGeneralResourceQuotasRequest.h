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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeGeneralResourceQuotas request structure.
                */
                class DescribeGeneralResourceQuotasRequest : public AbstractModel
                {
                public:
                    DescribeGeneralResourceQuotasRequest();
                    ~DescribeGeneralResourceQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of resource names. Valid values: USER_KEY_PAIR, INSTANCE, SNAPSHOT.
                     * @return ResourceNames List of resource names. Valid values: USER_KEY_PAIR, INSTANCE, SNAPSHOT.
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置List of resource names. Valid values: USER_KEY_PAIR, INSTANCE, SNAPSHOT.
                     * @param ResourceNames List of resource names. Valid values: USER_KEY_PAIR, INSTANCE, SNAPSHOT.
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     */
                    bool ResourceNamesHasBeenSet() const;

                private:

                    /**
                     * List of resource names. Valid values: USER_KEY_PAIR, INSTANCE, SNAPSHOT.
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
