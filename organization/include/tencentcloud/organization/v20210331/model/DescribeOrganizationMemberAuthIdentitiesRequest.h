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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMemberAuthIdentities request structure.
                */
                class DescribeOrganizationMemberAuthIdentitiesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberAuthIdentitiesRequest();
                    ~DescribeOrganizationMemberAuthIdentitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param Offset Offset.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned results. Maximum value: `50`.
                     * @return Limit Maximum number of returned results. Maximum value: `50`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned results. Maximum value: `50`.
                     * @param Limit Maximum number of returned results. Maximum value: `50`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Organization member UIN.
                     * @return MemberUin Organization member UIN.
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Organization member UIN.
                     * @param MemberUin Organization member UIN.
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned results. Maximum value: `50`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Organization member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
