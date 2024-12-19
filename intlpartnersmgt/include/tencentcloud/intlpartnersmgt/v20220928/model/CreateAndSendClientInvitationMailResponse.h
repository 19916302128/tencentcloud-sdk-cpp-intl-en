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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * CreateAndSendClientInvitationMail response structure.
                */
                class CreateAndSendClientInvitationMailResponse : public AbstractModel
                {
                public:
                    CreateAndSendClientInvitationMailResponse();
                    ~CreateAndSendClientInvitationMailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the invitation link for the customer.
                     * @return InvitationLink Specifies the invitation link for the customer.
                     * 
                     */
                    std::string GetInvitationLink() const;

                    /**
                     * 判断参数 InvitationLink 是否已赋值
                     * @return InvitationLink 是否已赋值
                     * 
                     */
                    bool InvitationLinkHasBeenSet() const;

                private:

                    /**
                     * Specifies the invitation link for the customer.
                     */
                    std::string m_invitationLink;
                    bool m_invitationLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILRESPONSE_H_
