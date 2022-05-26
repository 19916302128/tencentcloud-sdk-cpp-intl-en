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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREADONLYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREADONLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceReadOnly request structure.
                */
                class ModifyInstanceReadOnlyRequest : public AbstractModel
                {
                public:
                    ModifyInstanceReadOnlyRequest();
                    ~ModifyInstanceReadOnlyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance input mode. Valid values: `0` (read/write), `1` (read-only)
                     * @return InputMode Instance input mode. Valid values: `0` (read/write), `1` (read-only)
                     */
                    std::string GetInputMode() const;

                    /**
                     * 设置Instance input mode. Valid values: `0` (read/write), `1` (read-only)
                     * @param InputMode Instance input mode. Valid values: `0` (read/write), `1` (read-only)
                     */
                    void SetInputMode(const std::string& _inputMode);

                    /**
                     * 判断参数 InputMode 是否已赋值
                     * @return InputMode 是否已赋值
                     */
                    bool InputModeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance input mode. Valid values: `0` (read/write), `1` (read-only)
                     */
                    std::string m_inputMode;
                    bool m_inputModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREADONLYREQUEST_H_
