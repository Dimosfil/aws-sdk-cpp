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

#include <aws/workdocs/model/DescribeFolderContentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFolderContentsResult::DescribeFolderContentsResult()
{
}

DescribeFolderContentsResult::DescribeFolderContentsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFolderContentsResult& DescribeFolderContentsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Folders"))
  {
    Array<JsonValue> foldersJsonList = jsonValue.GetArray("Folders");
    for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
    {
      m_folders.push_back(foldersJsonList[foldersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Documents"))
  {
    Array<JsonValue> documentsJsonList = jsonValue.GetArray("Documents");
    for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
    {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
