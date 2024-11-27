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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/SCIMCredential.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListSCIMCredentials response structure.
                */
                class ListSCIMCredentialsResponse : public AbstractModel
                {
                public:
                    ListSCIMCredentialsResponse();
                    ~ListSCIMCredentialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of SCIM keys.
                     * @return TotalCounts Number of SCIM keys.
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取SCIM key information.
                     * @return SCIMCredentials SCIM key information.
                     * 
                     */
                    std::vector<SCIMCredential> GetSCIMCredentials() const;

                    /**
                     * 判断参数 SCIMCredentials 是否已赋值
                     * @return SCIMCredentials 是否已赋值
                     * 
                     */
                    bool SCIMCredentialsHasBeenSet() const;

                private:

                    /**
                     * Number of SCIM keys.
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * SCIM key information.
                     */
                    std::vector<SCIMCredential> m_sCIMCredentials;
                    bool m_sCIMCredentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_
