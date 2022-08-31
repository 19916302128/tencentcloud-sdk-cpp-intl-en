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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/GrafanaAccountRole.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TCMG authorized account information
                */
                class GrafanaAccountInfo : public AbstractModel
                {
                public:
                    GrafanaAccountInfo();
                    ~GrafanaAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User account ID
                     * @return UserId User account ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User account ID
                     * @param UserId User account ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User permission
                     * @return Role User permission
                     */
                    std::vector<GrafanaAccountRole> GetRole() const;

                    /**
                     * 设置User permission
                     * @param Role User permission
                     */
                    void SetRole(const std::vector<GrafanaAccountRole>& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Notes Remarks
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置Remarks
                     * @param Notes Remarks
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateAt Creation time
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Creation time
                     * @param CreateAt Creation time
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     */
                    bool CreateAtHasBeenSet() const;

                private:

                    /**
                     * User account ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User permission
                     */
                    std::vector<GrafanaAccountRole> m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_
