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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DeleteAccountGroup request structure.
                */
                class DeleteAccountGroupRequest : public AbstractModel
                {
                public:
                    DeleteAccountGroupRequest();
                    ~DeleteAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of account group IDs.
                     * @return AccountGroupIdList Array of account group IDs.
                     */
                    std::vector<std::string> GetAccountGroupIdList() const;

                    /**
                     * 设置Array of account group IDs.
                     * @param AccountGroupIdList Array of account group IDs.
                     */
                    void SetAccountGroupIdList(const std::vector<std::string>& _accountGroupIdList);

                    /**
                     * 判断参数 AccountGroupIdList 是否已赋值
                     * @return AccountGroupIdList 是否已赋值
                     */
                    bool AccountGroupIdListHasBeenSet() const;

                private:

                    /**
                     * Array of account group IDs.
                     */
                    std::vector<std::string> m_accountGroupIdList;
                    bool m_accountGroupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEACCOUNTGROUPREQUEST_H_
