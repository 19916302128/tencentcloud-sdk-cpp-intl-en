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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSEXTRA_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Supplementary agent status information.
                */
                class StaffStatusExtra : public AbstractModel
                {
                public:
                    StaffStatusExtra();
                    ~StaffStatusExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IM - Text | TEL - Cell phone | ALL - Full media.
                     * @return Type IM - Text | TEL - Cell phone | ALL - Full media.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IM - Text | TEL - Cell phone | ALL - Full media.
                     * @param _type IM - Text | TEL - Cell phone | ALL - Full media.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取IN - Inbound | OUT - Outbound.
                     * @return Direct IN - Inbound | OUT - Outbound.
                     * 
                     */
                    std::string GetDirect() const;

                    /**
                     * 设置IN - Inbound | OUT - Outbound.
                     * @param _direct IN - Inbound | OUT - Outbound.
                     * 
                     */
                    void SetDirect(const std::string& _direct);

                    /**
                     * 判断参数 Direct 是否已赋值
                     * @return Direct 是否已赋值
                     * 
                     */
                    bool DirectHasBeenSet() const;

                private:

                    /**
                     * IM - Text | TEL - Cell phone | ALL - Full media.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * IN - Inbound | OUT - Outbound.
                     */
                    std::string m_direct;
                    bool m_directHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSEXTRA_H_
