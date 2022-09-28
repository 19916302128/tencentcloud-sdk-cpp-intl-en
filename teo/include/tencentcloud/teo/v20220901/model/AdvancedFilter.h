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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDFILTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Key-value pair filters for conditional filtering queries and fuzzy queries, such as filtering ID, name, and status.
If there are multiple filters, they’re combined with `AND`.
Values of the same Filter are combined with `OR`.
                */
                class AdvancedFilter : public AbstractModel
                {
                public:
                    AdvancedFilter();
                    ~AdvancedFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the field to filter.
                     * @return Name The name of the field to filter.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the field to filter.
                     * @param Name The name of the field to filter.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Values of the filtered field.
                     * @return Values Values of the filtered field.
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Values of the filtered field.
                     * @param Values Values of the filtered field.
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Whether to enable fuzzy query.
                     * @return Fuzzy Whether to enable fuzzy query.
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Whether to enable fuzzy query.
                     * @param Fuzzy Whether to enable fuzzy query.
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * The name of the field to filter.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Values of the filtered field.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to enable fuzzy query.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDFILTER_H_
