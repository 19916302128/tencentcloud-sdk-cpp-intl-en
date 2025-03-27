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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomRules.h>
#include <tencentcloud/teo/v20220901/model/ManagedRules.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security policy.
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CustomRules Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CustomRules GetCustomRules() const;

                    /**
                     * 设置Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _customRules Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCustomRules(const CustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ManagedRules Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ManagedRules GetManagedRules() const;

                    /**
                     * 设置Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _managedRules Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetManagedRules(const ManagedRules& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                private:

                    /**
                     * Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ManagedRules m_managedRules;
                    bool m_managedRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
