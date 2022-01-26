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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Namespace usage information
                */
                class NamespaceUsage : public AbstractModel
                {
                public:
                    NamespaceUsage();
                    ~NamespaceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function array
                     * @return Functions Function array
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置Function array
                     * @param Functions Function array
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return Namespace Namespace name
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name
                     * @param Namespace Namespace name
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Number of functions in namespace
                     * @return FunctionsCount Number of functions in namespace
                     */
                    int64_t GetFunctionsCount() const;

                    /**
                     * 设置Number of functions in namespace
                     * @param FunctionsCount Number of functions in namespace
                     */
                    void SetFunctionsCount(const int64_t& _functionsCount);

                    /**
                     * 判断参数 FunctionsCount 是否已赋值
                     * @return FunctionsCount 是否已赋值
                     */
                    bool FunctionsCountHasBeenSet() const;

                private:

                    /**
                     * Function array
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Number of functions in namespace
                     */
                    int64_t m_functionsCount;
                    bool m_functionsCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
