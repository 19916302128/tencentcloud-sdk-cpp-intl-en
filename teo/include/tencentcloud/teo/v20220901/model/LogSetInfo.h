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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGSETINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGSETINFO_H_

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
                * Logset information
                */
                class LogSetInfo : public AbstractModel
                {
                public:
                    LogSetInfo();
                    ~LogSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the logset.
                     * @return LogSetRegion Region of the logset.
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置Region of the logset.
                     * @param LogSetRegion Region of the logset.
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取Name of the logset.
                     * @return LogSetName Name of the logset.
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置Name of the logset.
                     * @param LogSetName Name of the logset.
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取ID of the logset.
                     * @return LogSetId ID of the logset.
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置ID of the logset.
                     * @param LogSetId ID of the logset.
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Whether the logset is deleted. Values:
<li>`no`: The logset is not deleted;</li>
<li>`yes`: The logset is deleted.</li>
                     * @return Deleted Whether the logset is deleted. Values:
<li>`no`: The logset is not deleted;</li>
<li>`yes`: The logset is deleted.</li>
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置Whether the logset is deleted. Values:
<li>`no`: The logset is not deleted;</li>
<li>`yes`: The logset is deleted.</li>
                     * @param Deleted Whether the logset is deleted. Values:
<li>`no`: The logset is not deleted;</li>
<li>`yes`: The logset is deleted.</li>
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * Region of the logset.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * Name of the logset.
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * ID of the logset.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Whether the logset is deleted. Values:
<li>`no`: The logset is not deleted;</li>
<li>`yes`: The logset is deleted.</li>
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGSETINFO_H_
