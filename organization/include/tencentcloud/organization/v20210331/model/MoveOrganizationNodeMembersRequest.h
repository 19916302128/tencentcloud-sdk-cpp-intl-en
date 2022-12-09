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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MOVEORGANIZATIONNODEMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MOVEORGANIZATIONNODEMEMBERSREQUEST_H_

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
                * MoveOrganizationNodeMembers request structure.
                */
                class MoveOrganizationNodeMembersRequest : public AbstractModel
                {
                public:
                    MoveOrganizationNodeMembersRequest();
                    ~MoveOrganizationNodeMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization node ID.
                     * @return NodeId Organization node ID.
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置Organization node ID.
                     * @param NodeId Organization node ID.
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Member UIN list.
                     * @return MemberUin Member UIN list.
                     */
                    std::vector<int64_t> GetMemberUin() const;

                    /**
                     * 设置Member UIN list.
                     * @param MemberUin Member UIN list.
                     */
                    void SetMemberUin(const std::vector<int64_t>& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * Organization node ID.
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Member UIN list.
                     */
                    std::vector<int64_t> m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MOVEORGANIZATIONNODEMEMBERSREQUEST_H_
