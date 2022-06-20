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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TAGSPECIFICATION_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TAGSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Description of tags associated with resource instances during instance creation.
                */
                class TagSpecification : public AbstractModel
                {
                public:
                    TagSpecification();
                    ~TagSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of resource that the tag is bound to. Valid values: `instance` (for CVM), `host` (for CDH) and `image` (for image).
                     * @return ResourceType The type of resource that the tag is bound to. Valid values: `instance` (for CVM), `host` (for CDH) and `image` (for image).
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The type of resource that the tag is bound to. Valid values: `instance` (for CVM), `host` (for CDH) and `image` (for image).
                     * @param ResourceType The type of resource that the tag is bound to. Valid values: `instance` (for CVM), `host` (for CDH) and `image` (for image).
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取List of tags
                     * @return Tags List of tags
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags
                     * @param Tags List of tags
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The type of resource that the tag is bound to. Valid values: `instance` (for CVM), `host` (for CDH) and `image` (for image).
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * List of tags
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TAGSPECIFICATION_H_
