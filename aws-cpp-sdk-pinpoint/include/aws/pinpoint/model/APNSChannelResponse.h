﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Apple Distribution Push Notification Service channel definition.
   */
  class AWS_PINPOINT_API APNSChannelResponse
  {
  public:
    APNSChannelResponse();
    APNSChannelResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    APNSChannelResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The ID of the application to which the channel applies.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application to which the channel applies.
     */
    inline APNSChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application to which the channel applies.
     */
    inline APNSChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application to which the channel applies.
     */
    inline APNSChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

    /**
     * When was this segment created
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * When was this segment created
     */
    inline APNSChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * When was this segment created
     */
    inline APNSChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * When was this segment created
     */
    inline APNSChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}

    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline APNSChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline APNSChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline APNSChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline APNSChannelResponse& WithId(const char* value) { SetId(value); return *this;}

    /**
     * Is this channel archived
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * Is this channel archived
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * Is this channel archived
     */
    inline APNSChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}

    /**
     * Who last updated this entry
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * Who last updated this entry
     */
    inline APNSChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * Who last updated this entry
     */
    inline APNSChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * Who last updated this entry
     */
    inline APNSChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}

    /**
     * Last date this was updated
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * Last date this was updated
     */
    inline APNSChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Last date this was updated
     */
    inline APNSChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * Last date this was updated
     */
    inline APNSChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}

    /**
     * The platform type. Will be APNS.
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * The platform type. Will be APNS.
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * The platform type. Will be APNS.
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * The platform type. Will be APNS.
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * The platform type. Will be APNS.
     */
    inline APNSChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * The platform type. Will be APNS.
     */
    inline APNSChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * The platform type. Will be APNS.
     */
    inline APNSChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}

    /**
     * Version of channel
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * Version of channel
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * Version of channel
     */
    inline APNSChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    bool m_isArchived;
    bool m_isArchivedHasBeenSet;
    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;
    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
    Aws::String m_platform;
    bool m_platformHasBeenSet;
    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
