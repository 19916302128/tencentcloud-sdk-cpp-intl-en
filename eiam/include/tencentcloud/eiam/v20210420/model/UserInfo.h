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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * User information list.
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserId User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DisplayName Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserName Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Phone User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Phone User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Email Email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Email Email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataSource Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DataSource Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                private:

                    /**
                     * User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFO_H_
