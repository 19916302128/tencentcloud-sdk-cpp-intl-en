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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAsyncContextTask response structure.
                */
                class CreateAsyncContextTaskResponse : public AbstractModel
                {
                public:
                    CreateAsyncContextTaskResponse();
                    ~CreateAsyncContextTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Offline context search task ID
                     * @return AsyncContextTaskId Offline context search task ID
                     */
                    std::string GetAsyncContextTaskId() const;

                    /**
                     * 判断参数 AsyncContextTaskId 是否已赋值
                     * @return AsyncContextTaskId 是否已赋值
                     */
                    bool AsyncContextTaskIdHasBeenSet() const;

                private:

                    /**
                     * Offline context search task ID
                     */
                    std::string m_asyncContextTaskId;
                    bool m_asyncContextTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKRESPONSE_H_
