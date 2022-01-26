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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Opening and closing credits parameters
                */
                class HeadTailParameter : public AbstractModel
                {
                public:
                    HeadTailParameter();
                    ~HeadTailParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Opening credits list
                     * @return HeadSet Opening credits list
                     */
                    std::vector<MediaInputInfo> GetHeadSet() const;

                    /**
                     * 设置Opening credits list
                     * @param HeadSet Opening credits list
                     */
                    void SetHeadSet(const std::vector<MediaInputInfo>& _headSet);

                    /**
                     * 判断参数 HeadSet 是否已赋值
                     * @return HeadSet 是否已赋值
                     */
                    bool HeadSetHasBeenSet() const;

                    /**
                     * 获取Closing credits list
                     * @return TailSet Closing credits list
                     */
                    std::vector<MediaInputInfo> GetTailSet() const;

                    /**
                     * 设置Closing credits list
                     * @param TailSet Closing credits list
                     */
                    void SetTailSet(const std::vector<MediaInputInfo>& _tailSet);

                    /**
                     * 判断参数 TailSet 是否已赋值
                     * @return TailSet 是否已赋值
                     */
                    bool TailSetHasBeenSet() const;

                private:

                    /**
                     * Opening credits list
                     */
                    std::vector<MediaInputInfo> m_headSet;
                    bool m_headSetHasBeenSet;

                    /**
                     * Closing credits list
                     */
                    std::vector<MediaInputInfo> m_tailSet;
                    bool m_tailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_
