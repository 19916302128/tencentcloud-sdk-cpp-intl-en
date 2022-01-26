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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BILLAREAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BILLAREAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BillCountryInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Region information, `DescribeAreaBillBandwidthAndFluxList` output parameter
                */
                class BillAreaInfo : public AbstractModel
                {
                public:
                    BillAreaInfo();
                    ~BillAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name
                     * @return Name Region name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Region name
                     * @param Name Region name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Detailed country information
                     * @return Countrys Detailed country information
                     */
                    std::vector<BillCountryInfo> GetCountrys() const;

                    /**
                     * 设置Detailed country information
                     * @param Countrys Detailed country information
                     */
                    void SetCountrys(const std::vector<BillCountryInfo>& _countrys);

                    /**
                     * 判断参数 Countrys 是否已赋值
                     * @return Countrys 是否已赋值
                     */
                    bool CountrysHasBeenSet() const;

                private:

                    /**
                     * Region name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Detailed country information
                     */
                    std::vector<BillCountryInfo> m_countrys;
                    bool m_countrysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BILLAREAINFO_H_
