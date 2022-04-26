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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERTHIRDPARTYACCOUNTINFORESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERTHIRDPARTYACCOUNTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/ThirdPartyAccountInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeUserThirdPartyAccountInfo response structure.
                */
                class DescribeUserThirdPartyAccountInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserThirdPartyAccountInfoResponse();
                    ~DescribeUserThirdPartyAccountInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID.
                     * @return UserId User ID.
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Third-Party account binding information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ThirdPartyAccounts Third-Party account binding information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ThirdPartyAccountInfo> GetThirdPartyAccounts() const;

                    /**
                     * 判断参数 ThirdPartyAccounts 是否已赋值
                     * @return ThirdPartyAccounts 是否已赋值
                     */
                    bool ThirdPartyAccountsHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Third-Party account binding information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ThirdPartyAccountInfo> m_thirdPartyAccounts;
                    bool m_thirdPartyAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERTHIRDPARTYACCOUNTINFORESPONSE_H_
