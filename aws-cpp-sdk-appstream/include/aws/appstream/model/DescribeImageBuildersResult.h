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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImageBuilder.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API DescribeImageBuildersResult
  {
  public:
    DescribeImageBuildersResult();
    DescribeImageBuildersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImageBuildersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ImageBuilder>& GetImageBuilders() const{ return m_imageBuilders; }

    
    inline void SetImageBuilders(const Aws::Vector<ImageBuilder>& value) { m_imageBuilders = value; }

    
    inline void SetImageBuilders(Aws::Vector<ImageBuilder>&& value) { m_imageBuilders = std::move(value); }

    
    inline DescribeImageBuildersResult& WithImageBuilders(const Aws::Vector<ImageBuilder>& value) { SetImageBuilders(value); return *this;}

    
    inline DescribeImageBuildersResult& WithImageBuilders(Aws::Vector<ImageBuilder>&& value) { SetImageBuilders(std::move(value)); return *this;}

    
    inline DescribeImageBuildersResult& AddImageBuilders(const ImageBuilder& value) { m_imageBuilders.push_back(value); return *this; }

    
    inline DescribeImageBuildersResult& AddImageBuilders(ImageBuilder&& value) { m_imageBuilders.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeImageBuildersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeImageBuildersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeImageBuildersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageBuilder> m_imageBuilders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
