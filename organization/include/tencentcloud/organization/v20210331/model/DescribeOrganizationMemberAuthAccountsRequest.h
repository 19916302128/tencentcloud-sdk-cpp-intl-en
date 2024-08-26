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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHACCOUNTSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHACCOUNTSREQUEST_H_

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
                * DescribeOrganizationMemberAuthAccounts request structure.
                */
                class DescribeOrganizationMemberAuthAccountsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberAuthAccountsRequest();
                    ~DescribeOrganizationMemberAuthAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @return Offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @param _offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit. Value range: 1-50. Default value: 10.
                     * @return Limit Limit. Value range: 1-50. Default value: 10.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit. Value range: 1-50. Default value: 10.
                     * @param _limit Limit. Value range: 1-50. Default value: 10.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @return PolicyId Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * @param _policyId Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit. Value range: 1-50. Default value: 10.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Policy ID, which can be obtained through [DescribeOrganizationMemberPolicies](https://intl.cloud.tencent.com/document/product/850/82935?from_cn_redirect=1).
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHACCOUNTSREQUEST_H_
